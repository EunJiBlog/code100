#include <stdio.h>

//���̴� ���������� �����̴ٰ� ���� ������ �Ʒ������� ������ ���� ���� ��� ��������.
//(�����ʿ� ���� ��Ÿ���� �ٽ� ���������� �����δ�.)


// �������� �ݵ��(2, 2)�� �����ϱ� ������ ���̴�(2, 2)���� ����Ѵ�. -> 0���� �����ϸ� (1,1)


//�� �Ʒ��� ���� �����ʿ� ������ ���, �� �̻� ������ �� ���� ���, ���̸� ã�� ��쿡��
//���̻� �̵����� �ʰ� �� ���� �ӹ����ٰ� �����Ѵ�.

int main() {
	int A[10][10];
	int pos;
	int ant_x, ant_y, food_x, food_y;


	//�Է� �ޱ�, ���� ��ġ ����
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			scanf("%d", &pos);
			A[i][j]=pos;
			if (pos ==2)
			{
				food_x = i;
				food_y = j;
			}
		}
	}

	ant_x = 1;
	ant_y = 1;
	A[1][1] = 9;

	//������ �̵�

	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 10; j++)
		{	
			if (A[ant_x][j]==0&& A[ant_x][j-1]==9)
			{
				ant_y = j;
			}else if (A[i][j+1] == 1) {
				ant_x ++;
				if(A[i][j + 1]==0)
					continue;
			}
			else
				;


			if (A[ant_x][ant_y] == 2) {
				A[ant_x][ant_y] = 9;
				break;
			}
			else if (A[ant_x][ant_y] == 0) {
				A[ant_x][ant_y] = 9;
			}
			else if (A[ant_x][ant_y] == 1) {
				A[ant_x][ant_y] =1;
			}
			else if (A[ant_x][ant_y] == 9) {
				A[ant_x][ant_y] = 9;
			}
			else
			{
				A[ant_x][ant_y] = 0;
			}

			//printf("%d ", A[i][j]);
		}
		//printf("\n");
	}



	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	// printf("food num: %d ,���� x,y: %d %d", A[food_x][food_y], food_x, food_y);  Ȯ�� �� ��.
	printf("ant num: %d ,���� x,y: %d %d", A[ant_x][ant_y], ant_x, ant_y);




}