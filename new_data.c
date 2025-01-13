#include<stdio.h>
#include<stdlib.h>
#include"stud_ma.h"
void new_data(){
	int op;
        int back;
        int exit=1;
        int value;
	
	system("clear");
        add_data();
        system("clear");

        do{
        back=0;
        printf("\nSelect option\n");
        printf("\n 1. View data \n 2. Modify data \n 3. Delete \n 4. search records \n 5. Exit\n");
        scanf("%d",&op);
        do{
        switch(op)
        {
                case 1:view_data();
                        printf("\nDo u want  go back to main menu, press 0 \nor\nIf u want to go back to Edit menu, press 1\n");
                        scanf("%d",&value);
                        if(value==1) back=1; else {exit=0; back=1;}
                        break;
                case 2:modify_data();
                       printf("\nDo u want go back to main menu, press 0 \nor\nIf u want to go back to Edit menu, press 1\n");
                       scanf("%d",&value);
                       if(value==1) back=1; else {exit=0; back=1;}
                       break;
     }
    }while(back!=1);
   }while(exit!=0);
  }                              
