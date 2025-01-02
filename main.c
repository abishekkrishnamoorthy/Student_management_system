#include <stdio.h>
#include "stud_ma.h"
int main(){
	int welcome;
	conn();
	printf("Welcome to Student management system \n");
	scanf("%d",&welcome);
	first_page(welcome);
	return 0;
}
