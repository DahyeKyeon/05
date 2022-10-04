#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int answer = 59;
	int x;
	int trial=0;
	
	do{
		printf("Guess a number:");
		scanf("%d", &x);
		trial++;
		if(x<answer){
			printf("low!\n");
		}
		else if(x>answer){
			printf("high!\n");
		}
	}while(x != answer);
	printf("congrats! trial:%d\n", trial);
		
	return 0;
}
