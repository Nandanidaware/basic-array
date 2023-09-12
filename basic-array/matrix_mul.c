// 2D  matricx Multiplication
//1st matric column  and second matric row same

#include<stdio.h>
int main()
{
	int row,column;
	printf("enter the number of row:- ");
	scanf("%d",&row);
	printf("enter the number of column:- ");
	scanf("%d",&column);
	int arr1[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the elements");
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	int ROW,COLUMN;
	printf("enter the number of row:- ");
	scanf("%d",&ROW);
	printf("enter the number of column:- ");
	scanf("%d",&COLUMN);
	int arr2[ROW][COLUMN];
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			printf("enter the number of elements:- ");
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	if(column==ROW)
	{
		int arr3[row][COLUMN];
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<COLUMN;j++)
			{
				arr3[i][j]=0;
				for(int k=0;k<column;k++)
				{
					arr3[i][j]+=arr1[i][k]*arr2[k][j];
				}
				
			}
		}
		//print the resulting matricx
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<COLUMN;j++)
			{
				printf("%d ",arr3[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("WE CANT DO MULTIPLICATION");
	}
	return 0;
}
Matrix A
1 2
3 4
5 6

Matrix B
1 2 3 4
5 6 7 8

(1*1 + 2*5)   (1*2 + 2*6)   (1*3 + 2*7)   (1*4 + 2*8)
(3*1 + 4*5)   (3*2 + 4*6)   (3*3 + 4*7)   (3*4 + 4*8)
(5*1 + 6*5)   (5*2 + 6*6)   (5*3 + 6*7)   (5*4 + 6*8)

Output
11  14  17  20
23  30  37  44
35  46  57  68


