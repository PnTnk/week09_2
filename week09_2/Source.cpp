#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void swap(char*, char*);
int main() {
	char s[50];
	scanf("%s", s);
	int n = strlen(s);
	int x = n - 1;
	int i = 0;
	if (n % 2 == 0) {
		while (i != x + 1) {
			swap(&s[i], &s[x]);
			i += 1;
			x -= 1;
		}
	}
	else{
		while (i != x ) {
			swap(&s[i], &s[x]);
			i += 1;
			x -= 1;
		}
	}
	printf("%s", s);
	return 0;
}
void swap(char* x, char* y) {
	char c = *x;
	*x = *y;
	*y = c;
}