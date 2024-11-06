#include <stdio.h>

struct Student
{
   char name[50];
   int age;
   float grade;
};

int main()
{
   struct Student student1;

   printf("Enter name: ");
   scanf("%s", student1.name);

   printf("Enter age: ");
   scanf("%d", &student1.age);

   printf("Enter grade: ");
   scanf("%f", &student1.grade);

   printf("Student - Name: %s, Age: %d, Grade: %.2f\n", student1.name, student1.age, student1.grade);

   return 0;
}
