// Bubble Sort

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE SIZE  OF ARRAY:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE ELEMENTS:-");
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		printf("\n");
	}
	for(int i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
	
}
