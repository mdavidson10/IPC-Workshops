<<<<<<< HEAD
// Name: Marsdin Davidson
// Student Number: 121431159
// Email: mdavidson10@myseneca.ca
// Section: Z
// Workshop: 3

#include <stdio.h>
#define NUMS 4
int main(void){
int i;
int a;
int max = 0;
int min = 0;
int lowday = 0;
int highday = 0;
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
	for( a = 0; a < NUMS; a++){
                if(max < dayshigh[a]){
                max = dayshigh[a];
                highday = a + 1;
                }
                if(min > dayslow[a]){
                min = dayslow[a];
                lowday = a + 1;
                }
		}

		printf("\nThe average (mean) temperature was: %.2lf", avg);
		printf("\nThe highest temperature was %d, on day %d", max, highday);
		printf("\nThe lowest temperature was %d, on day %d\n", min, lowday);


	
	
 	


	
			
	
	

	


return 0;
}


=======
// Name:
// Student Number:
// Email:
// Section:
// Workshop:
#define _CRT_SECURE_NO_WARNINGS

// Put your code below:
>>>>>>> upstream/master
