/*//Basic 2D array
// Different types of initialization 

// int arr[4][2]={{1234,56},{1236,43},{1434,32},{1312,96}};
// int arr[4][2]={1234,56,1256,43,1432,32,1312,96};
// int arr[2][3]={12,34,56,78,91,23};
// int arr[][3]={91,23,12,34,56,78};

// In that ex.already gave  input
#include<stdio.h>
int main()
{
	int arr[2][2];	// or 2nd method of initilization int arr[2][2]={{1,2},{3,4}};
	arr[0][0]=1;	// or int arr[3][3];//9 elements
	arr[0][1]=2;	//    for(int i=0;i<3;i++){
	arr[1][0]=3;		//	for(int j=0;j<3;j++){
	arr[1][1]=4;		//		scanf("%d",&arr[i][j]);			
	// 1 2					}	}			
	// 3 4
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

//Input from user and print them

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE ROW NUMBER:- ");
	scanf("%d",&row);
	printf("ENTER THE COLUMN NUMBER:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN MATRICS:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;	
}

// write a program to store roll number and marks obtained by 4 students side by side in a matrix.

#include<stdio.h>
int main()
{
	int std,sub;
	printf("ENTER THE NUMBER OF STUDENTS:- ");
	scanf("%d",&std);
	printf("ENTER THE NUMBER OF SUBJECTS:- ");
	scanf("%d",&sub);
	int arr[std][sub];
	for(int i=0;i<std;i++)
	{
		for(int j=0;j<sub;j++)
		{
			printf("Enter the roll number only one time and then marks :- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<std;i++)
	{
		for(int j=0;j<sub;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;	
}

// Write a program to store 10 at every index of a 2D matrics with 5 rows and 5 columns.

#include<stdio.h>
int main()
{
	int arr[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			arr[i][j]=10;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


//Write a program to addition of two matrices.

#include<stdio.h>
int main()
{
	int a[2][2]={1,2,3,4};
	int b[2][2]={5,6,7,8};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// User will gave input

#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter the number of rows:- ");
	scanf("%d",&row);
	printf("Enter the number of column:- ");
	scanf("%d",&column);
	int arrA[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the elements in matrices:- ");
			scanf("%d",&arrA[i][j]);
		}
		printf("\n");
	}
	int ROW,COLUMN;
	printf("Enter the number of ROWS:- ");
	scanf("%d",&ROW);
	printf("Enter the number of COLUMN:- ");
	scanf("%d",&COLUMN);
	int arrB[ROW][COLUMN];
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			printf("Enter the elements in matrices:- ");
			scanf("%d",&arrB[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COLUMN;j++)
		{
			printf("%d ",arrA[i][j]+arrB[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// Sum of matrices

#include<stdio.h>
int main()
{
	int row,column;
	printf("Enter the number of rows:- ");
	scanf("%d",&row);
	printf("Enter the number of column:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("Enter the elements in array:- ");
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("%d ",sum);
	return 0;
}

/*
//Find out the maximum element and minimum element in a2D array.

#include<stdio.h>
#include<limits.h>
int main()
{
	int row,column;
	printf("ENTER THE MUMBER OF ROWS:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
	}
	int max=INT_MIN;
	int min=INT_MAX;
	for(int i=0;i<=row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				if(arr[i][j]<min)
				{
					min=arr[i][j];
				}
			}
			else if(arr[i][j]<min)
			{
				min=arr[i][j];
			}	
		}
	}
	printf("is max %d\n",max);
	printf("is min %d\n",min);
	return 0;
}

// Print index of  maximun elements

#include<stdio.h>
#include<limits.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBER OF ROWS:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
	}
	int max=INT_MIN;
	int maxrow=0,maxcolumn=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				maxrow=i;
				maxcolumn=j;
			}
		}
	}
	printf("MAXIMUM ELEMENT:- %d\n",max);
	printf("MAXIMUM index:- %d\n",maxrow);
	printf("MAXIMUM column:- %d",maxcolumn);
	return 0;
}

// Given a matrics 'a' of dimension n x m and 2 coordinate (l1,r1)and(l2,r2).Return the sum of the rectangle from (l1,r1)to(l2,r2).

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBER OF ROWS:- ");									////OUTPUT NOT COMINNG////
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF column:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}

//Write a program to print  the row number having the maximum sum in a given matrix;

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBBER OF ROW:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
	}
	int maxsum=0;
	int maxrow=0;
	
	for(int i=0;i<row;i++)
	{
		int sum=0;
		{
			for(int j=0;j<column;j++)
			{
				sum=sum+arr[i][j];
			}
			if(sum>maxsum)
			{
				maxsum=sum;
				maxrow=i;
			}
		}
	}
	printf("MAX ROW%d",maxrow);
	return 0;
}

// Given a matrix having 0-1 only,find the row with the maximum number of 1's.

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBBER OF ROW:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
	}
	int max1=0;
	int maxrow=0;
	for(int i=0;i<row;i++)
	{
		int count=0;
		for(int j=0;j<column;j++)
		{
			if(arr[i][j]==1)
			{
				count=count+1;
			}
		}
		if(count>max1)
		{
			max1=count;
			maxrow=i;
		}
	}
	printf("MAX ROW %d\n",maxrow);
	printf("Max count:-%d",max1);
	return 0;
}


// Write a program to print the TRANSPOSE of the matrics entered by the user.
//1 2 3     1 4
//4 5 6     2 5
 //         3 6

// brr[i][j]=arr[j][i]= formula.
#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBBER OF ROW:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;	
}

//Write a program to change the given n * n matrix to its transpose

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBBER OF ROW:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=i+1;j<column;j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//Write a program to rotate a matrix 90 Degree clockwise.				//OUTPUT NOT COMING**

#include<stdio.h>
int main()
{
	int row,column;
	printf("ENTER THE NUMBBER OF ROW:- ");
	scanf("%d",&row);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&column);
	int arr[row][column];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0,k=row-1;i<k;i++,k--)
	{
		for(int j=0;j<column;j++)
		{
			int temp=arr[j][i];
			arr[j][i]=arr[k][j];
			arr[k][j]=temp;
		}
	}
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	return 0;	
}

//Write a program to print the the multiplication of two matrices given by the user. row coolumn muultiplication
*/
#include<stdio.h>
int main()
{
	// 1 2
	// 3 4
	// 5 6 
	int a[3][2]={{1,2},{3,4},{5,6}};
	// 1 2 3 4
	// 5 6 7 8
	int b[2][4]={{1,2,3,4},{5,6,7,8}};
	int result[3][4];
	//Multiplying 
	int cr=2;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			// i row of a[][] and j column of[i][j]
			// (a[i][0],a[i][1],a[1][2].....)*(b[0][j],b[1][j]....)
			result[i][j]=0;
			for(int k=0;k<cr;k++)
			{
				result[i][j]+=a[i][k]*b[k][j];
				
			}
		}
	}
	//print result
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*

