#include <stdio.h>
int main() {
	int A[10][10];
	int pos;
	int ant_x, ant_y, food_x, food_y;



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




}