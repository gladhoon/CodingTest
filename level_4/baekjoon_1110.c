#include <stdio.h>

int main(void)
{
	int N, M, a, b, count=0;
	scanf("%d", &N);
	M = N;
	
	while(1) {
		a = M % 10;
		b = M/10 + a;
		if(b >= 10) {
			b %= 10;
		}
		a *= 10;
		M = a + b;
		count ++;
		if (M == N) {
			printf("%d\n", count);
			break;
		}
	}	
} 
