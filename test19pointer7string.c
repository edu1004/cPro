#include <stdio.h>


int main(int argc, char **argv)
{
	printf("hello pointer string\n");
	
	char str[] = "yangssem";
	printf("%s\n",str);
	printf("%p\n",str);
	printf("%p\n",&str[0]);
	
	printf("==============\n");
	
	char strs[3][10] = {"kim","lee","yangssem"};
	printf("%p\n",strs);
	printf("%p\n",&strs[0]);
	printf("%p\n",&strs[0][0]);
	
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",&strs[i][0]);
	}
	
	printf("==============\n");
	char *pt_str[3];
	pt_str[0] = &strs[0][0];
	pt_str[1] = &strs[1][0];
	pt_str[2] = &strs[2][0];
	
	
	for(i=0;i<3;i++){
		printf("%s\n",pt_str[i]);
	}
	
	return 0;
}
