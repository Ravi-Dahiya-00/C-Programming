// In C, structures (struct) allow you to group different types of variables under one name. It's like creating your own custom data type.

/*Imagine you want to store data about a student:

Name (string)

Roll number (int)

Marks (float)

Instead of using 3 separate variables for each student, you can combine them into one structure.

*/
#include <stdio.h>

struct student {
    int roll_no;
    char name[30];
    float marks;
};
int main()
{
    struct student s1={13,"Ravi",94};
    struct student s2={12,"jenny",96};
    struct student s3;

    

    printf("roll no of ravi %d",s1.roll_no);


    printf("\nEnter values for s3:\n");
    scanf("%d %s %f",&s3.roll_no,&s3.name,&s3.marks);

    printf("details of s3 %d %s %f",s3.roll_no,s3.name,s3.marks);

}