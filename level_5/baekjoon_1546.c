#include <stdio.h>

int main(void)
{
	int N, i, max=0;
	double arr[1000], score;
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%lf", &arr[i]);
		if(arr[i] > max)
			max=arr[i];
	}
	
	for(i=0; i<N; i++) {
		arr[i] = arr[i] / max * 100;
		score += arr[i];
	}
	
	printf("%.2lf", score / N);
	
	return 0;
}
