#include<stdio.h>
 void 	prime(int n)
	
	{ 
		int p=0;  	
		if(n<=1)
		{
			printf("it not prime number ");
		}
	else
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0) 	//dividing with every number and checking the reminder 
			{
				p++; 	//if divisible and reminder is zero the value of p is increased
			}
		}
			
		if(p==1)	
			{
				printf("it is prime number \n");
			}else
			{
				printf("it is not prime number \n");
			}
		
	}
	}
	int main(){
		int n;
		printf("enter the number to check wheather it is prime or not\n");
		scanf("%d",&n);//takes input
		
		prime(n); //call the function
		
		return 0;
		
		
		
	}
