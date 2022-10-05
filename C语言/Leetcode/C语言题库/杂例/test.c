#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

int main()
{
	char arr1[10] = { 'a','b','c','\0' };
	char arr2[10] = "abc\0";
	char arr3[10] = "abc";
	

	char arr4[] = "\n";
	int len = strlen(arr4);
	printf("\\n");
	return 0;
}
