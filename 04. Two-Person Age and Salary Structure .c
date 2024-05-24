#include <stdio.h> 
struct person
{ 
   int age; 
   float salary;
}; 
   int main()
{ 
   struct person jakaria, jubayer; 
   jakaria.age = 22; 
   jakaria.salary = 3200.60; 
   printf("Md Jakaria Nur\n"); 
   printf("Age = %d Years\n", jakaria.age); 
   printf("Salary = %.2f USD\n", jakaria.salary); 
   jubayer.age = 24; 
   jubayer.salary = 3400.60; 
   printf("\nMd Jubayer Nur\n"); 
   printf("Age = %d Years\n", jubayer.age); 
   printf("Salary = %.2f USD\n", jubayer.salary); 
    return 0 ;
}
