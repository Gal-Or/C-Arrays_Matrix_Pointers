#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

//Gal OR , ID: 316083690
//Koral Nataf , ID: 208726257

#include "CheckNumbers.h"
#include "sudoku.h"
#include "tickets.h"

#define CHECK_NUMBERS 1
#define TICKETS		 2	
#define SUDOKU		 3
#define EXIT		-1

int showMenu();

int main()
{
	int opt;
	srand(time(NULL));
	do
	{

	opt= showMenu();
	switch (opt)
		{
		case CHECK_NUMBERS:
			checkNumbers();
			break;


		case TICKETS:
			doTickets();
			break;

		case SUDOKU:
			sudokuGame();
			break;

		case EXIT:
			printf("Bye bye\n");
			break;

		default:
			printf("Wrong option\n");
			break;
		}

	} while (opt != -1);
}


int showMenu()
{
	int iOption;

	printf("\n\n");
	printf("Please choose one of the following options\n");
	printf("%d - Correct Numbers\n", CHECK_NUMBERS);
	printf("%d - Tickets sale\n", TICKETS);
	printf("%d - Sudoku\n", SUDOKU);
	printf("%d - Exit\n", EXIT);

	scanf("%d", &iOption);

	return iOption;
}
