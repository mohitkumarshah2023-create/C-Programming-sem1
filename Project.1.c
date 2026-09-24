#include<stdio.h>
// C program to calculate total marks, percentage and grade of a student based on marks obtained in 5 subjects.
int main(){
    int Rollno;
    char name[20];
    float S1, S2, S3, S4, S5, total, percentage;
    char grade;
printf("Enter Rollno: ");
scanf("%d", &Rollno);
printf("Enter Name: ");
scanf("%s", name);
printf("Enter marks of Maths: ");
scanf("%f", &S1);
printf("Enter marks of Hindi: ");
scanf("%f", &S2);
printf("Enter marks of English: ");
scanf("%f", &S3);
printf("Enter marks of Chemistry: ");
scanf("%f", &S4);
printf("Enter marks of Physics: ");
scanf("%f", &S5);

total = S1 + S2 + S3 + S4 + S5;
percentage = (total / 500.0) * 100;
if (percentage >= 90) {
    grade = 'A';
} else if (percentage >= 80) {
    grade = 'B';
} else if (percentage >= 70) {
    grade = 'C';
} else if (percentage >= 60) {
    grade = 'D';
} else {
    grade = 'F';
}
printf("\n--- Student Marksheet ---\n");
printf("Rollno: %d\n", Rollno);
printf("Name: %s\n", name);
printf("Total: %.2f\n", total);
printf("Percentage: %.2f%%\n", percentage);
printf("Grade: %c\n", grade);
return 0;
}
