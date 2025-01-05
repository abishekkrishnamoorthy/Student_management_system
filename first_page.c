#include <stdio.h>
#include <stdlib.h>
#include "stud_ma.h"
void first_page(int welcome_key){
	int op;
	int back;
	int exit=1;
	int value;
	if(welcome_key==1){
	do{
	back=0;
	system("clear");
	printf("\nSelect option\n");
	printf("\n 1. Add new data \n 2. View data \n 3. Modify data \n 4. Delete \n 5. search records \n 6. Exit\n");
	scanf("%d",&op);
	do{
	switch(op)
	{
		case 1: add_data();
			printf("\n The data are ready to upload in database, \n Do u want to upload , press 2");
			printf("\n Do u want to back to edit? , press 1 \n or \n Do u want to go back to mainmenu, press 0\n");
                        scanf("%d",&value); 
			if(value==1) back=1;  
			else {exit=0; back=1;}
			break;
		case 2: view_data();
                        printf("\nDo u want to exit from all, press 0 \nor\nIf u want to go back to menu, press 1\n");
			scanf("%d",&value);
			if(value==1) back=1; else {exit=0; back=1;} 
			break;
		case 3:modify_data();
		       printf("\nDo u want to exit from all, press 0 \nor\nIf u want to go back to menu, press 1\n");
                       scanf("%d",&value);
                       if(value==1) back=1; else {exit=0; back=1;}
                       break;
       }
	}while(back!=1);
	 }while(exit!=0);
	  }

}
