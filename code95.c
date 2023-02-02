#include <stdio.h>
int main() {
	int int_num1, int_num2, tmp=23;

	scanf("%d", &int_num1);
	for (int i=0;i<int_num1;i++)
	{
		scanf("%d", &int_num2);
		if (int_num2<tmp)
		{
			tmp = int_num2;
		}
	}

	printf("%d", tmp);
	return 0;
}