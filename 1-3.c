#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
	printf("It's a Fahrenheit-Celsius table\n");
	float fahr,celsius;
	
	printf("Fahrenheit\tCelsius\n");
	
	fahr=LOWER;
	while(fahr<=UPPER)
	{
		celsius=(5.0/9.0)*(fahr-32.0);
		printf("%.2f\t\t%.2f\n",fahr,celsius);
		fahr+=STEP;
	}
	
	return 0;
}
