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
/*
this is function for testing a cell in it's column .
*/
int columnTest(int row , int column)
{
	int cellValue = puzzle[row][column] , count = 0;
	if(cellValue != 0) 
		// count same cell value in it's column 
		for(int i = 0 ; i < 9 ; i++)
			if (puzzle[i][column] == cellValue)
					count++;
	if (count > 1 )	// there is repeated value in column 
		return 0 ;
}
/*
this is function for testing a cell in it's box .
*/
int boxTest(int row , int column)
{
	int cellValue = puzzle[row][column] , count = 0;
	int i=row / 3 * 3 , j = column / 3 * 3 ;
	if(cellValue != 0)
		for(; i < 3 ; i++)
			for(; j < 3 ; j++)
				if (puzzle[row][column] == cellValue)
					count++;
	if (count > 1 )	
			return 0 ;
	return 1 ;
}
/*
this is function for getting a full test for a cell .
*/
int cellTest(int row , int column )
{
	// if one of tests return 0 , cell value is invalid .
	if( rowTest(row , column ) + columnTest(row , column ) + boxTest(row , column )   < 3 )
				return 0;
	return 1 ;

}
