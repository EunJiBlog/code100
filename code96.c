#include <stdio.h>
int main() {
	int num, xy[19][19] = { 0, }, in_x, in_y;

	scanf("%d", &num);
	for (int i=0; i<num;i++)
	{
		scanf("%d %d", &in_x, &in_y);
		xy[in_x-1][in_y-1] = 1;
	}
	for (int i = 0; i < 19; i++)
	{
		printf("\n");
		for (int j = 0; j < 19; j++)
		{
			printf("%d ", xy[i][j]);
		}
	}



	return 0;
}