#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("hello pointer array\n");
	
	char c = 'C';
	printf("%c \n",c);
	
	char cs[] = {'A','B','C','\0'};
	
	int i;
	for(i=0;i<4;i++){
		printf("%c\n",cs[i]);
	}
	
	printf("%s\n",&cs[0]);
	
	char *pt_cs;
	pt_cs = cs;
	printf("%c\n",*(pt_cs+0));
	printf("%c\n",*(pt_cs+1));
	printf("%c\n",*(pt_cs+2));
	printf("%c\n",*(pt_cs+3));
	
	*(pt_cs+0) = 'T';
	printf("%c\n",*(pt_cs+0));
	printf("%c\n",cs[0]);
	
	char *pt_str = "ABC";
	printf("%s\n",pt_str);
	
	pt_str = "yangssem";
	printf("%s\n",pt_str);
	
	char str[] = "XYZ";
	printf("%s\n",str);
	
	
	//strcpy(pt_str,"bbbbbbbbbbbbb");
	//printf("%s\n",pt_str);
	strcpy(str,"aaaaaaaaaaaaaaa");
	printf("%s\n",str);
	
	
	
	return 0;
}

