#include<stdio.h>
struct student{
    char name[20];
    float cgpa;
};
int main(){
    struct student student1 ={"Abdullah",3.52};
    struct student student2 ={"Moinul Islam",3.75};
    struct student student3 ={"Raihan",3.57};

    struct student students[] = {student1,student2,student3};

    for(int i = 0; i<sizeof(students)/sizeof(students[0]);i++){
        printf("%s\t",students[i].name);
        printf("%.2f\n",students[i].cgpa);
    }
}