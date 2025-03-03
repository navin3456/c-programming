#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
 	int main(){
 		int a,b;
 		printf("enter the two number for swap\n");
 		scanf("%d%d",&a,&b);
 		getch();
 		printf("befor swap a=%d \t b=%d",a,b);
 		getch();
 		swap(&a,&b);
 		printf("after swap a=%d \t b=%d",a,b);
 		return 0;
	 }
