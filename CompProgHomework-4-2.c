#include <stdio.h>

int a;

int main() {
	printf("Please enter an integer: ");
	scanf("%d", &a);
	if(a % 2)
		printf("The number is odd");
	else
		printf("The number is even");
	printf("\n");system("PAUSE");return 0;
}
