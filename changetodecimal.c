#include<stdio.h>
#include<math.h>
 int deciconvert(int n)
 	{
 		int decin=0,i=0,rem;
 		while(n!=0)
		 {
		 	rem=n%10; // changes into the selctive binary form
		 	n=n/10; //decreases the value of n
		 	decin=decin+rem*pow(2,i);
 			++i;			//increase the value of i and acts as power of 2
		 }
		 return decin;
 		
	 }
	int main()
	{ 
		int n;
		printf("enter the binarr number \n");
		scanf("%d",&n);
		int ans;
		ans=deciconvert(n);
		printf(" the coverted bianry into decimal is %d",ans);
		
	}
