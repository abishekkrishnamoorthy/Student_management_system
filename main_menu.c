#include<stdio.h>
#include<stdlib.h>
#include"stud_ma.h"
void main_menu(int key){
        int op;
        int back;
        int exit=1;
        int value;
        if(key==1){
        do{
        back=0;
        system("clear");
        printf("\nSelect option\n");
        printf("\n1. add new data  \n2. Database \n3. Exit\n");
        scanf("%d",&op);
        do{
        switch(op)
        {
                case 1:new_data();
                        printf("\nDo u want  go back to main menu, press 0 \nor\nIf u want to go back to Edit menu, press 1\n");
                        scanf("%d",&value);
                        if(value==1) back=1; else {exit=0; back=1;}
                        break;
       }
        }while(back!=1);
         }while(exit!=0);
      }
}
