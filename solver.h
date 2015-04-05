/*
this is function for solving puzzle in backtrack way .
the function a cell and try numbers from 1 to 9 , if one of numbers can take place and have no problem , function go to next cell by calling him self
if there is no number for a cell function return 0 and back to previous cell and try for other numbers ...
*/
int backtrack(int cellNumber)
{
	// cellNumber is number of cell if we lined up cell of puzzle from up to down and left to right 
	if ( cellNumber < 81 ) 
	{
		// determine cell row and column in puzzle , it's used in Test's function
		int row = cellNumber / 9  ,
		column = (cellNumber % 9 ) ;
		if(puzzle[row][column] == 0) // if cell is empty 
		{
			for(int i=1 ; i < 10 ; i++) 
			{
				// testing cell for numbers 
					puzzle[row][column]=i;
					if(cellTest(row , column));
						if( backtrack(cellNumber + 1) ) // if other cells filled and return true , it's means this number also ok
							return 1;		// and function most return true 
			}
			puzzle[row][column]=0;// if nothing work , clear the cell and make it empty cell
			return 0 ; // no match 
		}
		else	// if cell have number pass it 
			if( backtrack(cellNumber + 1) )
				return 1;
			else
				return 0;
	}
	return 1 ; // there is no cell to test and fill so it's means puzzle solved and we return true 
}
