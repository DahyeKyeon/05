#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x, y;
	char op;
		
	printf("enter the calculation:");
	scanf("%d %c %d", &x, &op, &y);
	
	if(op == '+') 
	printf("= %d\n", x+y);
	else if(op == '-')
	printf("= %d\n", x-y);
	else if(op == '*')
	printf("= %d\n", x*y);
	else
	printf("= %d\n", x/y);

		
	return 0;
}
