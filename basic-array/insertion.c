#include<stdio.h>
int main()
{
	int num,pos,n,a;
	printf("ENTER THE NUMBER OF SIZE:- ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("ENTER THE ELEMENTS IN ARRAY:- ");
		scanf("%d",&arr[i]);
	}
	printf("ENTER THE POSITION:- ");
	scanf("%d",&pos);
	
	printf("ENTER THE NUMBER TO INSERT:- ");
    scanf("%d", &num);
    
	for(int j=n;j>pos;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[pos]=num;
	n++;
	for(int k=0;k<n;k++)
	{
		printf("%d",arr[k]);
		printf("\n");
	}
	
	return 0;
}
