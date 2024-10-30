#include<stdio.h>
  int sum(a,b){
  	if(a<=b){
  		return a+sum(a+1,b);
	  }else {
	  	return 0;
	  }
  }
  int main(){
  	int a,b,ans;
  	printf("enter the number from which to upto which you need sum\n");
  	scanf("%d%d",&a,&b);
  	ans=sum(a,b);
  	printf("%d",ans);
  	return 0;
  	
  	
  }
