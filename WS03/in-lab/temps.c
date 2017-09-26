// Name: Marsdin Davidson
// Student Number: 121431159
// Email: mdavidson10@myseneca.ca
// Section: Z
// Workshop: 3

#include <stdio.h>
#define NUMS 3
int main(void){
int i;
int dayshigh[NUMS];
int dayslow[NUMS];
double total = 0;
double avg = 0;

	printf("---=== IPC Temperature Analyzer ===---");
	for( i = 0; i < NUMS; i++){
		
	printf("\nEnter the high value for day %d: ", i+1 );

	scanf("%d", &dayshigh[i]);
	printf("\nEnter the low value for day %d: ", i+1 );
	
	scanf("%d", &dayslow[i]);
	
		while(dayshigh[i] > 40 || dayslow[i] < -41 || dayslow[i] > dayshigh[i]){
		printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
		printf("\nEnter the high value for day %d: ", i+1);
		scanf("%d", &dayshigh[i]);	
		printf("\nEnter the low value for day %d: ", i+1);
		scanf("%d", &dayslow[i]);
		

		}	
	
	total += dayshigh[i]; 
	total += dayslow[i];
	avg = total / (NUMS * 2);
	}

		printf("\nThe average (mean) temperature was: %.2lf\n", avg);


	
	
 	


	
			
	
	

	


return 0;
}


