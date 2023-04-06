#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;


/* The following are function declarations. They _declare_ that the functions exist but they do not _define_ what the functions actually do (the definitions appear after the main function). By declaring these functions here, they may be called in the main before they are defined.

Note: function1 expects an int type, whereas function2 expects a pointer to an int  */
void function1(int);
void function2(int *);

int main() {
	int number = 10;
	/* C1. display the contents of number to the screen */
	std::cout <<"Value of number is: "<<number<<'\n';
	/* C2. display the address of variable number to the screen */
	std::cout << "Address of number is : "<< &number << '\n';
	/* C3. call function1 */
	function1(number);
	/* C4. display the contents of number to the screen */
	std::cout <<"Value of number after call to function1 is : "<< number << '\n';
	/* C5. call function2 */
	int*p1 = &number;
	function2(p1);
	/* C6. display the contents of number to the screen */
	std::cout << "Value of number after call to function2 is : " <<number << '\n';
	std::cout << "Program ended with exit code : 0";
	return 0;

}
void function1(int number)
{
	/* C7. increment number by one */
	number = number + 1;
	/* C8. display the contents of number to the screen (should be 11) */
	std::cout << "Value of number in function1 is: "<< number << '\n';
	/* C9. display the address of number to the screen */
	std::cout << "Address of number is : "<< &number << '\n';
}

void function2(int *numberPtr)
{
	/* C10. display the address of number to the screen (should be the same address as you displayed first in main) */
	std::cout << "Address of number is : "<< numberPtr << '\n';
	/* C11. display the value that the pointer numberPtr points to */
	std::cout <<"Value of number in function2 is : "<< *numberPtr << '\n';
	/* C12. increment the value stored in number */
	*numberPtr = *numberPtr + 1;
	/* C13. display the contents of number to the screen */
	std::cout << "Value of number after increment in function2 is : " << *numberPtr << '\n';
	
}