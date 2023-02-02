#include <stdio.h>
int main() {
	int red, green, blue, cnt=0;
	scanf("%d %d %d", &red, &green, &blue);
	
	for (int i=0; i<red;i++)
	{
		for (int j=0; j<green; j++)
		{
			for (int n=0; n<blue;n++)
			{
				printf("%d %d %d\n", i,j,n);
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);
	return 0;
}
		
		
		
		
		
		
		
	