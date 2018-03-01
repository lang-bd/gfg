#include <iostream>
#include <cstdio>

using namespace std;

void add(int a, int b) {

	printf("Adding a & b is : %d", a + b);
}

void sub(int a, int b) {
	printf("Subtracting a from b is : %d", a - b);
}

void mul(int a, int b) {
	printf("Multiplying a with b is : %d", a * b);
}



void fun(int a) {
	printf("The Value of a is %d \n\n", a);
}


int main() {


	void(*fun_ptr)(int) = &fun;

	(*fun_ptr)(10);

	void(*fun_ptr_arr[])(int, int) = { add, sub, mul };

	unsigned int choice, a = 10, b = 5;

	printf("Enter Choice (0 -> add, 1->subtract, 2->multiply): ");
	scanf_s("%d", &choice);
	
	if (choice > 2) {
		return 0;
	}

	(*fun_ptr_arr[choice])(a, b);

	printf("\n");

	getchar();
	getchar();
	return 0;
}