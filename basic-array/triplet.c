/*#include<stdio.h>
int main()
{
	int arr[5]={2,1,3,5,4};
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			for(int k=i+2;k<5;k++)
			{
				if(arr[i]+arr[j]+arr[k]==9)
				{
					printf("%d%d%d\n",arr[i],arr[j],arr[k]);
				}
				
			}
		}
	}
}


#include<stdio.h>
int main()
{
	int N;
	printf("enter the N");
	scanf("%d",&N);
	int max=0,smax=0;
	for(int i=1;i<=N;i++)
	{
		int a;
		printf("enter the a");
		scanf("%d",&a);
		if(a>max)
		{
			smax=max;
			max=a;
		}
		else if(a>smax)
		{
			smax=max;
		}
		
	}
	printf("%d",smax);
	return 0;
}

*/

#include<stdio.h>
int main()
{
	int arr[100];
	int brr[100];
	int s=0;
	for(int i=0;i<100;i++)
	{
		arr[i]=i+1;
	}
	for(int i=0;i<=100;i++)
	{
		int c=0;
		for(int j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			brr[s]=arr[i];
			s=s+1;
		}
	}
	for(int i=0;i<s;i++)
	{
		printf("%d",brr[i]);
		printf("\n");
	}
}
