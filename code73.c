#include <stdio.h>
int main() {
	int input_num;
	for (int i=0;;i++)
	{
		scanf("%d", &input_num);
		if (input_num==0)
		{
			break;
		}
		printf("%d\n", input_num);
	}
	return 0;
}