#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("hello strcpy\n");
	
	char str[10] = "KIM";//{'K','I','M'}
	
	printf("%p\n",str);
	printf("%s\n",str);
	printf("%d\n",(int )str);
	
	//str = "yangssem";
	strcpy(str,"yangssem");
	printf("%p\n",str);
	printf("%s\n",str);
	printf("%d\n",(int )str);
	return 0;
}

