#include <stdio.h>
#include <algorithm>
#include <stdint.h>
#include <string.h>

int main(int argc, char* argv[])
{
	printf("Hello Mathematics\n");

	size_t maxDigits = 4;
	uint8_t* pLeftDigits = new uint8_t[maxDigits];
	uint8_t* pRightDigits = new uint8_t[maxDigits];
	memset(pLeftDigits, 0, maxDigits);
	memset(pRightDigits, 0, maxDigits);

	printf(" ");
	for(size_t i = 0; i < maxDigits; i++)
	{
		pLeftDigits[i] = rand() % 9;
		printf("%1d", pLeftDigits[i]);
	}
	printf("\n");

	printf("-");
	for(size_t i = 0; i < maxDigits; i++)
	{
		pRightDigits[i] = rand() % 9;
		printf("%1d", pRightDigits[i]);
	}
	printf("\n");

	for(size_t i = 0; i < maxDigits + 1; i++)
	{
		printf("-");
	}
	printf("\n");

	return 0;
}

