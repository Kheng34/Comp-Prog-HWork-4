#include <stdio.h>

int operation, a, b, result;

int main() {
	printf("1 > Addition\n2 > Subtraction\n3 > Division\n4 > Multiplication\n5 > Modulo\n");
	printf("Please enter the number of operation: ");
	scanf("%d", &operation);
	printf("Please enter first number: ");
	scanf("%d", &a);
	printf("Please enter second number: ");
	scanf("%d", &b);
	switch(operation) {
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a / b;
			break;
		case 4:
			result = a * b;
			break;
		case 5:
			result = a % b;
	}
	printf("Result: %d", result);
	printf("\n");system("PAUSE");return 0;
}
