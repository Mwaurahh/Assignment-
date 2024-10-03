#include <stdio.h>


int main (){
    
    printf("Hi there, welcome to BETA LIBRARY\n");
    
    int bookID ,dueDate , returnDate ,daysOverdue;
    double fineRate , fineAmount; 
    
    printf("Please enter your Book ID:");
    scanf("%d",&bookID);
    
    printf("Enter Due Date:");
    scanf("%d",&dueDate);
    
    printf("Enter Return Date:");
    scanf("%d",& returnDate);
 
     
    if (returnDate > dueDate ){
         daysOverdue= returnDate - dueDate ;
         printf("Your days overdue are %d\n",daysOverdue);
     }
     
         else if (returnDate < dueDate){
         printf ("Book returned on time \n");
    }
   
       if (daysOverdue >=1 && daysOverdue<=7) { 
          fineRate=20;
          fineAmount= daysOverdue * fineRate;
      
    
    }
    else if ( daysOverdue >=8 && daysOverdue<= 14) {
           fineRate= 50;
           fineAmount = daysOverdue * fineRate;
         
        
    }
    else if (daysOverdue >= 15){
          fineRate=100;
          fineAmount = daysOverdue * fineRate;
        
    }
    
    printf("Book ID is %d\n",bookID);
    printf("Your due date is %d\n",dueDate);
    printf("Your return date is %d\n",returnDate);
    printf("Your days overdue are %d\n",daysOverdue);
    printf("Fine rate is %.2lf\n",fineRate);
    printf("Your fine amount is %.2lf\n",fineAmount);
    printf("Thank you for choosing BETA LIBRARY\n ");
    printf("Come back soon.");
    
 
    return 0;    
}
