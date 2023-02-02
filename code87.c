#include <stdio.h>
int main() {
	int int_num, rst=0;
	scanf("%d", &int_num);
	for (int i =1 ; ; i++)
	{
		if (rst == int_num || rst > int_num)
		{
			break;
		}
		rst += i;
		
	}
	printf("%d", rst);
	return 0;
}