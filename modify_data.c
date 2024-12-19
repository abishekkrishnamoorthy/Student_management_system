#include<stdio.h>
#include<stdlib.h>
#include "stud_ma.h"

int search_name(){
	char *name;
	int s=0;
	printf("Enter name of a student: ");
	scanf("%s",name);
	for(int i=0;i<10;i++){
		if(name==s[i].name) {
		
		}
	}
}


void  modify_data(){
	int op;
	// searching index
	printf("\n1. search by name \n2.search by roll_no ");
	scanf("%d",&op);
	while(op>2 || op<0){
        printf("\noption wrong, choose 1 or 2");
        scanf("\n%d",&op);
	}

	

}
