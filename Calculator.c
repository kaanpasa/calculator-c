#include <stdio.h>
int main()
{
	int number1;
	int number2;
	char sign;
	int total;
	
	printf("Enter Calculation : ");
	scanf("%d %c %d", &number1, &sign, &number2);
	if(sign == '+')
		{
			total = number1 + number2;
			printf("%d %c %d = %d", number1, sign, number2, total);
		}
	else if(sign == '-')
		{
			total = number1 - number2;
			printf("%d %c %d = %d", number1, sign, number2, total);
		}
	else if(sign == '*')
		{
			total = number1 * number2;
			printf("%d %c %d = %d", number1, sign, number2, total);
		}
	else if(sign == '/')
		{
			total = number1 / number2;
			printf("%d %c %d = %d", number1, sign, number2, total);
		}
	else
		{
			printf("Wrong input.");
		}
return 0;
}
