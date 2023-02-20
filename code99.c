#include <stdio.h>

//개미는 오른쪽으로 움직이다가 벽을 만나면 아래쪽으로 움직여 가장 빠른 길로 움직였다.
//(오른쪽에 길이 나타나면 다시 오른쪽으로 움직인다.)


// 개미집은 반드시(2, 2)에 존재하기 때문에 개미는(2, 2)에서 출발한다. -> 0부터 시작하면 (1,1)


//맨 아래의 가장 오른쪽에 도착한 경우, 더 이상 움직일 수 없는 경우, 먹이를 찾은 경우에는
//더이상 이동하지 않고 그 곳에 머무른다고 가정한다.

int main() {
	int A[10][10];
	int pos;
	int ant_x, ant_y, food_x, food_y;


	//입력 받기, 음식 위치 저장
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

	//개미의 이동

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

	// printf("food num: %d ,음식 x,y: %d %d", A[food_x][food_y], food_x, food_y);  확인 잘 됨.
	printf("ant num: %d ,음식 x,y: %d %d", A[ant_x][ant_y], ant_x, ant_y);




}