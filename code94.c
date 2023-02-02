#include <stdio.h>
int main() {
	int cnt, ho_num[10000] = {0,}, random_num[23] = { 0, };

	scanf("%d", &cnt);
	for (int i=0; i<cnt; i++)
	{
		scanf("%d", &ho_num[i]);
	}

	for (int i=cnt; i>0; i--)
	{
		if (ho_num[i] == 0)
		{
			continue;
		}
		for (int j = 0; j < cnt+1; j++)
		{
			random_num[j] = ho_num[i];
			i--;
		}
	}
	for (int i=0; i<cnt;i++)
	{
		printf("%d ", random_num[i]);
	}
	
	return 0;
}