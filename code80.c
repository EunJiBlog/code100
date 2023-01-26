#include <stdio.h>
int main() {
	int int_num, sum=0;
	scanf("%d", &int_num);

	for (int i=0; ; i++)
	{
		sum += i;
		if (sum==int_num)
		{
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}