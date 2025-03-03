#include<stdio.h>
#include<conio.h>
 int sum(int n){
 	if(n==1){
 		return 2;
	 }  
 			 return 2*n+sum(n-1);
				 }
			 
			int main(){
				int n;
				printf("enter the number of evennumber to add");
				scanf("%d",&n);
			 int ans=sum(n);
				printf("the sum of given number of even number is %d",ans);
				return 0;
			}
		 			
						  
