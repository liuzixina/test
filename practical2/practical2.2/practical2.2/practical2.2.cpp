#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* function to read number from standard input (keyboard) */ void getNumber(int *);
/* function to calculate the sum of two numbers */
int calculateSum(int, int);
/* function to display details to the screen */
void displayDetails(void);
int main() {
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();

	/* prompt for and read first number */
	printf("Please enter first number : ");
	num1 = getNumber(num);

	/* prompt for and read second number */
	printf("Please enter second number: ");
	num2 = getNumber(num);

	/* add two numbers together and display to screen */
	sum = calculateSum(num1, num2);
	printf("\nSum of %d and %d is: %d\n\n", num1, num2, sum);

	return 0;
}
/* function to read number from standard input (keyboard) */
void getNumber(int *num) {

	scanf("%d", &num);
}
/* function to calculate the sum of two numbers */
int calculateSum(int number1, int number2) {
	return number1 + number2;
}
/* function to display details to the screen */
void displayDetails(void) {
	printf("Author : Zixin Liu\n");
	printf("Stud ID : 2118040111\n");
	printf("Email ID : 2137744656@qq.com\n");
	printf("This is my own work as defined by the \n"); printf("University's Academic Misconduct Policy.\n\n");
}/* end function displayDetails */


