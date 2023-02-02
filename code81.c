#include <stdio.h>
int main() {
	int int_num1, int_num2;
	scanf("%d %d", &int_num1, &int_num2);
	for (int i=1;i<int_num1+1;i++)
	{
		for (int j=1;j<int_num2+1;j++)
		{
			printf("%d %d\n", i, j);
		}
	}
	return 0;
}