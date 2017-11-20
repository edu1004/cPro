#include <stdio.h>
typedef struct contact{
	char *tel,*email,*addr;
} Contact;

typedef struct score{
	int kor;
	int eng;
	int math;
	int total;
	double avg;
}Score;

struct student{
		char *name;	
		//struct contact ctt;
		//struct score s;
		Contact ctt;
		Score s;
};

int main(int argc, char **argv){
	printf("struct inner\n");
	printf("============= \n");
	
	struct student std = {"KIM",
		{"010","aaa@aaa.com","seoul"},
		{99,88,77,std.s.kor+std.s.eng+std.s.math,std.s.total/3.0}};
	printf("%s\n",std.name);
	printf("%s %s %s\n",std.ctt.tel, std.ctt.email, std.ctt.addr);
	printf("%5d%5d%5d%5d%7.2lf\n",
					std.s.kor, std.s.eng, std.s.math, std.s.total,std.s.avg);
	
	return 0;
}

