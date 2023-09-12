// SORTING/BUBBLE SORT/SELECTION SORT/INSERTION/DELITION/TIME / SPACE COMPLEXITY/2 POINTER APPROACH

// Given an array of integers with 1 to N elements and the size of the array if N+1.One element is occuring more than once i.e Dupliicate number is present.Find the dupliacte element.

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		printf("ENTER THE ELEMENTS:- ");
		scanf("%d",&arr[i]);
	}
	int s=0;
	for(int i=0;i<N;i++)
	{
		s=s+arr[i];
	}
	int j;
	j=arr[i]*(arr[i]+1)/2;
	printf("%d ",s-j);
	return 0;
}
