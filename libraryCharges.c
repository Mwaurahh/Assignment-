#include <stdio.h>


int main (){
    
    printf("Hi there, welcome to BETA LIBRARY\n");
    
    int bookID ;
    int dueDate ;
    int returnDate ;
    
    printf("Please enter your Book ID:");
    scanf("%d",&bookID);
    
    printf("Enter Due Date:");
    scanf("%d",&dueDate);
    
    printf("Enter Return Date:");
    scanf("%d",& returnDate);
    
    int daysOverdue ;
    double fine ; 
     
    if (returnDate > dueDate ){
         daysOverdue= returnDate - dueDate ;
           printf("Your days overdue are %d\n",daysOverdue);
     }
     
        else if (returnDate < dueDate){
         printf ("Book returned on time \n");
    }
    
       if (daysOverdue >=1 && daysOverdue<=7) { 
        fine= daysOverdue * 20;
      printf("Your charges are %.2lf\n",fine);
    
    }
    else if ( daysOverdue >=8 && daysOverdue<= 14) {
        fine = daysOverdue * 50;
         printf("Your charges are %.2lf\n",fine);
        
    }
    else if (daysOverdue >= 15){
        fine = daysOverdue * 100;
        printf("Your charges are %.2lf\n",fine);
    }
    
    printf("Thank you for choosing BETA LIBRARY\n ");
    printf("Come back soon.");
    
 
    return 0;    
}
