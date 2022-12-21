#include <stdio.h>
struct student
{
    char name[10];
    int roll;
    char g[10];
    float cgpa;
};
void display(struct student s)
{
    printf("\nStudent details are :\nName:%s\nRoll:%d\nGender: %s",s.name,s.roll,s.g);
    printf("\nCGPA is :%f", s.cgpa); 
    {
    if(s.cgpa>9 && s.cgpa<=10)
    printf("\nO grade");
    else if(s.cgpa>8 && s.cgpa<=9)
    printf("\nE grade");
   else if(s.cgpa>7 && s.cgpa<=8)
    printf("\nA grade");
    else if(s.cgpa>6 && s.cgpa<=7)
    printf("\nB grade");
     else if(s.cgpa>5 && s.cgpa<=6)
    printf("\nC grade");
    else if(s.cgpa>4 && s.cgpa<=5)
    printf("\nD grade");
    else if(s.cgpa>3 && s.cgpa<=4)
    printf("\nF grade");
    }
}
int main()
{
    struct student s[3];
    printf("Please enter the Student details:\n");
    for(int i=0;i<3;i++)
    {
    printf("\n\nName:");
    scanf("%s",s[i].name);
    printf("Gender:");
    scanf("%s", s[i].g);
    printf("Roll:");
    scanf("%d", &s[i].roll);
    printf("Please enter the cgpa:");
    scanf("%f", &s[i].cgpa);
    }
     for(int i=0;i<3;i++)
     {
    display(s[i]);
     }
    return 0;
}