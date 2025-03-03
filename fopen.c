#include<stdio.h>
#include<conio.h>
int main(){
	FILE *text;
	text=fopen("test.txt","w");
	int marks[5];
	printf("enter the marks of five student\n");
	for(int i=0;i<=5;i++){
		scanf("%d",&marks[i]);
	}
	for( int i=0;i<=5;i++){
	
	fprintf(text,"%d",marks[i]);
}
	fclose(text);//closing the file 
	
	text=fopen("test.txt","r"); //again opening the file same file
	int a=0;
	for(int i=0;i<=5;i++){
	
	fscanf(text,"%d",&marks[i]);
	
	if(marks[i]<=30){   // as pass marks is 30
		a++; //counting the number of std failed 		
	}
}
	printf(" the number of student failed is %d",a); //displaying the number of std pass
		fclose(text);
	return 0;
}
