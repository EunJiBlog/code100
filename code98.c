#include <stdio.h>
int main() {
	int int_h, int_w; //h: ����, w: ����
	int int_n; //n: ������ ����
	int int_i, int_d, int_y, int_x; //������ ����, ����(0 : �� , 1: �Ʒ�), ��ǥ 
	int A[100][100] = {0,};
	int cnt=0;


	scanf("%d %d", &int_h, &int_w);
	scanf("%d", &int_n);

	//int_n ��ŭ �ݺ�
	for (int i=0;i<int_n;i++ )
	{
		scanf("%d %d %d %d", &int_i, &int_d, &int_x, &int_y);
		
		//�迭�� ����
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

	



	//�迭 print
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