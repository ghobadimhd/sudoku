/*
sudoku	2015-03-30 01:03
Program name : sudoku game
Author : Mohammad Ghobadi
Email : ghobadi.mhd@outlook.com
describtion : This is program is a sudoku solver .
*/
#include <dataStructure.h>
#include <stdio.h>
#include <file.h>
#include <ui.h>
#include <tester.h>
#include <solver.h>
int main(int argc, const char *argv[])
{
	char isSaved = 'n' , path[255];
	if(argc > 1 ) 
	{
		if(!readFromFile(argv[1]))
		{
			printf("cant read from file\n");
			return 1 ;
		}
	}
	else 
		getPuzzle();
	backtrack(0);
	printPuzzle();
	printf("Do you want save it ?(y/n):");
	scanf("%c",&isSaved);
	if(isSaved == 'y')
	{
		printf("Enter the name of file :");
		scanf("%s",path);
		if(saveInFile(path))
			printf("saved.\n");
		else
			printf("saving failed\n");

	}
	return 0;
}
