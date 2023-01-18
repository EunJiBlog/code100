#include <stdio.h>
int main() {
	float input_flaot, fraction;

	scanf("%f", &input_flaot);
	fraction = (input_flaot - (int)input_flaot)*1000000;

	printf("%.f\n", input_flaot); //정수 출력
	printf("%.f\n", fraction); //실수 부분 출력
	return 0;
}