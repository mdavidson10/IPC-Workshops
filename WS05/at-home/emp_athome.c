/*
Name: Marsdin Davidson
Student number: 121431159
Email: Mdavidson10@myseneca.ca
Workshop: WS05
Section: Z
Date: Oct 10th, 2017
*/

#define _CRT_SECURE_NO_WARNINGS
#define SIZE 4
#include <stdio.h>

struct Employee {
	int id[SIZE];
	int age[SIZE];
	double salary[SIZE];

};//Emp_Data

 


/* main program */
int main(void) {
	struct Employee emp = {0};

	int i;
	int b;
	int c;
	int a = 0;
	int option = 0;
	int update;//used for input to update employee info
	printf("---=== EMPLOYEE DATA ===---\n\n");

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		
		// Capture input to option variable
		scanf("%d",&option);
		printf("\n");
		
		switch (option) {
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");	
			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for(i = 0; i < SIZE; i++){
				if(emp.id[i] > 0){
			printf("%6d%9d%11.2lf\n", emp.id[i], emp.age[i], emp.salary[i]);	
				}//if emp.id >= 0
				}//printing loop
			printf("\n");	
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 
			
			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:	// Adding Employee
				// @IN-LAB
				
			printf("Adding Employee\n");
			printf("===============\n");
			if(a >= SIZE){
			printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			break;
			}//if a >= size
			printf("Enter Employee ID: ");
			scanf("%d", &emp.id[a]);
			printf("Enter Employee Age: ");
			scanf("%d", &emp.age[a]);
			printf("Enter Employee Salary: ");
			scanf("%lf", &emp.salary[a]);
			printf("\n");
			a++;	
				
			// Check for limits on the array and add employee 
			// data accordingly. 



			break;
		case 3:
			printf("Update Employee Salary\n");
			printf("======================\n");
			do{
				printf("Enter Employee ID: ");
				scanf("%d", &update);
				
				for(b = 0; b < SIZE; b++){
					if(emp.id[b] == update){
					printf("The current salary is: %.2lf", emp.salary[b]);
					printf("\nEnter Employee New Salary: ");
					scanf("%lf", &emp.salary[b]);
					printf("\n");
					break;
					}// b = update
				}//does the number exist?
				
			}//do
			while(emp.id[b] != update); 
			break;
		case 4:
			printf("Remove Employee\n");
			printf("===============\n");
			printf("Enter Employee ID: ");
			scanf("%d", &update);
			printf("Employee %d will be removed\n\n", update);
			for(c = 0; c < SIZE; c++){
				if(emp.id[c] == update){
				emp.id[c] = 0;
				emp.salary[c] = 0;
				emp.age[c] = 0;
				}//c = update
			}//c loop
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0; 
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
