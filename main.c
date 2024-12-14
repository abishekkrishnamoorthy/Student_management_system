#include <stdio.h>
#include <curses.h>
#include "stud_ma.h"
int main(){
	int welcome;
	printf("Welcome to Student management system ");
	scanf("%d",&welcome);
	first_page(welcome);
	add_data();
	view_data();
	return 0;
}
