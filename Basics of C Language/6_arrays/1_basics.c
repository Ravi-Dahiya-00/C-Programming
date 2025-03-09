#include <stdio.h>
#define N 5    // this is macro , here we define n as 5 and we can use n as 5 in our complete program 
int main()
{
    // array is a collection of similar data types

// compile time initialization


    int marks[N]={10,20,30,40,50};
    // declared a array of size 5 and initialized it with 5 values

    // int a[0];  this is wrong , array size should be greater than 0
    //  int a[0]={10}; this is wrong , array size should be greater than 0

    int a[4*4]; // this is correct , array size can be any positive integer

    int blank_array[]={1,2,3,4,5,6,7,8,9,10}; // this is correct , array size is not mentioned , it will be calculated automatically

    int less_values[5]={1,2,3}; // this is correct , array size is 5 and only 3 values are given , remaining values will be 0

    int rollno[5]; 
    // declared a array of size 5
    // rollno is a array of 5 integers
    // it will take 4*5=20 bytes of memory
    // it will have garbage values , as it is not initialized with any values 

    int different_initialization[5];
    different_initialization[0]=10;
    different_initialization[1]=20;
    different_initialization[2]=30;
    different_initialization[3]=40;
    different_initialization[4]=50;
    // declared a array of size 5 and initialized it with 5 values using index 
    
    char vowels[5]={'a','e','i','o','u'};
    // declared a array of size 5 and initialized it with 5 values

    // there is no bound checking in c , so we can access the elements of array which are not present
     printf("the value of marks[5] is %d\n",marks[56]); // this will give garbage value



// run time initialization

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int input_array[n];
    for (int i=1;i<=n;i++)
    {
        printf("Enter the value of element input_array[%d]: ",i);
        scanf("%d",&input_array[i]);

    }


// memory allocation of array
    // Address of arr[i]=Base Address+(i×Size of Data Type)



    // accessing the elements of array
    printf("the value of marks[0] is %d\n",marks[0]);


    int students_marks[5];
    int marks_sum=0,average_marks;
    for (int i=0;i<=5;i++)
    {
        printf("Enter the marks of the student %d: ",i+1);
        scanf("%d",&students_marks[i]);
    }
    for (int i=0;i<=5;i++)
    {
        marks_sum+=students_marks[i];
    }
    average_marks=marks_sum/6;
    printf("The average marks of the students is %d\n",average_marks);
    printf("The sum of marks of the students is %d\n",marks_sum);



    int input_no;
    printf("Enter the size of array: \n ");
    scanf("%d",&input_no);
    int even_odd[input_no];
    int even_count=0;
    int odd_count=0;
    for (int i=0;i<input_no;i++)
    {
        printf("Enter the value of element %d :\n ",i+1);
        scanf("%d",&even_odd[i]);
        if (even_odd[i]%2==0)
        {
            even_count++;
        
        }
        else 
        {
            odd_count++;
        }
    }
  
    printf("Total even numbers are %d\n",even_count);
    printf("Total odd numbers are %d\n",odd_count);
    
} 