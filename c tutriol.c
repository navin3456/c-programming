#include<stdio.h>
#include<stdlib.h>
	int main(){
		FILE *N;
		N=fopen("ram.txt","w+");
		printf("enter the number which will be stored in the file \n");
		int n;
		scanf("%d",&n);
		fprintf(N,"%d",n);
		fclose(N);
		return 0;
	}
 
 	
 
