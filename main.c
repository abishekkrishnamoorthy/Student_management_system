#include <stdio.h>
#include "stud_ma.h"
int main(){
	int welcome;
	printf("Welcome to Student management system \n");
	scanf("%d",&welcome);
	main_menu(welcome);
	return 0;
}
