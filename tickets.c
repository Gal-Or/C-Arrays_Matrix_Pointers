#include "tickets.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

#define SIZE 7


void getUserInput(int *pDay,int *pNumOfTickets)
{	//get information about the festival from user
	
		printf("\nPlease enter a day number (between 1-7 , 0 to finish): \n");
		scanf("%d", pDay);
		if(*pDay<=7 && *pDay>0 )
		{
			printf("\nPlease enter number of tickets: \n");
			scanf("%d", pNumOfTickets);
		}
	
	

}
void findMaxMin(int *arr ,int *pMaxDay,int *pMinDay)
{	//find the The best salse day and the worst salse day 
	
	*pMaxDay = 0;
	*pMinDay = 0;
	int max = *arr;
	int min = *arr;

	for(int i =0; i<SIZE; i++)
	{	
		if(*(arr+i)>max)
		{
			max = *(arr+i);
			*pMaxDay = i;
		}
		else if(*(arr+i)< min)
		{
			min = *(arr+i); 
			*pMinDay = i;
		}
			
	}
}

void printResultFestival(int *arr, int *pMaxDay,int *pMinDay)
{	//print the result
	printf("\n The Best Salse Day Is: %d , %d tickets are sold! \n ",(*pMaxDay)+1, *(arr+(*pMaxDay)));
	printf("\n The Worst Salse Day Is: %d , %d tickets are sold! \n ",(*pMinDay)+1, *(arr+(*pMinDay)));

}

void doTickets()
{	//main mathod 
	int day, numOfTickets, maxDay, minDay;
	int *pDay= &day;
	int *pNumOfTickets= &numOfTickets;
	int *pMaxDay = &maxDay;
	int *pMinDay = &minDay;
	int arr[SIZE];

	do
	{
		getUserInput(pDay,pNumOfTickets);
		if(day !=0)
		*(arr+day-1) = numOfTickets;

	}while(day != 0 );
	findMaxMin(arr ,pMaxDay,pMinDay);
	printResultFestival(arr,pMaxDay,pMinDay);

}
