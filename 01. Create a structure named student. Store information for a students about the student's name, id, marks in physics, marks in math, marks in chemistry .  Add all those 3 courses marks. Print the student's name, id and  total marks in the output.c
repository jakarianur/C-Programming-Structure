#include <stdio.h>
struct student
{
    char name[100];
    int id;
    float phy, che, mat;
}
s[5];
int main() {
    int i;
    printf("Enter Name, Id, Physics, Chemistry, and Math Marks: \n");
    for (i=0; i<5; i++)
    {
        scanf("%s %d %f %f %f", &s[i].name,&s[i].id,&s[i].phy,&s[i].che,&s[i].mat);
    }
    printf("Student Information:\n");
 for (int i=0; i<5; i++)
    {
        printf("Name: %c \n Id: %d \n Total: %.2f", s[i].name, s[i].id, s[i].phy +  s[i].phy + s[i].phy);
    }
    return 0;
}
