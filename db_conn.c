#include<stdio.h>
#include<mongoc/mongoc.h>
#include "stud_ma.h"
void  conn(){
    const char *uri_string = "mongodb://localhost:27017"; // Connection string
    mongoc_client_t *client;
    bson_t *command;
    bson_t reply;
    bson_error_t error;

    // Initialize the MongoDB client
    mongoc_init();

    // Create a new client instance
    client = mongoc_client_new(uri_string);
    if (!client) {
        fprintf(stderr, "Failed to create a MongoDB client.\n");
    }

    // Create a ping command
    command = BCON_NEW("ping", BCON_INT32(1));

    // Execute the command
    if (!mongoc_client_command_simple(client, "admin", command, NULL, &reply, &error)) {
        fprintf(stderr, "Failed to connect to MongoDB: %s\n", error.message);
        bson_destroy(command);
        mongoc_client_destroy(client);
        mongoc_cleanup();
    }

    printf("Connected to MongoDB successfully!\n");

}
