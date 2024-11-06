#include <stdio.h>

struct Student
{
   char name[50];
   int age;
   float grade;
};

int main()
{
   struct Student student1 = {"Alice", 20, 85.5}; // Initialization
   student1.age = 21;                             // Assignment

   printf("Name: %s, Age: %d, Grade: %.2f\n", student1.name, student1.age, student1.grade);

   return 0;
}
