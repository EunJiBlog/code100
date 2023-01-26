#include <stdio.h>
int main() {
	int num, input_num;
	scanf("%d", &num);
	for (int i=0;i<num;i++)
	{
		scanf("%d", &input_num);
		printf("%d\n", input_num);
	}
	return 0;
}