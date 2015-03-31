/*
this is function for solving puzzle in backtrack way .
*/
int backtrack(int cellNumber)
{
	if ( cellNumber < 81 ) 
	{
		int row = cellNumber / 9  ,
		column = (cellNumber % 9 ) ;
		if(puzzle[row][column] == 0)
		{
			for(int i=1 ; i < 10 ; i++) 
			{
				
					puzzle[row][column]=i;
					if(cellTest(row , column));
						if( backtrack(cellNumber + 1) )
							return 1;
			}
			puzzle[row][column]=0;
			return 0 ; // no match 
		}
		else
			if( backtrack(cellNumber + 1) )
				return 1;
			else
				return 0;
	}
	return 1 ; 
}
