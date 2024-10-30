#include <stdio.h>
#include <string.h>

  

// Structure to store student details
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to take input from the user
void take_input(struct Student students[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // To read a string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
}

// Function to sort students by roll number
void sort_by_roll_no(struct Student students[], int n) {
    struct Student temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(students[j].roll_no > students[j + 1].roll_no) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to display the sorted data
void display_data(struct Student students[], int n) {
    printf("\nSorted Student Details (by Roll Number):\n");
    printf("Roll Number\tName\t\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
}

int main() {
    int n;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    take_input(students, n);
    sort_by_roll_no(students, n);
    display_data(students, n);
    
    return 0;
}

