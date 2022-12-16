#include <stdio.h>

int a, b, c;

int main() {
	printf("Please enter first edge: ");
	scanf("%d", &a);
	printf("Please enter second edge: ");
	scanf("%d", &b);
	printf("Please enter third edge: ");
	scanf("%d", &c);
	if(a == b) {
		if(a == c)
			printf("Triangle is equilateral");
		else
			printf("Triangle is isosceles");
	}
	else if(a == c || b == c)
		printf("Triangle is isosceles");
	else
		printf("Triangle is scalene");
	printf("\n");system("PAUSE");return 0;
}
