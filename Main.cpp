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

	FILE* pFile = fopen("Test_Result.xml", "w");
	if(pFile)
	{
		fprintf(pFile, "<testsuites>\n");
		fprintf(pFile, "<testsuite name=\"c5.Foo\" tests=\"4\">\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo1\" name=\"ASuccessfulTest\"/>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo2\" name=\"AnotherSuccessfulTest\"/>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo3\" name=\"AFailingTest\">\n");
		fprintf(pFile, "        <failure type=\"NotEnoughFoo\"> details about failure </failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo4\" name=\"MoreFailingTest\">\n");
		fprintf(pFile, "        <failure type=\"Typo\"> This fails also, what a mess </failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "</testsuite>\n");
		fprintf(pFile, "<testsuite name=\"c5.Bar\" tests=\"4\">\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo1\" name=\"ASuccessfulTest\"/>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo2\" name=\"AnotherSuccessfulTest\"/>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo3\" name=\"AFailingTest\">\n");
		fprintf(pFile, "        <failure type=\"NotEnoughFoo\"> details about failure </failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "    <testcase classname=\"c5.foo4\" name=\"MoreFailingTest\">\n");
		fprintf(pFile, "        <failure type=\"Typo\"> This fails also, what a mess </failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "</testsuite>\n");
		fprintf(pFile, "</testsuites>\n");
		fclose(pFile);
	}



	return 0;
}

