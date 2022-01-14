# C-Arrays_Matrix_Pointers

The first exercise in a C programming course. 
The exercise involves arrays, matrix and pointers.

## Description
There are three different tasks in this exercise. The main program will display a start menu that allows the user to select a task or exit.

#### The Start Menu:
Enter your choice of exe
1. Check Numbers
2. Tickets
3. Sudoku
4. -1 to exit

#### Task 1 - Check Numbers:
The purpose of the task is to test an array of positive numbers.
The tests:
1. Are all numbers in the required range, maximum and given minimum.
2. Count the number of numbers in the array that are single-digit, double-digit and triple-digit. Only the numbers in the required range should be counted.

  example:
  min = 0, max = 200
![image](https://user-images.githubusercontent.com/74857750/149549890-8de230a5-c5a0-480a-a090-0115d53c5e8a.png)

  The output should be:
  All numbers are OK!  4 -> 1-digit numbers,  4 -> 2-digit numbers, 2 -> 3-digit numbers.

#### Task 2 - Order Tickets:
The program captures pairs of numbers, the first is a number between 1 and 7 that indicates a day, and the second that indicates
the number of tickets ordered that day. 
The program continues to pick up pairs of numbers until the number indicating a day is 0. Of course, one should check if the numbers caught are within a valid range and ignore them if they are.
The program will print:
* What is the day to which the most tickets were invited, and how many were they.
* What is the day to which the least tickets were invited, and how many were they.

#### Task 3 - Sudoku:
The program checks the correctness of the Sudoku crossword puzzle board. The matrix will represent the sudoku board.
The size of the board is NxN, and square root of N is an integet.

The program's steps:
1. Receive from the user the correct board size for sudoku.
2. Initialize the matrix while receiving data from the user.
2. Show the matrix.
2. Write a function that accepts the board and returns whether the board is OK.

#### Task 4 - Exit:
Enter -1 in the start menu will end thew program.


## How To Run 
This project runing on Ubuntu environment(linux) or visual studio.

