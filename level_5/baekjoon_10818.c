#include <stdio.h>

int main(void)
{
	int N, i, num, max = -1000001, min = 1000001;
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%d", &num);
		if(num > max)
			max = num;
		if(num < min)
			min = num;
	}
	printf("%d %d", min, max);
	
	return 0;
}
