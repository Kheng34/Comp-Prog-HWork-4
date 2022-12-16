#include <stdio.h>

int temp;

int main() {
	printf("Please enter temperature: ");
	scanf("%d", &temp);
	if(temp < 0) 
		printf("Freezing");
	else if(0 <= temp && temp < 10) 
		printf("Very Cold");
	else if(10 <= temp && temp < 20)
		printf("Cold");
	else if(20 <= temp && temp < 30) 
		printf("Normal");
	else if(30 <= temp && temp < 40) 
		printf("Hot");
	else if(40 <= temp) 
		printf("Very Hot");
	printf("\n");system("PAUSE");return 0;
}
