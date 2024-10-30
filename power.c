#include<stdio.h>
#define pi 3.1416

int po(int r, int n) { // Function definition
    if (n <= 0) {
        return 1;
    } else {
        return r* po(r, n - 1);
    }
}
 int volume(int r){
 	return 4/3*pi*po(r,3);
 }
 int CSA(int r){
 	return pi*po(r,2);
 }
 int main(){
 	int radius,v,a,r;
 	printf("enter the radious for volume and CSA");
 	scanf("%d",&radius);
 	v=volume(radius);
 	a=CSA(radius);
 	printf("the volume is %d \t the CSA is %d",v,a);
 	return 0;
 	
 }


