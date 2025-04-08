#include <stdio.h>

int main()
{
    // int name_of_array[row_size][column_size];  

    int marks_subject_wise[5][10];

    // initialization of 2d arrays

    // initialization while compile time error 
    int a[2][3]={{1,2,3},{1,2,3}};      
    // two rows       ,        three column in 1 row 


    // no of rows is not compulsory to declare 
    int b[][3]={1};          //all the remaining column with be initalized with 0 and it will have one row only 
    // and we wil print this array in 2d method then it will give garbage value in 2nd row
    int c[][3]={1,2,3,4};   // this will have 2 rows because first 3 element in 1st row and 4 will be in 2nd row and all the remaining elements of 2nd row will be 0

    int d[2][3]={{1,2},{3,4}};           // now we are specifying columns also and we have given element only for 2 elements,in 3rd it will be 0 automatically


    // initialization during run time 

    int run_time_arr[2][3];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("\nenter arr[%d][%d] element :",i,j);
            scanf("%d",&run_time_arr[i][j]);
        }
    }


    // printing a 2d array
    printf("%d",a[0][1]);
    
    
    
}