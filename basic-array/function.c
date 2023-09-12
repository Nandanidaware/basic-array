/*What and why functions?
code ko readable banane ke liye easy  banane ke liye functions ka use krte hai.

repeatition(avoid)

how functions work? ek ke undar dusra dusre ke undar tisra 

india=();means calling india then go void function read it and then print it.

jo bhi hm likhte hai uska name kabhibhi upar hona chahiye.

Important :-
1) main() {main function we have to read} ek hi bar aata hai
2) starts with main
3) unlimited functions



#include<stdio.h>
void ENGLAND()
{
	printf("YOU ARE IN ENGLAND\n");//6
	return;
}
void AUSTRALIA()
{
	printf("YOU ARE IN AUSTRALIA\n");//4
	ENGLAND();//calling england//5
	return;
}
void INDIA()
{
	printf("YOU ARE IN India\n");//2
	AUSTRALIA();//calling australia//3
	return;
}
int main()
{
	INDIA();//calling india//1
}

// sum of 2 numbers RETURN TYPE OF FUNCTIONS

#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int sum=add(a,b);
	printf("%d",sum);
	return 0;	
}

//combination and permutation

#include<stdio.h>
int main()
{
	int n,r,ncr;
	scanf("%d%d",&n,&r);
	int nfact=1;//n!
	int rfact=1;//r!
	int nrfact=1;//n-r!
	for(int i=2;i<=n;i++)
	{
		nfact=nfact*i;
	}
	for(int i=2;i<=r;i++)
	{
		rfact=rfact*i;
	}
	for(int i=2;i<=n-r;i++)
	{
		nrfact=nrfact*i;
	}
	ncr=nfact/(rfact*nrfact);
	printf("%d",ncr);
	return 0;
	
}
//upar ka problem reduce krke

#include<stdio.h>

int factorial(int x)
{
    int fact = 1;
    
    for(int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    
    return fact;
}

int main()
{
    int n, r, ncr;
    
    // Input n and r
    scanf("%d%d", &n, &r);
    
    // Calculate n!
    int nfact = factorial(n);
    
    // Calculate r!
    int rfact = factorial(r);
    
    // Calculate (n-r)!
    int nrfact = factorial(n-r);
    
    // Calculate nCr
    ncr = nfact / (rfact * nrfact);
    
    // Print the result
    printf("%d", ncr);
    
    return 0;
}

//  Pascal triangle in  function using nCr formula
// 2C2=2!/2!(2-2)!=up and  down 2! cancel and 2-2=0!=1:
//		   1
//		  1 1
//		 1 2 1
//		1 3 3 1
//	   1 4 6 4 1
//	 1 5 10 10 5 1		
//  1 6 15 20 15 6 1


#include<stdio.h>
int factorial(int x)
{
	int fact=1;
	for(int i=2;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int combination(int n,int r)
{
	int ncr=factorial(n)/(factorial(r)*factorial(n-r));
	return ncr;
}
int main()
{
	int n;
	printf("enter n:- ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			int icj=combination(i,j);
			printf("%d ",icj);
		}
		printf("\n");
	}
	
	return 0;
}*/

nPr=




















