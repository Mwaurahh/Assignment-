#include <stdio.h>

int main (){ 

int age ;
double salary ;

printf("Enter age:");
scanf("%d",&age);

printf("Enter your monthly salary:");
scanf("%lf",&salary);

if (age >= 21 && salary >= 21000 ){
    printf("Congratulations you qualify for a loan");
}
else {
    printf("Unfortunately, we are unable to offer you a loan at this time.");
}
return 0;

