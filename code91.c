#include <stdio.h>
int main() {
	int a, m, d, n; //a�� ���۰�, m�� ���Ұ�, d�� ���Ұ�.  n�� ���°  ��������.
	scanf("%d %d %d %d", &a,&m, &d, &n);

	// 1��° = a
	///2~n��°�� ���ڸ� ����.
for (int i=0;i<n-1;i++)
{
		a = a * m + d;
		//printf("[%d] = %d\n", i, a);
}

	printf("%d", a);

	
	return 0;
}