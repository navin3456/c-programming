#include <stdio.h>
#include <string.h>

  

// Structure to store student details
struct Student {
    int roll_no;
    char name[50];
    float percentage;
    char faculty[30];
    
};

// Function to take input from the user
void take_input(struct Student students[10]) {
    for(int i = 0; i < 10; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To read a string with spaces
        printf("percentage: ");
        scanf("%f", &students[i].percentage);
        printf("faculty\n");
        scanf("%s",&students[i].faculty);
        
    }
} 

  
void display_data(struct Student students[10]) {
    printf("\nSorted Student Details (by Roll Number):\n");
    printf("Roll Number\tName\t\tMarks\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t\t%s\t\t%.2f\t%d \t %s", students[i].roll_no, students[i].name, students[i].percentage,students[i].faculty);
    }
}

int main() {
     
     
    
    struct Student students[10];
    
    take_input(students);
     
    display_data(students);
    
    return 0;
}

