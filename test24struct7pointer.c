#include <stdio.h>
typedef struct member{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
	
} Member;

void test(Member m);
void test2(Member *pt_m);

int main(int argc, char **argv){
	printf("struct pointer\n");
	printf("============= \n");
	
	//int a = 10;
	//int *pt_a = &a;
	
	Member m, *pt_m;
	pt_m = &m;
	
	m.num = 1;
	m.id = "admin";
	m.pw = "hi123456";
	m.name = "kim";
	m.tel = "010";
	
	printf("%d %s %s %s %s\n",m.num,m.id,m.pw,m.name,m.tel);
	printf("============= \n");
	
	(*pt_m).num = 9;
	(*pt_m).id = "admin2";
	(*pt_m).pw = "hi1234562";
	(*pt_m).name = "kim2";
	(*pt_m).tel = "0102";
	printf("%d %s %s %s %s\n",(*pt_m).num,(*pt_m).id,(*pt_m).pw,(*pt_m).name,(*pt_m).tel);
	printf("============= \n");
	
	pt_m -> num = 3;
	pt_m -> id = "admin3";
	pt_m -> pw = "hi1234563";
	pt_m -> name = "kim3";
	pt_m -> tel = "0103";
	printf("%d %s %s %s %s\n",pt_m -> num,pt_m -> id,pt_m -> pw,pt_m -> name,pt_m -> tel);
	
	printf("============= \n");
	printf("sizeof(m) : %d\n",sizeof(m));

	printf("============= \n");
	printf("sizeof(pt_m) : %d\n",sizeof(pt_m));
		
	test(m);
	test2(&m);
	
	return 0;
}

void test(Member m){
	printf("test============= \n");
	printf("%d %s %s %s %s\n",m.num,m.id,m.pw,m.name,m.tel);
}
void test2(Member *pt_m){
	printf("test2============= \n");
	printf("%d %s %s %s %s\n",
		(*pt_m).num,(*pt_m).id,(*pt_m).pw,(*pt_m).name,(*pt_m).tel);
	printf("%d %s %s %s %s\n",
		pt_m -> num,pt_m -> id,pt_m -> pw,pt_m -> name,pt_m -> tel);
}


