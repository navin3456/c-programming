#include <stdio.h>

struct teacherinfo{
char name[20];
int teacherid;
char subject[20];
int grade_to_teach;
};
void enterdetails(struct teacherinfo t[10]){
  printf("\nEnter name,teacherid,subject,grade to teach of the teacher\n");
  scanf("%s %d %s %d",t->name,&t->teacherid,t->subject,&t->grade_to_teach);
}
void printdetails(struct teacherinfo t[10]){
  printf(".Name of the teacher=%s.\n.Teacher ID=%d.\n.Subject taught=%s.\n.Grade to teach=%d.\n",t->name,t->teacherid,t->subject,t->grade_to_teach);
}
  int main(){
    printf("Jharana Acharya\n");
    int a=10,i;
    struct teacherinfo t[a];
    for(i=0;i<a;i++){
    enterdetails(&t[i]);
    printdetails(&t[i]);
    }
  }
