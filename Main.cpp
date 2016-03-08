#include <stdio.h>
#include <algorithm>
#include <stdint.h>
#include <string.h>
#include <time.h>

int main(int argc, char* argv[])
{
	printf("Hello Mathematics\n");

	srand(time(NULL));

	size_t maxDigits = 4;
	uint8_t* pLeftDigits = new uint8_t[maxDigits];
	uint8_t* pRightDigits = new uint8_t[maxDigits];
	memset(pLeftDigits, 0, maxDigits);
	memset(pRightDigits, 0, maxDigits);

	printf(" ");
	bool bLeading = true;
	for(size_t i = 0; i < maxDigits; i++)
	{
		pLeftDigits[i] = rand() % 9;
		if(bLeading && (pLeftDigits[i] == 0))
		{
			printf(" ");
		}
		else
		{
			bLeading = false;
			printf("%1d", pLeftDigits[i]);
		}
	}
	printf("\n");

	printf("-");
	bLeading = true;
	for(size_t i = 0; i < maxDigits; i++)
	{
		pRightDigits[i] = rand() % 9;
		if(bLeading && (pRightDigits[i] == 0))
		{
			printf(" ");
		}
		else
		{
			bLeading = false;
			printf("%1d", pRightDigits[i]);
		}
	}
	printf("\n");

	for(size_t i = 0; i < maxDigits + 1; i++)
	{
		printf("-");
	}
	printf("\n");

	FILE* pFile = fopen("Test_Result.txt", "w");
	if(pFile)
	{
		fprintf(pFile, "TEST: OK\n");
		fclose(pFile);
	}

	return 0;
}

