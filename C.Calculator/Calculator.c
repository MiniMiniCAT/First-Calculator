#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	int a, b, c;

	while(1)
	{
		printf("\n������ �Է��ϼ���.\n");
		printf("(�������� 0+0�� �Է��ϼ���)\n");
		scanf("%d %c %d", &a, &op, &b);

		if(a==0 && op == '+' && b == 0) break;

		else if (op == '+') { c = a+b; printf("%d", c); }
		else if (op == '-') { c = a-b; printf("%d", c); } 
		else if (op == '*') { c = a*b; printf("%d", c); }
		else if (op == '/')
		{ if ( b == 0)
			printf("0���� ���� �� �����ϴ�!");
		  else
			{ c = a/b; printf("%d", c); }
		}
		else printf("\n�߸��Է��ϼ̽��ϴ�.");

	}
	return 0;
}

