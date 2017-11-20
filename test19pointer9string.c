#include <stdio.h>
void printString(char *pt_str[3]);
void printString2(char strs[3][11]);
int main(int argc, char **argv)
{
	printf("hello pointer string\n");
	
	char *pt_str[3] = {"kim","lee","yangssem"};
	char strs[3][11] = {"kim2","lee2","yangssem2"};
	
	printString(pt_str);
	printString2(strs);
	
	printf("====================\n");

	char subject[10] = "kor";
	printf("%s\n",subject);
	
	char *pt_subject = "eng";
	printf("%s\n",pt_subject);
	
	return 0;
}

void printString(char *pt_str[3]){
	//printf("sizeof(pt_str) : %d\n",sizeof(pt_str));
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",pt_str[i]);
	}
}
void printString2(char strs[3][11]){
	//printf("sizeof(strs) : %d\n",sizeof(strs));
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",&strs[i][0]);
	}
}
