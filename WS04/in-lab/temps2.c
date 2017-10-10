#include <stdio.h>
int main(void){
int i;
int a;
int dayin;
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
printf("\nDay\tHi\tLow\n");
for(a=0; a < dayin; a++){
	printf("%d\t%d\t%d\n", a+1, hi[a], lo[a]);
	}//dayin printing for loop

return 0;
}//Main
