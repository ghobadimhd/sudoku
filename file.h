/*
this is function for reading sudoku from puzzle .
*/
int readFromFile(char path[])
{
	int *linear  = puzzle , i=0;
	FILE *fptr  ;
	fptr = fopen(path , "r");
	if(fptr == NULL)
		return 0;
	char cell ; 
	cell = fgetc(fptr);
	while (cell != EOF && i < 81) 
	{
		if ( cell > 47 && cell <58 )
		{
			linear[i++] = cell - 48 ;
		}
		cell = fgetc(fptr);
	}
	return 1 ;
}
/*
this is function for saving result in file .
*/
int saveInFile(char path[])
{
	FILE *fptr  ;
	fptr = fopen(path , "w");
	if(fptr == NULL)
		return 0;
	char cell ; 
	cell = fgetc(fptr);
	for (int i = 0; i <9; i++) 
	{
		for (int j = 0; j <9; j++) 
		{
			fprintf(fptr, "%d",puzzle[i][j]);
		}
		fprintf(fptr, "\n");
	}
	return 1 ;
}
