/*
sudoku	2015-03-30 01:03
Program name : sudoku game
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program is a sudoku solver .
*/
#include <dataStructure.h>
#include <stdio.h>
#include <ui.h>
#include <tester.h>
#include <solver.h>
int main(int argc, const char *argv[])
{
	getPuzzle();
	backtrack(0);
	printPuzzle();
	return 0;
}
