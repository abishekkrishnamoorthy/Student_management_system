#include <stdio.h>
#include "stud_ma.h"
#include <string.h>
void view_data(){
      for (int i = 0; i < 10; i++) {
        printf("Name: %s, Age: %d ,Gender:%s, phone:%ld , Dept:%s\n", s[i].name, s[i].age, s[i].gender, strlen(s[i].phone), s[i].dept);
    }
}




