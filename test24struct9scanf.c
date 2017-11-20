#include <stdio.h>
#include <stdlib.h>


struct score{
	char *name;
	int kor;
	int eng;
};

int main(int argc, char **argv){
	printf("struct scanf\n");
	printf("============= \n");
	
	struct score s;
	struct score *pt_s;
	pt_s = &s;
	//pt_s -> kor = 99;
	
	
	s.name = (char *)malloc(20);
	scanf("%s",pt_s -> name);
	printf("%s\n", pt_s -> name);
	
	scanf("%d",&pt_s -> kor);
	printf("%d\n", pt_s -> kor);
	
	int a = 22;
	scanf("%d",&a);
	printf("%d\n",a);
	
	
	
	return 0;
}



