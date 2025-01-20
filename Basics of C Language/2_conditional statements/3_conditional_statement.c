#include <stdio.h>

int main(){

    // even odd finding 

    int x;
    printf("\nenter a number you want to check odd or even : ");
    scanf("%d",&x);

                        // if conditions 
                        if (x%2==0)
                        {
                        printf("this number is even");
                        }

                        else
                        {
                            printf("this number is odd");
                        }
                        
    











    // divisible by 5 or not 
    int divisible_by_5;
    printf("\nenter a number you want to check is divisible by 5 or not : ");
    scanf("%d",&divisible_by_5);



                        if (divisible_by_5 % 5 == 0){
                            printf("this number is divisible by 5");
                        }

                        else{
                            printf("this number is not divisible by 5");
                        }










    // leap year finding program 
    int leap_year;
    printf("\nenter a year you want check leap or not : ");
    scanf("%d",&leap_year);



                        if (leap_year%4==0)
                        {
                            printf("This is leap year.");
                        }

                        else
                        {
                            printf("this is not a leap year.");
                        }










    // making a number absolute (absolute means +ve)
    int absolute_number;
    printf("\nEnter a number you want to check absolute or not : ");
    scanf("%d",&absolute_number);

                        
                        if (absolute_number>=0){
                            printf("%d",absolute_number);
                        }
                        else{
                            printf("%d",absolute_number*-1);
                        }











    // profit and loss statement
    int selling_price,cost_price,profit_loss_statement;
    printf("enter selling price of your item : ");
    scanf("%d",&selling_price);
    printf("enter buying price of your item : ");
    scanf("%d",&cost_price);

    profit_loss_statement=selling_price-cost_price;


                        
                        if (profit_loss_statement<0){
                            printf("you made a loss in selling this item.");
                            printf("\nyour loss on this item is : %d rs",profit_loss_statement);
                        }
                        if (profit_loss_statement==0){
                            printf("you made no profit no loss on this item.");
                        }
                        else{
                            printf("you made a profit on this item.");
                            printf("\nyou made a profit of : %d rs",profit_loss_statement);
                        }












     // checking area of rectangle is greater or not then perimeter of rectangle
      int length_of_rectangle,breadth_of_rectangle,area_of_rectangle,perimeter_of_rectangle;
      printf("enter length of rectangle : ");
      scanf("%d",&length_of_rectangle);
      printf("enter breadth of rectangle : ");
      scanf("%d",&breadth_of_rectangle);

      area_of_rectangle=length_of_rectangle*breadth_of_rectangle;
      perimeter_of_rectangle=2*(length_of_rectangle+breadth_of_rectangle);

                        if (area_of_rectangle>perimeter_of_rectangle)
                        {
                            printf("area of rectangle is greater then perimeter of rectangle.");
                        }
                        
                        else
                        {
                            printf("perimeter of rectangle is greater then area of rectangle.");
                        }





      
    return 0;
}