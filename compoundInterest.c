#include <stdio.h>
#include <math.h>
int main ( ){


    double principle ;
    double time ;
    double rate ;
    double compoundInterest;
    double amount;
    double n;
    
    printf("Enter principle:");
    scanf("%lf", &principle);
    
    printf("Enter time(in years) :");
    scanf("%lf",&time);
    
    printf("Enter the rate:");
    scanf("%lf",&rate);
    
    printf("Enter the number of times the interest is compounded yearly:");
    scanf("%lf",&n);
    
    amount = (principle * pow(( 1+ (rate/100)/n),(n*time)));
     
    printf("The compoundIntrest amount is %.2lf\n", amount);
     
    compoundInterest = amount - principle;
      
    printf("The compoundIntrest is %.2lf", compoundInterest);
    


    return 0;
}
