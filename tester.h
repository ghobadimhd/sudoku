/*
this is function for testing a cell in it's row .
it's read cell value and count cells with same value in it's row more than one is not valid
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
it's read cell value and count cells with same value in it's column more than one is not valid
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
	return 1;
}
/*
this is function for testing a cell in it's box .
function search the cells box for value of the cell , more than 1 match is not valid 
*/
int boxTest(int row , int column)
{
	int cellValue = puzzle[row][column] , count = 0;
	int i=row / 3 * 3 , j = column / 3 * 3 , // calculating first cell of box
	    toRow = i + 2 , toColumn = j + 2 ; // calculating end of rows and columns of box 
	if(cellValue != 0)
		for(; i <= toRow ; i++)
			for(j = column / 3 * 3 ; j <= toColumn ; j++)
				if (puzzle[i][j] == cellValue)
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
