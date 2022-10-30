#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ar[10][10],row,col,sum=0;
	
	printf("Enter number of Rows and Colums of 2D Array : \n");
	
	scanf("%d%d",&row,&col);
	
	printf("Enter all elements : \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&ar[i][j]); //scaning 2d array
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				sum=sum+ar[i][j];
			}
		}
	}
	
	printf("Sum of Digonal elements = %d",sum);
	
}
