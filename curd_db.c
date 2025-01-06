#include<stdio.h>
#include<mongoc/mongoc.h>
#include "stud_ma.h"

void upload(int i){
     mongoc_client_t *client;
     mongoc_collection_t *col;
     bson_t *doc;
     bson_error_t  error;
     mongoc_init();
     client = mongoc_client_new("mongodb://localhost:27017");
     col=mongoc_client_get_collection(client,"student_record", s[i].dept);
     doc=bson_new();
     BSON_APPEND_INT32(doc,"register number",s[i].reg_no);
     BSON_APPEND_UTF8(doc,"name",s[i].name);
     BSON_APPEND_INT32(doc,"age",s[i].age);
     BSON_APPEND_UTF8(doc,"gender",s[i].gender);
     BSON_APPEND_UTF8(doc,"phone",s[i].phone);
     BSON_APPEND_UTF8(doc,"dept",s[i].dept);
     BSON_APPEND_UTF8(doc,"Father name",s[i].father_name);
     BSON_APPEND_UTF8(doc,"Father phone",s[i].father_phone);
     BSON_APPEND_INT32(doc,"percentage",s[i].percentage);
     BSON_APPEND_UTF8(doc,"grade",s[i].grade);
     if(mongoc_collection_insert_one(col,doc,NULL,NULL, &error)) printf("sucess");
     else printf("error");
     bson_destroy(doc);
     mongoc_collection_destroy(col);
     mongoc_client_destroy(client);
     mongoc_cleanup();
}
