/*
     Name:      Marsdin Davidson 
     Student#:  121431159
     Section:   ZZ
*/

// Start your code below:
#include <stdio.h>
int main(void){
double amtpaid;
int loonies;
int quarters;

printf("Please enter the amount to be paid: $");
scanf("%lf", &amtpaid);

loonies = amtpaid;
amtpaid -= loonies;

printf("Loonies required: %d,", loonies);
printf(" balance owing $%.2f\n", amtpaid);

quarters = amtpaid / .25;
amtpaid -= .25 * quarters;

printf("Quarters required: %d,", quarters);
printf(" balance owing $%.2f\n", amtpaid);


return 0;
}
