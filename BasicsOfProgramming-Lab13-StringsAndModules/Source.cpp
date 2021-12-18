#include <stdio.h>
#include "gamma.h"

#define MAX_SYMBOLS 256

int main()
{
	int choice = 0;
	int loop = 1;
	while (loop)
	{
		printf("\n-----------------------------\n");
		printf("Choose what you want the program to do\n");
		printf("	1. gstrlen\n");
		printf("	2. gstrcpy\n");
		printf("	3. gstrcat\n");
		printf("	4. gstrcpm\n");
		printf("	5. gstrchr\n");
		printf("	6. gstrstr\n");
		printf("	7. Quit the program\n");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
		{
			char str1[MAX_SYMBOLS];
			printf("Enter string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf_s("Symbols count:%d\n", gstrlen(str1));
			break;
		}
		case 2:
		{
			char str1[MAX_SYMBOLS];
			char str2[MAX_SYMBOLS];
			printf("Enter first string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf("Enter second string:");
			scanf_s(" %[^\t\n]s", str2, MAX_SYMBOLS);
			printf_s("Result:%s\n", gstrcpy(str1, str2));
			break;
		}
		case 3:
		{
			char str1[MAX_SYMBOLS];
			char str2[MAX_SYMBOLS];
			printf("Enter first string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf("Enter second string:");
			scanf_s(" %[^\t\n]s", str2, MAX_SYMBOLS);
			printf_s("Result:%s\n", gstrcat(str1, str2));
			break;
		}
		case 4:
		{
			char str1[MAX_SYMBOLS];
			char str2[MAX_SYMBOLS];
			printf("Enter first string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf("Enter second string:");
			scanf_s(" %[^\t\n]s", str2, MAX_SYMBOLS);
			printf_s("Result:%d\n", gstrcmp(str1, str2));
			break;
		}
		case 5:
		{
			char str1[MAX_SYMBOLS];
			int symbol = 0;
			printf("Enter string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf("Enter char:");
			scanf_s(" %c", (char*)&symbol, MAX_SYMBOLS);
			printf_s("The first occurence of symbol is placed at %d\n", gstrlen(str1) - gstrlen(gstrchr(str1, symbol)) + 1);
			break;
		}
		case 6:
		{
			char str1[MAX_SYMBOLS];
			char str2[MAX_SYMBOLS];
			printf("Enter first string:");
			scanf_s(" %[^\t\n]s", str1, MAX_SYMBOLS);
			printf("Enter second string:");
			scanf_s(" %[^\t\n]s", str2, MAX_SYMBOLS);
			int strlen1 = gstrlen(str1);
			int strlen2 = gstrlen(gstrstr(str1, str2));
			printf_s("The first occurence of second string is placed at %d\n", strlen1 - strlen2 + 1);
			break;
		}
		case 7:
		{
			loop = 0;
			break;
		}
	}
	}
	return 0;
}