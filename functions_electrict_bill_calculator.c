#include <stdio.h>

double calculate_charge_per_unit(int unitsConsumed) {
      
  if (unitsConsumed>0 && unitsConsumed<200)
  {
      return 1.2;
   
  }
  else if (unitsConsumed>=200 && unitsConsumed<400)
  {
      return 1.5;
  }
  else if (unitsConsumed >=400 && unitsConsumed<600)
  {
      return 1.8;
  }
  else if (unitsConsumed >=600)
  {
      return 2.0;   
  }
  else{
     
     return 0.0;
  }
     
}


double calculate_total_amount(double chargeperUnit ,int unitsConsumed) {
    double Amount=chargeperUnit*unitsConsumed;
    
    if (Amount>400)
  {
      printf("Your Amount before the increment is ksh%.2lf\n",      Amount); 
     double billIncrement = (15*Amount)/100;
      printf("Your bill increment is ksh%.2lf\n", billIncrement);  
       Amount=billIncrement + Amount;
       printf("Total Amount to pay is ksh%.2lf\n", Amount);
   
  }
      else if(Amount >0 && Amount<101) {
      printf("Total amount to pay is ksh100\n");
  }
      
      
      
      else if (Amount>100 && Amount<401){
      printf("Total Amount to pay is ksh%.2lf\n", Amount);
       
  }
 
    
    
    
}
int main(){
  int customerID,unitsConsumed;
  double chargeperUnit, totalAmount, charge_per_unit, total_amount;
  char customerName[50];
  
  printf("Enter your name:");
  scanf("%s", &customerName);

  printf("Enter the your ID:");
  scanf("%d",& customerID);
  
  printf("Enter units consumed:");
  scanf("%d",& unitsConsumed);
     
    printf("Your name is: %s\n", customerName);   
    printf("Your ID is : %d\n", customerID);
    printf("Your units consumed are : %d\n",unitsConsumed);

   chargeperUnit=calculate_charge_per_unit(unitsConsumed);
   
   
totalAmount=calculate_total_amount(chargeperUnit, unitsConsumed );

 
      

      
   return 0;
}