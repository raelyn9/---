#include <stdio.h>
#include <stdbool.h>

int sudoku (int grid[9][9]);

int sudoku (int grid[9][9])
{
	int i,j,k,r,c,n=3,m=3,a=0,b=0,p;
	bool diff=true,element=true;

	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(grid[i][j]<=0&&grid[i][j]>9)
			{
					element=false;
					break;
			}

			for(k=0;k<9;k++)
			{
				if(grid[i][j]==grid[i][k]&&j!=k)
					diff=false;
				if(grid[j][i]==grid[k][i]&&j!=k)
					diff=false;
			}

		}
	}

for(p=0;p<9;p++)
{
    int sum=0;

	for(r=a;r<m;r++)
	{
		for(c=b;c<n;c++)
		{
			sum+=grid[r][c];
		}
	}

	if(n<=8)
	{
	n+=3;
	b+=3;
	}

	else
	{
		a+=3;
		m+=3;
		n=3;
		b=0;
	}



	if(sum!=45)
		diff=false;

}



	if(element&&diff)
		return 1;
	else
		return 0;

}

