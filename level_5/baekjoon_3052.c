#include <stdio.h>

int main(void)
{
	int A, i, n, B=42, count=0;
	int arr[42] = {0, };
	
	for(i=0; i<10; i++) {
		scanf("%d", &A);
		n = A % B;
		if(arr[n] == 0) {
			count++;
			arr[n]++;
		}
	}
	printf("%d", count);
	
	return 0;
}
/*
int main(void)
{
	int i, j, arr[10], result=0;
	
	for(i=0; i<10; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}
	for(i=0; i<10; i++) {
		int count = 0;
		
		for(j=0; j<i; j++) {
			if(arr[i] == arr[j])
				count++;
		}
		if(count == 0)
			result++;
	}
	printf("%d", result);
	
	return 0;
}
*/
