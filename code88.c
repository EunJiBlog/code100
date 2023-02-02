#include <stdio.h>
int main() {
	int int_num;
	scanf("%d", &int_num);
	for (int i=1;i<10+1;i++)
	{
		if (i%3==0)
		{
			i++;
		}
		printf("%d ", i);
	}
	return 0;
}