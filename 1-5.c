#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	printf("Fahrenheit\tCelsius\n");
	float fahr,celsius;

	fahr=UPPER;
	while(fahr>=LOWER)
	{
		celsius=(5.0/9.0)*(fahr-32.0);
		printf("%.2f\t\t%.2f\n",fahr,celsius);
		fahr-=STEP;
	}
	return 0;

}
