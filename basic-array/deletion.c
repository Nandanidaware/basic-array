#include<stdio.h>
int main()
{
	int pos,n;
	printf("enter the size of array:- ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("enter the elements in array:- ");
		scanf("%d",&arr[i]);
	}
	printf("enter the position:- ");
	scanf("%d",&pos);
	
	for(int j=pos;j<n-1;j++)
	{
		arr[j]=arr[j+1];
	}
	n--;
	for(int k=0;k<n;k++)
	{
		printf("%d",arr[k]);
		printf("\n");
	}
	
	return 0;
	
}
