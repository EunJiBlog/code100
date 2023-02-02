#include <stdio.h>
int lcm(int a, int b);
int gcd(int a, int b);

int main() {
	int tm1, tm2, tm3;
	scanf("%d %d %d",&tm1, &tm2, &tm3);

	int p = lcm(tm1, tm2);
	p=lcm(p, tm3);

	printf("%d", p);

	return 0;
}

int lcm(int a, int b) {
	return (a*b) / gcd(a, b);
}
int gcd(int a, int b) {
	int rst;
	while (b!=0)
	{
		rst = a % b;
		a = b;
		b = rst;
	}
	return a;
}