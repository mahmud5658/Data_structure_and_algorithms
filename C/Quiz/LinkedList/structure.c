#include<stdio.h>
struct student{
    char name[20];
    int id;
    float cgpa;
};
int main(){
    struct student s1;
    printf("Enter the student information: ");
    scanf("%s",&s1.name);
    scanf("%d",&s1.id);
    scanf("%f",&s1.cgpa);
    printf("Name = %s\n",s1.name);
    printf("Name = %d\n",s1.id);
    printf("Name = %f\n",s1.cgpa);
}