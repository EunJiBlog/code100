#include <stdio.h>
int main(){
	char char_str[2000] ="";
	scanf("%[^\n]", char_str); /// %[^\n]   엔터를 제외한 모든 문자열을 받는다
	printf("%s", char_str);
	return 0;
}