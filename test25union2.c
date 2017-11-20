#include <stdio.h>
typedef union names{
	char a_name[10];
	char b_name[12];
	char c_name[14];//8*2
	char c_name2[16];//8*2
	char c_name3[18];//8*3
	double d_name;
	
} U_names;
typedef struct aaa{
	char a_name[10];
	char b_name[12];
	char c_name[14];
	int d_name;
	
} Aaa;

int main(int argc, char **argv){
	printf("struct & union\n");
	printf("============= \n");
	
	U_names un;
	printf("un : %d\n", sizeof(un));
	
	Aaa a;
	printf("a : %d\n", sizeof(a));
	
	return 0;
}



