#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("hello strcpy\n");
	
	char str[10] = "KIM";//{'K','I','M'}
	
	puts(str);
	puts(str);
	
	fputs(str,stdout);
	fputs(str,stdout);
	fputs("\n",stdout);
	printf("\n");	
	
	
	
	return 0;
}

