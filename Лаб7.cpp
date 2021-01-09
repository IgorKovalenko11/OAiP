#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define False 0
#define True 1

void inoutstring(char[], int);				
int  identremove(char[], char[], int n);		
int main()
{
	srand(time(NULL));

	char* string1, * string2;
	int n;

	rewind(stdin);

	printf_s("Input size of the string: \n");
	scanf_s("%d", &n);

	if (!(string1 = (char*)calloc(n, sizeof(char))) || !(string2 = (char*)calloc(n, sizeof(char))))			
	{
		printf_s("Not enough memory. Restar the program!\n");
		return 0;
	}

	printf_s("Firs string: ");

	inoutstring(string1, n);

	printf_s("Second string: ");

	inoutstring(string2, n);

	identremove(string1, string2, n);

	putchar('\n');

	system("pause");

	return 0;
}

void inoutstring(char string[], int n)
{
	for (int i = 0; i < n; i++)									
		string[i] = ('a' + rand() % ('z' - 'a'));

	for (int i = 0; i < n; i++)									
		printf_s("%c", string[i]);

	putchar('\n');

}

int identremove(char s1[], char s2[], int n)
{
	int i, j, k, flag = False;


	for (k = 0; s2[k] != '\0' && k < n; k++) {
		for (i = j = 0; s1[i] != '\0' && i < n && j < n; i++)
		{
			if (s1[i] != s2[k])
			{
				s1[j++] = s1[i];
				flag = True;
			}
		}
		s1[j] = '\0';
	}

	if (flag == False)
	{
		printf_s("Nothing changed\n");
		return False;
	}

	printf_s("\nEdited string: ");
	for (k = 0; k < n; k++)
		printf_s("%c", s1[k]);

	return False;
}
