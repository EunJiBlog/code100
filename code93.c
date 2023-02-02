#include <stdio.h>
int main() {
	int int_num, class_num[23] = { 0, }, teacher[100] = {0,};
	scanf("%d", &int_num);

	for (int i=0; i<int_num;i++)
	{
		scanf("%d",&teacher[i]);
	}

	for (int i=0; i<100;i++ )
	{
		if (teacher[i] == 0) {
			continue;
		}
		for (int j= 0 ; j< 23;j++)
		{
			if (j+1 == teacher[i]) {
				class_num[j]++;
				continue;
			}
		}
	}

	for (int i=0; i<23;i++ )
		printf("%d ", class_num[i]);

	return 0;
}