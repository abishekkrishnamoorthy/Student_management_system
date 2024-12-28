#include<stdio.h>
#include<stdlib.h>
#include "stud_ma.h"


int index_rollno(int roll_no){  
	int index;
	int i=0;
	while(i<=10){
               if(roll_no==s[i].reg_no){
		       index=i;
		       i=10;
	       }
	       i++;
	}
	return index;
}

void modify(int index){
      add(s[index].dept,index);
}


void by_rollno(){
	int roll_no;
	printf("\nRoll_no of a Student:  ");
	scanf("%d",&roll_no);
	printf("%d",index_rollno(roll_no));
        if(index_rollno(roll_no)<11){
		int index=index_rollno(roll_no);
		printf("\nstudent data founded");
		modify(index);
	}else printf("\n not founded");
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
        switch(op){
		case 1: printf("Its under process");
			break;
		case 2: by_rollno();
			break;
	}  
}
