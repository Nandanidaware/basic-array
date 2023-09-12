//SELECTION SORT
//Ascending Order 

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE ARRAY SIZE:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE  ELEMENTS:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
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

//Selection sort in Decending order
#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE ARRAY SIZE:- ");
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		printf("ENTER THE  ELEMENTS:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
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
