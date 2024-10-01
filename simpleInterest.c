#include <stdio.h> 

  int main(){
   
    double principle;
    double time;
    double rate;
    
    printf("Enter principle:");
    scanf("%lf", &principle);
    
    printf("Enter time :");
    scanf("%lf",&time);
    
    printf("Enter the rate:");
    scanf("%lf",&rate);
    
    double simpleInterest;
   
    simpleInterest = (principle*time*rate)/100;
    printf("The simpleIntrest is %.2lf", simpleInterest);
   
    return 0;
}
