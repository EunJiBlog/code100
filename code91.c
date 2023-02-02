#include <stdio.h>
int main() {
	int a, m, d, n; //a는 시작값, m은 곱할값, d는 더할값.  n은 몇번째  인자인지.
	scanf("%d %d %d %d", &a,&m, &d, &n);

	// 1번째 = a
	///2~n번째의 숫자를 구함.
for (int i=0;i<n-1;i++)
{
		a = a * m + d;
		//printf("[%d] = %d\n", i, a);
}

	printf("%d", a);

	
	return 0;
}