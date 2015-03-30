/*
this is function for testing a cell in it's row .
*/
int rowTest(int row , int column)
{
	int cellValue = puzzle[row][column] , count = 0;
	if(cellValue != 0) 
		// count same cell value in it's row 
		for(int i = 0 ; i < 9 ; i++)
			if (puzzle[row][i] == cellValue)
					count++;
	if (count > 1 )	// there is repeated value in row 
		return 0 ;
	return 1 ;
}
