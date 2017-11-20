#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello scanf\n");

	printf("input your name : \n");
	char name[201];
	scanf("%200s",name);
	printf("%s\n",name);
	
	printf("input your age : \n");
	int age;
	scanf("%d",&age);
	printf("%d\n",age);
	
	printf("input your avg : \n");
	double avg;
	scanf("%lf",&avg);
	printf("%lf\n",avg);

	return 0;
}

