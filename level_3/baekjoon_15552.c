#include <stdio.h>

int main(void)
{
	int A, B,i, T;
	scanf("%d", &T);
	for(i=0; i<T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A+B);
	}
	return 0;
}
