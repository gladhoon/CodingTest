#include <stdio.h>

int main(void)
{
	int N, X, i, T;
	scanf("%d %d", &N, &X);
	
	for(i=0; i<N; i++) {
		scanf("%d", &T);	
		if(X > T)
			printf("%d\n", T);
	}
	return 0;
}
