/*//Any Elements print of Array

#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,8};
	printf("%d",arr[2]);
	return 0;
}



#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,8};
	arr[4]=100;      //{2,4,6,8,100} change ho gya
	arr[1]=10;	 //{2,10,6,8,100}
	printf("%d",arr[4]);
	float a[3]={1.2,3.4,5.7};
	printf("%f",a[2]);
	char arr[6]={'M','N','O','P','$','%','&'};   **char wala nhi aaya output**
	printf("%c",arr[5]);
	return 0;
}


#include<stdio.h>
int main()
{
	/*int arr[4];
	printf("ENTER THE FIRST ELEMENT:- ");
	scanf("%d",&arr[0]);
	printf("ENTER THE SECOND ELEMENT:- ");
	scanf("%d",&arr[1]);
	printf("ENTER THE THIRD ELEMENT:- ");
	scanf("%d",&arr[2]);
	printf("ENTER THE FOURTH ELEMENT:- ");
	scanf("%d",&arr[3]);
	printf("%d",arr[2]);
	 ye sab ek hi loop me print hota hai itne bar printf krne ki jarurat nhi ek loop  me  ho jata hai 
	
	int arr[6]={1,3,5,6,7,8};
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d\n",arr[1]);
	
	int arr[4];
	for(int i=0;i<=4;i++)
	{
		printf("\nENTER A ELEMENT NUMBER %d ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<=4;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
	
}

// TAKE INPUT FROM USER AND PRINT REVERSE ORDER

#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0;i<=9;i++)
	{
		int k;
		scanf("%d",&k);
		arr[i]=k;
	}
	for(int i=0;i<10/2;i++)
	{
		int t=arr[i];
		arr[i]=arr[10-(i+1)];
		arr[10-(i+1)]=t;
	}
	for (int i=0;i<10;i++){
		printf("%d\n",arr[i]);
     	}
	return 0;
}
// OR

//REVERSE ORDER

#include<stdio.h>
int main()
{
	int arr[5]={2,4,6,8,1};
	for(int i=4;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
	
}
// check student marks is<35 then print roll number means index number
#include<stdio.h>
int main()
{
	int marks[10]={35,50,49,20,83,70,30,90,10,76};
	for(int i=0;i<=9;i++)
	{
		if(marks[i]<35)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

//print address
#include<stdio.h>
int main()
{
	int arr[5]={1,2,1,2,1};
	for(int i=0;i<5;i++)
	{
		printf("%p\n",&arr[0]);
	}
	return 0;
}

//GARBAGE VALUE
#include<stdio.h>
int main()
{
	int arr[4];
	printf("'%d",arr[0]);
	return 0;
}


// sum of given array

#include<stdio.h>
int main()
{
	int arr[5]={1,3,5,7,10};
	int sum=0;
	for(int  i=0;i<=4;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
}

// User input AND SUM
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	int sum=0;
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE ELEMENTS:- ");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d\n",sum);
	return 0;	
}

//PRODUCT OF GIVEN ARRAY

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	int p=1;
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE NUMBER:- ");
		scanf("%d",&arr[i]);
		p=p*arr[i];
	}
	printf("%d",p);
	return 0;
}

//OR ALREADY GIVEN ELEMENTS

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int p=1;
	for(int i=0;i<5;i++)
	{
		p=p*arr[i];
	}
	printf("%d",p);
	return 0;
}

// FIND the maximun value out of all the element in the array. 

#include<stdio.h>
int main()
{
	int arr[5]={1,15,100,56,7};
	int max=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;	
}


//OR THIS CODE DO WORK FOR NEGATIVE  OR POSITIVE NUMBER FIND MAX
#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[5]={-1,-15,-100,-56,7};
	int max= INT_MIN;// OR int max=arr[0]; 
	for(int i=0;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d",max);
	return 0;	
}

// Find the minimun value of given element

#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[7]={10,-30,47,1000,76,29,-4};
	int min=INT_MAX;
	for(int i=0;i<7;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("%d\n",min);
	return 0;
}

// Given an array of integer chantge the value of all odd index elements to its second multiple and increment all even indexed value by 10.

#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	for(int i=0;i<7;i++)
	{
		if(i%2!=0)
		{
			arr[i]=arr[i]*2;
		}
		else
		{
			arr[i]=arr[i]+10;
		}
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

//Count the number of element in given array greater than a given number x.

#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int X;
	printf("ENTER THE NUMBER OF X:- "); 
	scanf("%d",&X);
	int c=0;
	for(int i=0;i<7;i++)
	{
		if(arr[i]>X)
		{
			c=c+1;
		}
	}
	printf("%d ",c);
	return 0;
}

// Find the differance between the sum of elements at even indices to the sum of elements at odd indices.

#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int Evensum=0;
	int Oddsum=0;
	for(int i=0;i<7;i++)
	{
		if(i%2==0)
		{
			Evensum=Evensum+arr[i];
		}
		else
		{
			Oddsum=Oddsum+arr[i];
		}
	}
	printf("%d",Evensum-Oddsum);
	return 0;
}

//Find the total number of pairs in the array whose sum is equal to the given value X.

#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int x;
	printf("ENTER THE VALUE OF X:- ");
	scanf("%d",&x);
	int c=0;
	for(int i=0;i<8;i++)
	{
		for(int j=i+1;j<8;j++)
		{
			if(arr[i]+arr[j]==x)
			{
				c=c+1;
				printf("(%d,%d)",arr[i],arr[j]);
			}
		}
	}
	printf("%d",c);
	return 0;
}

//Count the number of TRIPLET whose  sum is equal to the given value x.

#include<stdio.h>
int main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int x;
	int c=0;
	int sum;
	printf("ENTER THE VALUE OF X:- ");
	scanf("%d",&x);
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			for(int k=j+1;k<8;k++)
			{
				if(x==arr[i]+arr[j]+arr[k])
				{
					c=c+1;
					printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	printf("%d",c);
	return 0;
}

//FIND THE SECOND LARGEST ELEMENT IN THE GIVEN ARRAY

#include<stdio.h>
#include<limits.h>
int main()
{
	int arr[8]={1,2,-3,4,5,-6,7,8};
	int smax=INT_MIN;
	int max=INT_MIN;
	for(int i=0;i<8;i++)
	{
		if(max>arr[i])
		{
			smax=max;
			max=arr[i];
		}
		else if(arr[i]>smax && arr[i]!=smax)
		{
			smax=arr[i];
		}
		
	}
	printf("%d\n",smax);
	return 0;
	
}*/

