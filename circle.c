#include<stdio.h>
#include<conio.h>
#define pi 3.14159
#include<math.h>

	int area(int r){
		return pi*pow(r,2);
	}
	int perimeter(int r){
		return pi*r*2;
	}
		int main(){
			int r;
			printf("enter the radius of circle \n");
			scanf("%d",&r);
			printf("The area of circle is %d\n",area(r));
			printf("the perimeter of circle is %d",perimeter(r));
			return 0;
			
		}
