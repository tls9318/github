#include <stdio.h>

int main(void)
{
	int dec = 30, oct = 012, hex = 0x5E;
	printf("세 개의 정수를 각가 다음과 같이 입력하세요. ");
	printf("십진수 - 팔진수 - 십육진수\n");

	scanf_s("%d - %o - %x", &dec, &oct, &hex);
	printf("\n입력한 수는 다음과 같습니다. \n");
	printf("%d - %o - %x\n", dec, oct, hex);
	printf("%d - %d - %d\n", dec, oct, hex);

	return 0;
}