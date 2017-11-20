#include <stdio.h>
#include <string.h>
struct Test{
	int x;
	double d;
	char name[10];
	char *pt_name;	
};

struct Test2{
	int x;
	double d;
};

struct Test3{
	int x;
	double d;
} t3;

int main(int argc, char **argv){
	
	
	printf("struct\n");
	printf("============= \n");
	
	//int a;//4byte
	//double b;//8byte
	//char c;//1byte >> 2byte
	//short d; //2byte
	//int *p;//4byte
	//int arr[10];//10byte
	//char names[10]//10byte
	//int **p2;//4byte
	struct Test t;//26byte //padding 6byte not
	t.x = 100;
	t.d = 3.14;
	//t.name = "yangssem";
	strcpy(t.name,"yangssem");
	t.pt_name = "kim";
	
	printf("%d\n",t.x);
	printf("%lf\n",t.d);
	printf("%s\n",t.name);
	printf("%s\n",t.pt_name);
	printf("%d byte\n",sizeof(t));
	printf("%d byte\n",sizeof(t.x));
	printf("%d byte\n",sizeof(t.d));
	printf("%d byte\n",sizeof(t.name));
	printf("%d byte\n",sizeof(t.pt_name));
	printf("============= \n");
	
	struct Test2 t2;
	t2.x = 33;
	t2.d = 3.14;
	printf("%d\n",t2.x);
	printf("%lf\n",t2.d);
	
	t3.x = 44;
	t3.d = 99.99;
	printf("%d\n",t3.x);
	printf("%lf\n",t3.d);
	return 0;
}
