#include <stdio.h>
int main() {
	int int_h, int_w; //h: 세로, w: 가로
	int int_n; //n: 막대의 개수
	int int_i, int_d, int_y, int_x; //막대의 길이, 방향(0 : 옆 , 1: 아래), 좌표 
	int A[100][100] = {0,};
	int cnt=0;


	scanf("%d %d", &int_h, &int_w);
	scanf("%d", &int_n);

	//int_n 만큼 반복
	for (int i=0;i<int_n;i++ )
	{
		scanf("%d %d %d %d", &int_i, &int_d, &int_x, &int_y);
		
		//배열에 저장
		A[int_x][int_y] = 1;
		for (int j =1; j<int_i;j++)
		{
			if (int_d==0)
			{
				A[int_x][int_y + j] = 1;
			}
			else if (int_d == 1) {
				A[int_x + j][int_y] = 1;
			}
			else
			{
				;
			}
			
		}
	}

	



	//배열 print
	for (int i = 1; i < int_w+1; i++)
	{
		for (int j=1; j<int_h+1;j++)
		{
			printf("%d ", A[i][j]);

		}
		printf("\n");
	}

	return 0;
}