// or user will give input multiplication same as above if row column is same or different also

#include<stdio.h>
int main()
{
	// 1st matric order
	int m,n;
	printf("ENTER THE NUMBER OF ROWS OF 1ST MATRIC:- ");
	scanf("%d",&m);
	printf("ENTER THE NUMBER OF COLUMNS OF 1st MATRIC:- ");
	scanf("%d",&n);
	int a[m][n];
	//input 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("ENTER THE ELEMENTS OF 1ST MATRIC\n:- ");
			scanf("%d",&a[m][n]);
		}
	}
	// 2nd matric order
	int p,q;
	printf("ENTER THE NUMBER OF ROWS OF 2nd MATRIC:- ");
	scanf("%d",&p);
	printf("ENTER THE NUMBER OF COLUMNS OF 2ND MATRIC:- ");
	scanf("%d",&q);
	int b[p][q];
	//Input the second matric
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("ENTER THE ELEMENTS OF 1ST MATRIC\n:- ");
			scanf("%d",&a[i][j]);
		}
	}
	//check
	if(n!=p)
	{
		printf("WE CAN'T BE MULTIPLICATION ");
	}
	else
	{
		//Multiplication
		int res[m][q];
		for(int i=0;i<m;i++)
		{
			for(int i=0;i<q;i++)
			{
				res[i][j]=0;
				// i row of a,j column of b
				for(int k=0;k<n;k++)
				{
					res[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		//print
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<q;j++)
			{
				printf("%d ",res[i][j]);
			}
		}
		printf("\n");
	}	
}

// Given an n * m matrix 'a', print all elements of the matrix in special order.
//wave print
//123		123
//456		654
//789		789
#include<stdio.h>
int main()
{
	int m,n;
	printf("ENTER THE NUMBER OF ROW IN  ARRAY:- ");
	scanf("%d",&m);
	printf("ENTER THE NUMBER OF COLUMN IN ARRAY:- ");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n ENTER THE ELEMENTS 1ST MATRICS:- ");
			scanf("%d",&a[i][j]);
		}
	}
	//Wave print
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
		else
		{
			for(int j=n-1;j>=0;j--)
			{
				printf("%d",a[i][j]);
			}
		}
		printf("\n");
	
	}
	return 0;
}*/
















