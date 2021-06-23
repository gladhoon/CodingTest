#include <stdio.h>

int main(void)
{
	int i, j, k, N;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++) {
		for(k=N-i; k>0; k--) {
			printf(" ");
		}
		for(j=i; j>0; j--) {
			printf("*");
		}
		printf("\n");
	}
}
