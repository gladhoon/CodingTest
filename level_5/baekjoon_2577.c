#include <stdio.h>

int main(void)
{
	int A, B, C, i, n;
	int arr[10] = {0, };
	scanf("%d %d %d", &A, &B, &C);
	int num = A * B * C;
	
	while(num > 0) {
		n = num % 10;
		arr[n]++;
		num /= 10;
	}
	
	for(i=0; i<10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
