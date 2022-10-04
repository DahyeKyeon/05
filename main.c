#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	
	printf("enter an integer:");
	scanf("%d", &x);
	
	if(x>=0)
	printf("Absolute value is %d.\n", x);
	
	else
	printf("Absolute value is %d.\n", -1*x);
	
	return 0;
}
