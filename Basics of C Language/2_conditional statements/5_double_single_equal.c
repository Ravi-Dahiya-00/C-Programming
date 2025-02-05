#include <stdio.h>

int main(){

    // difference between double equal to (==) and single equal to (=)
        // single equal to assign some value to any variable 
        // double equal to check if the variable has the same value or not







    // age of ram, shyam, ajay is input , program to determine youngest of three


    int ram,shyam,ajay;
    printf("enter the age of ram : ");
    scanf("%d",&ram);
     printf("enter the age of shyam : ");
    scanf("%d",&shyam); 
    printf("enter the age of ajay : ");
    scanf("%d",&ajay);


    if (ram<shyam)
    {
        if (ram<ajay)
        {
            printf("ram %d is youngest",ram);
        }
        else 
        {
            printf("ajay %d is youngest",ajay);
        }
        
    }

    else 
    {
        if (shyam < ajay)
        {
          
                printf("shyam %d is youngest",shyam);
            }
 else 
            {
                printf("ajay %d is youngest",ajay);
            }
           
        }
   











//    else if in C 
    int marks_number;
    printf("\nenter your marks : ");
    scanf("%d",&marks_number);

    if (marks_number>90)
    {
        printf("your grade is O .");
    }

    else if (marks_number>80)
    {
        printf("your grade is A+ .");
    } 
    
    else if (marks_number>70)
    {
        printf("your grade is A .");
    }
    
    else if (marks_number>60)
    {
        printf("your grade is B .");
    } 
    
    else if (marks_number>50)
    {
        printf("your grade is C .");
    }

    else if (marks_number>40)
    {
        printf("your grade is D .");
    }

    else if (marks_number<40)
    {
        printf("your grade is F .");
    }






    // three points are given check if they lies on a straight line

    int x1,x2,x3,y1,y2,y3;

    printf("\n Enter points of line1 : ");
    scanf("%d %d",&x1,&y1);

    printf("\n Enter points of line2 : ");
    scanf("%d %d",&x2,&y2);

    printf("\n Enter points of line3 : ");
    scanf("%d %d",&x3,&y3);


    int slope_1,slope_2;
    slope_1=(y2-y1)/(x2-x1);

    slope_2=(y3-y2)/(x3-x2);

    if (slope_1==slope_2)
    {
        printf("these points are the points of a straight line.");
    }    

    else
    {
        printf("these points are not the points of a straight line.");
    }










// ternary operator 
        // it is used to write if else in a single line , it is good for one and two conditions .

        // even and odd by ternary operator 

        int ternary_number;
        printf("\n Enter a number to check even odd by ternary : ");
        scanf("%d",&ternary_number);

        // expression1 ? expression2 : expression3
        ternary_number%2==0 ? printf("even number ") : printf("odd number ");

        
    
    return 0;
}