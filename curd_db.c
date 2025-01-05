#include<stdio.h>
#include<mongoc/mongoc.h>
#include "stud_ma.h"

void upload(char *dept){
     mongoc_client_t *client;
     mongoc_collection_t *col;
     bson_t *doc;
     bson_error_t  error;
     mongoc_init();
     client = mongoc_client_new("mongodb://localhost:27017");
     col=mongoc_client_get_collection(client,"student_record", dept);
     doc=bson_new();
     BSON_APPEND_UTF8(doc,"name","king");
     if(mongoc_collection_insert_one(col,doc,NULL,NULL, &error)) printf("sucess");
     else printf("error");
     bson_destroy(doc);
     mongoc_collection_destroy(col);
     mongoc_client_destroy(client);
     mongoc_cleanup();
}
