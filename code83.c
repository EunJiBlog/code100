#include <stdio.h>
int main() {
	int int_num;

	scanf("%d", &int_num);
	for (int i = 1; i < int_num; i++)
	{
		if (i%3==0)
		{
			printf("X ");
			i++;
		}
		printf("%d ", i);
	}
	return 0;
}