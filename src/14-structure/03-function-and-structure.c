#include <stdio.h>

struct Student
{
   char name[50];
   int age;
   float grade;
};

// Function to display student information
void displayStudent(struct Student *s)
{
   printf("Name: %s, Age: %d, Grade: %.2f\n", s->name, s->age, s->grade);

   strcpy(s->name, "Jamir");
}

int main()
{
   struct Student student1 = {"Bob", 22, 90.0};
   displayStudent(&student1);

   printf("Name: %s, Age: %d, Grade: %.2f\n", student1.name, student1.age, student1.grade);

   return 0;
}
