#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int a, b, c;

	while(1)
	{
		printf("\n계산식을 입력하세요.\n");
		printf("(끝내려면 0+0을 입력하세요)\n");
		scanf("%d %c %d", &a, &op, &b);

		if(a==0 && op == '+' && b == 0) break;

		else if (op == '+') { c = a+b; printf("%d", c); }
		else if (op == '-') { c = a-b; printf("%d", c); } 
		else if (op == '*') { c = a*b; printf("%d", c); }
		else if (op == '/')
		{ if ( b == 0)
			printf("0으로 나눌 수 없습니다!");
		  else
			{ c = a/b; printf("%d", c); }
		}
		else printf("\n잘못입력하셨습니다.");

	}
	return 0;
}

