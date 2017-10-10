<<<<<<< HEAD
#include <stdio.h>
int main(void){
int i;
int a;
int b;
int c;

int whilecatch = 0;
int max = 0;
int min = 0;
int highday = 0;
int lowday = 0;
int dayin;
double total = 0;
double avg = 0;
printf("---=== IPC Temperature Calculator V2.0 ===---\n");
printf("Please enter the number of days, between 3 and 10, inclusive: ");
scanf("%d", &dayin);
//int day[dayin];
int hi[dayin];
int lo[dayin];
while(dayin < 3 || dayin >10){
	printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
	scanf("%d", &dayin);
	}//dayin while catch loop
printf("\n");
for(i=0; i < dayin; i++ ){
	printf("Day %d - High: ", i+1);
	scanf("%d", &hi[i]);
	printf("Day %d - Low: ", i+1);
	scanf("%d", &lo[i]);
	}//dayin for loop

printf("\nDay  Hi  Low\n");
for(a=0; a < dayin; a++){
	printf("%d    %d    %d\n", a+1, hi[a], lo[a]);
}//dayin printing for loop
for(b=0; b < dayin; b++){
	if(max < hi[b]){
		max = hi[b];
		highday = b + 1;		
	}//if statement
	if(min > lo[b]){
		min = lo[b];
		lowday = b + 1;
	}
}//for loop
printf("\nThe highest temperature was %d, on day %d", max, highday);
printf("\nThe lowest temperature was %d, on day %d\n", min, lowday);
while(whilecatch >= 0){
	total = 0;	
	avg = 0;
	printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &whilecatch);
	while(whilecatch > dayin){
		printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", dayin);
		scanf("%d", &whilecatch);
	}//whilecatch error trapping loop
	for(c = 0; c < whilecatch; c++){
	total += hi[c];
	total += lo[c];
	avg = total / (whilecatch * 2);
	}//average calculator loop
	if(whilecatch < 0){
	printf("\nGoodbye!\n");
	break;
	}//if whilecatch break
	printf("\nThe average temperature up to day %d is: %.2lf\n", whilecatch, avg);
}//whilecatch loop

return 0;

}//Main
=======
// Name:
// Student Number:
// Email:
// Section:
// Workshop:

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
>>>>>>> upstream/master
