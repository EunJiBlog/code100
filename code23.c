#include <stdio.h>
int main() {
	float input_flaot, fraction;

	scanf("%f", &input_flaot);
	fraction = (input_flaot - (int)input_flaot)*1000000;

	printf("%.f\n", input_flaot); //���� ���
	printf("%.f\n", fraction); //�Ǽ� �κ� ���
	return 0;
}