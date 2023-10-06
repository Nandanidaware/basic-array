//Selection sort

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n-1;i++)
	{
		int m=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[m])
			{
				m=j;
			}
		}
		if(m!=i)
		{
			int temp=a[i];
			a[i]=a[m];
			a[m]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%c ",a[i]);	
	}
}
