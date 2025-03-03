#include<stdio.h>
#include<conio.h>

	int sum(int a,int b){
		return a+b;
		}
	int sub(int a,int b){
		return a-b;
	}
	int mult(int a,int b){
		
		return a*b;
	}
	int div(int a,int b){
		return a%b;
	}
		int main(){
			int a,b;
			printf("enter two number \n");
			scanf("%d%d",&a,&b);
			getch();
			printf("enter 1 for addition\n enter 2 for substraction\n enter 3 for multiplication\n enter 4 for division\n");
			int x;
			scanf("%d",&x);
			switch(x){
				case 1:
					printf("the sum is %d",sum(a,b));
					break;
				case 2:
				
					printf("the substraction is %d",sub(a,b));
					break;
				case 3:
					printf("the multiplication is %d",mult(a,b));
					break;
				case 4:
				
				 
					printf("the division is %d",div(a,b));
					break;
			}
			return 0;
		}
