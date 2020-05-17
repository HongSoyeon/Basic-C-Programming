/* Demonstrate string to long function.
		Written by: Soyeon Hong
		Date: 2020-05-17
*/

/*
	Function Prototypes:
		long strtol (char* str, char** ptr, int base);	//문자열을 긴 정수형으로 전환

		base 규칙
			1. 베이스는 0이나 2...35까지이다.
			2. a...z나 A...Z 문자는 10...35를 표현한다. 숫자와 알파벳 문자만이 허용된다.
			3. 베이스가 0이라면 서식은 아래의 문자열에 의해 결정된다.
				1) 숫자가 0x나 0X로 시작하면 이 숫자는 16진수이다.
				2) 첫 번째 문자가 0이고 두 번재 문자가 x나 X가 아니라면 이 숫자는 8진수이다.
				3) 첫 번째 문자가 0이 아니라면 이 숫자는 10진수이다.

		double strtod (char* str, char** ptr);			//문자열을 double형으로 전환
		double strtof (char* str, char** ptr);			//문자열을 float형으로 전환
		double strtold (char* str, char** ptr);			//문자열을 long double형으로 전환
		double strtol (char* str, char** ptr);			//문자열을 long int형으로 전환
		double strtoll (char* str, char** ptr);			//문자열을 long long int형으로 전환
		double strtoul (char* str, char** ptr);			//문자열을 unsigned long int형으로 전환
		double strtoull (char* str, char** ptr);		//문자열을 unsigned long long int형으로 전환
		*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Local Declarations
	long num;
	char* ptr;

	//Statements
	num = strtol("12345 Decimal constant: ", &ptr, 0);
	printf("%s %ld\n", ptr, num);

	num = strtol("11001 Binary constant: ", &ptr, 2);
	printf("%s %ld\n", ptr, num);

	num = strtol(" 7AbC Hex constant: ", &ptr, 16);
	printf("%s %ld\n", ptr, num);

	num = strtol("11001 Base 0-Decimal: ", &ptr, 0);
	printf("%s %ld\n", ptr, num);

	num = strtol("01101 Base 0-Octal: ", &ptr, 0);
	printf("%s %ld\n", ptr, num);

	num = strtol("0x7AbC Base 0-Hex: ", &ptr, 0);
	printf("%s %ld\n", ptr, num);

	num = strtol("Invalid input: ", &ptr, 0);
	printf("%s %ld\n", ptr, num);

	return 0;
}	//main



/*
	Result:
		 Decimal constant:  12345
		 Binary constant:  25
		 Hex constant:  31420
		 Base 0-Decimal:  11001
		 Base 0-Octal:  577
		 Base 0-Hex:  31420
		 Invalid input:  0
*/
