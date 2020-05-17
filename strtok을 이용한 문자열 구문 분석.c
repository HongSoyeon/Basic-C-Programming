/* Parse a simple algebraic expression.
		Written by: Soyeon Hong
		Date: 2020-05-17
*/

/*
	Function Prototypes:
		char* strtok (char* str, const char* delimiters);

	Program11-14 Descriptions:
		strtok를 처음 호출할 때는 문자열의 주소를 넘겨주므로 루프의 앞에 두었다.
		문자열이 최소한 하나의 토큰이라도 가지고 있다면, 첫 번째 호출에서 타당한 주소가 반환될 것이다.
		while 루프에서 이것을 출력한 후, 남은 토큰들을 구문 분석한다.
		구분자 세트에는 세미콜론과 공백이 포함되어 있다.
		세미콜론은 문자열의 마지막 토큰으로 사용된다.
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