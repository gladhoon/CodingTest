// C언어는 운영체제와 상관없이 파일의 끝에 도달했을 때 언제나 특변한 값을 반환하도록 한다.
// EOF는 End Of File의 약자로 파일의 끝을 표현하기 위해 -1로 정의된 상수이다. 
#include <stdio.h>

int main(void)
{
	int A, B;
	while(scanf("%d %d", &A, &B) != EOF) {
		printf("%d\n", A+B);
	}
	return 0;
}
