#include <stdio.h>
int main() {
	int int_num[3];
	scanf("%d %d %d", &int_num[0], &int_num[1], &int_num[2]);
	for (int i = 0; i < 3; i++) {
		if (int_num[i]%2==0)
		{
			printf("even\n");
		} 
		else
		{
			printf("odd\n");
		}
	}
	return 0;
}