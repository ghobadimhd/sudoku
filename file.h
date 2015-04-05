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
