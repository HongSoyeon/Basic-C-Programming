/* Parse a simple algebraic expression.
		Written by: Soyeon Hong
		Date: 2020-05-17
*/

/*
	Function Prototypes:
		char* strtok (char* str, const char* delimiters);

	Program11-14 Descriptions:
		strtok�� ó�� ȣ���� ���� ���ڿ��� �ּҸ� �Ѱ��ֹǷ� ������ �տ� �ξ���.
		���ڿ��� �ּ��� �ϳ��� ��ū�̶� ������ �ִٸ�, ù ��° ȣ�⿡�� Ÿ���� �ּҰ� ��ȯ�� ���̴�.
		while �������� �̰��� ����� ��, ���� ��ū���� ���� �м��Ѵ�.
		������ ��Ʈ���� �����ݷа� ������ ���ԵǾ� �ִ�.
		�����ݷ��� ���ڿ��� ������ ��ū���� ���ȴ�.
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main(void)
{
	//Local Declarations
	char string[16] = "sum = sum + 10;";
	char* pToken;
	int tokenCount;

	//Statements
	tokenCount = 0;
	pToken = strtok(string, " ;");

	while (pToken)
	{
		tokenCount++;
		printf("Token %2d contains %s\n", tokenCount, pToken);
		pToken = strtok(NULL, " ;");
	}	//while

	printf("\nEnd of tokens\n");
	return 0;
}	//main