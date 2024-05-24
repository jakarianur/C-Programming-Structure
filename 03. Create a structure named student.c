#include
struct person
{
char name [100];
int id;
float mat;
float phy;
float che;
};
int main()
{
struct person stu1, stu2;
printf(“Enter First Student Name: “);
scanf(“%s”, &stu1.name);
printf(“Enter First Student Id: “);
scanf(“%d”, &stu1.id);
printf(“Enter First Student Math Marks: “);
scanf(“%f”, &stu1.mat);
printf(“Enter student1’s Physics Marks: “);
scanf(“%f”, &stu1.phy);
printf(“Enter student1’s Chemistry Marks: “);
scanf(“%f”, &stu1.che);
printf(“Enter Second Student Name: “);
scanf(“%s”, &stu2.name);
printf(“Enter Second Student Id: “);
scanf(“%d”, &stu2.id);
printf(“Enter Second Student Math Marks: “);
scanf(“%f”, &stu2.mat);
printf(“Enter Second’s Physics Marks: “);
scanf(“%f”, &stu2.phy);
printf(“Enter Second’s Chemistry Marks: “);
scanf(“%f”, &stu2.che);
printf(“\nFirst Student\n”);
printf(“\nName = %s \n”, stu1.name);
printf(“Id = %.2d \n”, stu1.id);
printf(“Sum = %.2f \n”, stu1.mat + stu1.phy + stu1.che);
printf(“\nSecond Student\n”);
printf(“\nName = %s \n”, stu2.name);
printf(“Id = %.2d \n”, stu2.id);
printf(“Sum = %.2f \n”, stu2.mat + stu2.phy + stu2.che);
return 0 ;
}
