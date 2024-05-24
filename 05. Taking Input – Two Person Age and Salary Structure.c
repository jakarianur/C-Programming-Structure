#include <stdio.h> 
   struct person
{ 
   int age; 
   float salary;
}; 
int main()
{ 
   struct person jakaria, jubayer; 
   printf("Enter Jakaria's Age:  "); 
   scanf("%d", &jakaria.age); 
   printf("Enter Jakaria's Salary:  "); 
   scanf("%f", &jakaria.salary); 
   printf("Enter Jubayer's Age:  "); 
   scanf("%d", &jubayer.age); 
   printf("Enter Jubayer's Salary:  "); 
   scanf("%f", &jubayer.salary); 
   printf("Md Jakaria Nur\n"); 
   printf("Age = %d Years\n", jakaria.age); 
   printf("Salary = %.2f USD\n", jakaria.salary); 
   printf("\nMd Jubayer Nur\n"); 
   printf("Age = %d Years\n", jubayer.age); 
   printf("Salary = %.2f USD\n", jubayer.salary); 
   return 0 ;
}
