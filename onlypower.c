#include<stdio.h>
#define pi 3.1416

int po(int a, int b) {  
    if ( b <= 0) {
        return 1;
    } else {
        return a* po(a, b - 1);
    }
 
 }
 int main(){
 	int a,b;
 	printf("enter the number for it's power ");
 	scanf("%d",&a);
 	printf(" enter the power upto which you want ");
 	scanf("%d",&b);
 	int ans=po(a,b);
 	printf(" the a^b is %d",ans);
 	return 0;
 	 
 	
 }
