#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int data[5];
	int i;
	
	data[0] = 10;
	data[1] = 20;
	data[2] = 30;
	data[3] = 40;
	data[4] = 50;
	for (i=0;i<5;i++)
	 printf("data[%i] = %i\n", i, data[i]);
		
	return 0;
}
