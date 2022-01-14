#include "CheckNumbers.h"
#include "general.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define LEN 20
#define MAXVALMAX 1000 
#define MAXVALMIN 10 

void getRandom(int *pMax,int *pMin)
{	//get random range
	*pMax = rand()%MAXVALMAX;
	*pMin = rand()%MAXVALMIN;

}

void countDigits(int num ,int *p1Digit, int *p2Digit, int *p3Digit)
{	//count how much numbers are 1 digit, 2 digits and 3 digits
	
	if(num <10)
		(*p1Digit)++;
	else if(num>9 && num<100 )
		(*p2Digit)++;
	else 
		(*p3Digit)++;	
}

void printResult(int ok, int digit1,int digit2, int digit3 )
{	//print the result
	if(ok ==0)
		printf("NOT ");
		
	printf("all numbers are OK! %d -> 1-digit numbers, %d -> 2-digit numbers, %d -> 3-digit numbers ", digit1,digit2,digit3  );
	
	

}

int checkIfOk( int* arr, int size, int max, int min, int *p1Digit,int *p2Digit, int *p3Digit )
{	//check if the numbers are int the range	
	int flag =1;
	for (int i = 0; i < size; i++)
	{
		if(*(arr+i) > min && *(arr+i) < max )
			countDigits(*(arr+i),p1Digit, p2Digit, p3Digit);
		else flag =0;
		
		
	}
	return flag;
}

void checkNumbers()
{	//main method of the game
	int arr[LEN];
	int size;
	int max, min;
	int digit1=0;
	int digit2=0;
	int digit3=0;
	
	getRandom(&max,&min);
	
	do{
	printf("Please enter the size of array (less then 20): \n");
	scanf("%d", &size);
	}while(size > LEN);

	printf("Please enter the numbers:\n ");
	for (int i = 0; i < size ; i++)
	{
		scanf("%d", (arr+i));
	}
	
	int ok = checkIfOk(arr, size, max, min, &digit1, &digit2, &digit3);
	printResult(ok, digit1, digit2, digit3 );
	printf("\n max = %d , min = %d \n", max, min);
	
	
}




