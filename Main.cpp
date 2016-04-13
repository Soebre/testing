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
		fprintf(pFile, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
		fprintf(pFile, "<testsuites>\n");
		fprintf(pFile, "  <testsuite name=\"generic.TestRsasp1\" time=\"0.000\" tests=\"1\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestRsasp1\" classname=\"generic/gncrypt.TestRsasp1\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"generic.TestRsavp1\" time=\"0.000\" tests=\"1\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestPublicKeySignature\" classname=\"generic/gncrypt.TestRsavp1\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"generic.TestSha2\" time=\"0.000\" tests=\"3\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestSingle\" classname=\"generic/gncrypt.TestSha2\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestSha2\" classname=\"generic/gncrypt.TestSha2\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestSha2VsSha256\" classname=\"generic/gncrypt.TestSha2\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"generic.TestVerifyCertificate\" time=\"0.000\" tests=\"5\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestByteswap\" classname=\"generic/gncrypt.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestByteswap16\" classname=\"generic/gncrypt.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestMontgomeryMultCore\" classname=\"generic/gncrypt.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestRsaOnCertificate\" classname=\"generic/gncrypt.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestVerifyCertificate\" classname=\"generic/gncrypt.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"generic.TestPuff\" time=\"0.000\" tests=\"4\" failures=\"1\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestDeflateInflate\" classname=\"generic/puff.TestPuff\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestPuff\" classname=\"generic/puff.TestPuff\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestPuffVector\" classname=\"generic/puff.TestPuff\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestPuffErrors\" classname=\"generic/puff.TestPuff\" time=\"0.000\">\n");
		fprintf(pFile, "      <failure><![CDATA[false\n");
		fprintf(pFile, "      ../src/testpuff.c:510: error: Failure!\n");
		fprintf(pFile, "      ]]></failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"c5.TestRsavp1\" time=\"0.000\" tests=\"1\" failures=\"1\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestPublicKeySignature\" classname=\"c5.TestRsavp1\" time=\"0.000\" >\n");
		fprintf(pFile, "      <failure message=\"false\" type=\"Assertion failed\">../src/testrsavp1.c:70</failure>\n");
		fprintf(pFile, "    </testcase>\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"c5.TestSha2\" time=\"0.000\" tests=\"2\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestSingle\" classname=\"c5.TestSha2\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestSha2\" classname=\"c5.TestSha2\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"c5.TestVerifyCertificate\" time=\"0.000\" tests=\"5\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestByteswap\" classname=\"c5.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestByteswap16\" classname=\"c5.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestMontgomeryMultCore\" classname=\"c5.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestRsaOnCertificate\" classname=\"c5.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestVerifyCertificate\" classname=\"c5.TestVerifyCertificate\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"c5.TestSetJmp\" time=\"0.000\" tests=\"1\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestSetJmp\" classname=\"c5.TestSetJmp\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "  <testsuite name=\"c5.TestPuff\" time=\"0.000\" tests=\"2\" failures=\"0\" errors=\"0\" skipped=\"0\">\n");
		fprintf(pFile, "    <testcase name=\"TestPuffVector\" classname=\"c5.TestPuff\" time=\"0.000\" />\n");
		fprintf(pFile, "    <testcase name=\"TestPuffErrors\" classname=\"c5.TestPuff\" time=\"0.000\" />\n");
		fprintf(pFile, "  </testsuite>\n");
		fprintf(pFile, "</testsuites>\n");
		fclose(pFile);
	}



	return 0;
}