//USER INPUT SECOND MAXIMUM

#include<stdio.h>
#include<limits.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	int max=INT_MIN;
	int smax=INT_MIN;
	for(int i=0;i<N;i++)
	{
		printf("Element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]>max)
			{
				smax=max;
				max=arr[i];
			}
			else if(arr[i]>smax && arr[i]!=max)
			{
				smax=arr[i];
			}
		}
	}
	printf("%d",smax);
	return 0;
}
/*
// WRITE A PROGRAM TO COPY THE CONTENTS OF ONE ARRAY INTO ANOTHER IN  THE REVERSE ORDER

#include<stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5];
	for(int i=0;i<5;i++)
	{
		arr2[i]=arr1[4-i];
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr2[i]);
	}
}

// Write a program to reverse the array using any extra array.

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int end=4;
	for(int start=0;start<end;start++,end--)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
}

// If an array contains N elements, then check if the given array is a palindrom or not.

#include<stdio.h>
int main()
{
	int arr[3]={121};
	int c=0;
	for(int i=0;i<3;i++)							output not come
	{
		for(int j=2;j>0;j--)
		{
			if(arr[i+c]==arr[j])
			{
				c=c+1;
			}
			else
			{
				printf("NOT PALINDROM\n");	
			}
		}
		printf("PALINDROM\n");
	}
	return 0;
}

// Rotate the given array 'a' by k steps, where k is non-negative.
#include<stdio.h>
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	for(int i=0,j=7-1;i<=j;i++,j--)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

// Given an array contaning elements from 1 to 100 except one element in this  range is missing.Find the missing element.
// Basic searching example
//Given array and a number 'X'.Find out if'X' lies in the array or not ,if yes then print the array

#include<stdio.h>
int main()
{
	int N,i;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int x;
	int arr[N];
	printf("ENTER THE NUMBER OF CHECK:- ");
	scanf("%d",&x);
	for(int i=0;i<N;i++)
	{
		int A;
		printf("ELEMENT:- %d ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		if(arr[i]==x)
		{
			printf("is present in array and its index is %d %d",x,i);
			break;
		}
	}
	if(i==N)
	{
		printf("Not");
	}
	
	return 0;
}
//or
							//LITTLE BIT WRONG
#include<stdio.h>
int main()											
{
	int arr[10];
	int sum=0;
	printf("ENTER 9 ELEMENTS FROM 1 TO 10 /n");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	int s=(10*(10+1))/2;
	int c=s-10;
	if(s!=sum)
	{
		printf("%d is missing element:- ",c);
	}
	else
	{
		printf("Not missing");
	}
	return 0;
	
}

// WAP to find a duplicate element from a given array of integers.

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE ELEMENTS %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d is duplicate\n",arr[i]);
				break;
			}
		}
	}
	return 0;
}

//Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE ELEMENTS %d:- ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		int count=0;
		for(int j=0;j<N;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
			
		}
		if(count==1)
		{
			printf("THE UNIQUE NUMBER IS: %d\n",arr[i]);
		}
		
	}
	
	return 0;
}


// WAVE PRINT

#include<stdio.h>
int min()
{
	int m,n;
	printf("ENTER THE NUMBER OF ROWS:- ");
	scanf("%d",&m);
	printf("ENTER THE NUMBER OF COLUMN:- ");
	scanf("%d",&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("\n ENTER THE ELEMENTS IN THE ARRAY:- ");
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//SPIRAL PRINT
	int minr=0;
	int maxr=m-1;
	int minc=0;
	int maxc=n-1;
	int tne=m*n;
	int count=0;
	while(count<tne)
	{
		//print the minimum row
		for(int j=minc;j<=maxc;j++)
		{
			printf("%d",a[minr][j]);
		}
		minr++;
		//print the maximum column
		for(int i=minr;i<=maxr;i++)
		{
			printf("%d",a[i][maxc]);
			count++;
		}
		maxc--;
		//print the maximum row
		for(int j=max;j>=minc;j--)
		{
			printf("%d",a[maxr][j]);
			count++;
		}
		maxr--;
		//print the mminimum column
		for(int i=maxr;i>=minr;i--)
		{
			printf("%d ",a[i][minc]);
			count++;
		}
		min++;
	}
	
	
}
*/





























