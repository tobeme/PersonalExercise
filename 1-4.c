#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	printf("Celsius\t\tFahrenheit\n");

	float fahr,celsius;

	celsius=LOWER;
	while(celsius<=UPPER)
	{
		fahr=(9.0/5.0)*celsius+32.0;
		printf("%.2f\t\t%.2f\n",celsius,fahr);
		celsius+=STEP;
	}

	return 0;

}
