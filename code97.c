#include <stdio.h>

//1. ��ǥ �߽�, �ڱ� �ڽ��� �ٲ��� �ʴ´�. 1-> 0 x�� -> 1 y�� 

int main() {
	int A[19][19] = { 0, };
	int int_n, int_x, int_y;

	for (int i = 0; i < 19; i++) //�� �پ� �ٵ��� ��Ȳ �Է� �ޱ�
		for (int j = 0; j < 19; j++)
			scanf("%d", &A[i][j]);


	scanf("%d", &int_n);

	for (int i = 0; i < int_n; i++)
	{
		scanf("%d %d", &int_x, &int_y);


		for (int y = 0; y < 19; y++) {
			if (A[int_x - 1][y] == 0)
			{
				A[int_x-1][y] = 1;

			}
			else {
				A[int_x - 1][y] = 0;

			}
		}

		for (int x = 0; x < 19; x++) {
			if (A[x][int_y - 1] == 0)
			{
				A[x][int_y - 1] = 1;

			}
			else {
				A[x][int_y - 1] = 0;

			}
		}

	}
	for (int i = 0; i <19; i++) 
	{
		for (int j = 0; j <19; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}