#include <stdio.h>
int main() {
	int input_num, plus=0;
	scanf("%d", &input_num);

	for (int i=0;i<input_num+1;i++)
	{
		if (i%2==0)
		{
			plus += i;
		}
	}
	printf("%d",plus);

	return 0;
}