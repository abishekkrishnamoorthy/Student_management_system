#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stud_ma.h"
student s[10];

void add_data(){
	int no_data;
	int op;
	char phone[10];
        char dept[50];

       //DEPT choosing
	printf("\nDepartment: ");
	printf("1. ug  2. pg");
	scanf("%d",&op);
	while(op > 2 || op < 0){
	printf("\nYou choose invalid option, so Try again!\n\n");
	printf("1. ug  2. pg");
	scanf("%d",&op);
	}
        if(op<=2 && op>0){
		if(op==1){
			printf("\n choose department");
			printf("1.B,sc IT 2. B,sc CS 3.B,sc pharmacy");
		        scanf("%d",&op);
		        switch(op){
				case 1:snprintf(dept, 50, "Bsc IT");
				       break;
				case 2:snprintf(dept, 50,  "Bsc CS");
				       break;
				case 3:snprintf(dept, 50, "Bsc Pharmacy");
				       break;
			}	

		}
	       else if(op==2){
                        printf("\n choose department");
                        printf("1.MCA  2. MBA  3.M,sc pharmacy");
                        scanf("%d",&op);
                        switch(op){
                                case 1:snprintf(dept, 50, "MCA");
                                       break;
                                case 2:snprintf(dept, 50,  "MBA");
                                       break;
                                case 3:snprintf(dept, 50, "M,sc pharmacy");
				       break;
                        }

                }
		
	}
        printf("\n%s\n",dept);

        printf("\nhow many records are you going yo add?");
	scanf("%d",&no_data);
	for (int i = 0; i < no_data; i++) {
	strcpy(s[i].dept, dept);
	printf("\nStudent reg_no: ");
	scanf("%d",&s[i].reg_no);
	printf("\nStudent name: ");
	scanf("%s",s[i].name);
	printf("\nStudent age: ");
	scanf("%d",&s[i].age);
	printf("\n1. male  2. female");
	printf("\nstudent gender: ");
	scanf("%d",&op);
	switch(op){
		case 1: snprintf(s[i].gender, 10, "male");
			break;
		case 2: snprintf(s[i].gender,10, "female");
			break;
	} 
        printf("\nPhone Number :");
	scanf("%s",phone);
        while(strlen(phone)!=10) {
		printf("\nre-enter the correct number:");
		scanf("%s",phone);
	}
        strcpy(s[i].phone,phone);

        printf("\nYear from :");
	scanf("%d",&s[i].year_from);
	while(s[i].year_from/100 != 20 || s[i].year_from%100 >24){
          printf("\nYou enter invalid year!, plz re_enter the year");
	  printf("\nYear from:");
	  scanf("%d",&s[i].year_from);
	}
	
	printf("\nYear to :");
        scanf("%d",&s[i].year_to);

        while(s[i].year_to/100 != 20 || s[i].year_to%100 >(s[i].year_from+6)%100){
          printf("\nYou enter invalid year!, plz re_enter the year");
          printf("\nYear to:");
          scanf("%d",&s[i].year_to);
        }

        printf("\nfather name: ");
        scanf("%s",s[i].father_name);
       
        printf("\nparents phone number:");
	scanf("%s",phone);
	while(strlen(phone)!=10) {
                printf("\nre-enter the correct number:");
                scanf("%s",phone);
        }
        strcpy(s[i].father_phone,phone);

	//mark
	int sum;
	printf("\nFill your marks ");
	for(int j=0;j<5;j++){
		printf("\nSubject %d: ",j+1);
		scanf("%d",&s[i].sub_mark[j]);
		sum=sum+s[i].sub_mark[j];
		printf("\n sum is %d ",sum);
	}

        printf("\n sum is %d ",sum);
	s[i].percentage=sum/5;
        printf("\n %d",s[i].percentage);


    }
        
}
