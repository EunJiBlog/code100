#include <stdio.h>
int main() {
	int A[19][19] = { 0, };
	int int_n, int_x, int_y,pos;

	for (int i = 0; i < 19; i++) //한 줄씩 바둑판 상황 입력 받기
		for (int j = 0; j < 19; j++)
			scanf("%d", &A[i][j]);
	
	
	scanf("%d", &int_n);
	
	for (int i = 0; i < int_n; i++)
	{
		scanf("%d %d", &int_x, &int_y);

		for (int y = 0; y < 19; y++) {
			if (A[int_x-1][int_y-1] == 0)
			{
				A[int_x-1][y] = 1;
				A[y][int_y-1] = 1;
			}
			else {
				A[int_x-1][y] = 0;
				A[y][int_y-1] = 0;
			}
		}

	}
	for (int i = 0; i <19; i++) //한 줄씩 바둑판 상황 입력 받기
	{
		for (int j = 0; j <19; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}