#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i;
	int grade[5];
	int score[5];
	
	for (i=0;i<5;i++)
	{
		grade[i] = rand() % 100;	
	}
	
	for (i=0;i<5;i++)
	{
		score[i] = grade[i];
	}
	
	for (i=0;i<5;i++)
	{
		printf("score[%i] = %i\n", i, score[i]);
	}
	return 0;
}
