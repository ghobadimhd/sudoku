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
			puzzle[i*9][j] = row[j] - 48;
		}
	}
	printf("Thanks.. please wait...\n");
}