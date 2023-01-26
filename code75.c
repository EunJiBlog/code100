#include <stdio.h>
int main() {
	int cnt_num;
	scanf("%d", &cnt_num);
	while (1)
	{
		cnt_num--;
		printf("%d\n", cnt_num);
		if (cnt_num==0)
		{
			break;
		}
	}
	
	return 0;
}