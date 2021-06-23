#include <stdio.h>

int main(void)
{
	int i, j, N;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++) {
		for(j=i; j>0; j--)
			printf("*");
		printf("\n");
	}
	return 0;
}
