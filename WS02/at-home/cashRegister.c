/*
     Name:      Marsdin Davidson 
     Student#:  121431159
     Section:   ZZ
*/

// Start your code below:
#include <stdio.h>
int main(void){
double amtpaid;
double GST;
int intBalance;
int loonies;
int quarters;
int dimes;
int nickels;
int pennies;

printf("Please enter the amount to be paid: $");
scanf("%lf", &amtpaid);

GST = amtpaid * .13 + 0.005;
amtpaid += GST;

printf("GST: %.2lf\n", GST);
printf("Balance owing: $%.2lf\n", amtpaid);

loonies = amtpaid;
amtpaid -= loonies;
intBalance = amtpaid * 100;
printf("Loonies required: %d, ", loonies);
printf("balance owing $%.2lf\n", amtpaid);

quarters = intBalance / 25;
intBalance %= 25;

printf("Quarters required: %d, ", quarters);
printf("balance owing $%1.2f\n", (float)intBalance/100);

dimes = intBalance / 10;
intBalance %= 10;

printf("Dimes required: %d, ", dimes);
printf("balance owing $%1.2f\n", (float)intBalance/100);

nickels = intBalance / 5;
intBalance %= 5;

printf("Nickels required: %d, ", nickels);
printf("balance owing $%1.2f\n", (float)intBalance/100);

pennies = intBalance / 1;
intBalance %= 1;

printf("Pennies required: %d, ", pennies);
printf("balance owing $%1.2f\n", (float)intBalance/100);

return 0;
}
