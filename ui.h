/*
this is function for get puzzle from terminal .
*/
void getPuzzle()
{
	char row[9];
	printf("Please enter each row of puzzle and press enter .\n0 stand for a empty cell\n");
	for (int i = 0; i <9; i++) 
	{
		scanf("%s",row);
		for (int j = 0; j <9; j++) 
		{
			puzzle[i][j] = row[j] - 48;
		}
	}
	printf("Thanks.. please wait...\n");
}
/*
 *  * this is function for printing puzzle on screen .
 *   * */
void printPuzzle()
{
	for (int i = 0; i <9; i++) 
	{
		for (int j = 0; j <9; j++) 
		{
			printf("%d ",puzzle[i][j]);
		}
		printf("\n");
	}
}
