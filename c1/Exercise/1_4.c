#include <stdio.h>

int main(){
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("C \t F\n");
	while(celsius <= upper){
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
