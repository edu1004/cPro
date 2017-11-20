#include <stdio.h>
struct Test{
	int num;
	double avg;
};

union Score{
	int num;
	double avg;
};

int main(int argc, char **argv){
	printf("struct & union\n");
	printf("============= \n");
	
	struct Test t = {99,33.33};
	printf("%d\n",sizeof(t));
	
	union Score s1 = {88};
	printf("%d\n",sizeof(s1));
	printf("%d %lf\n", s1.num, s1.avg);
	s1.avg = 33.33;
	printf("%d %lf\n", s1.num, s1.avg);
	
	union Score s2 = {.avg=22.22};
	printf("%d %lf\n", s2.num, s2.avg);
	
	//struct Test t2 = {.avg=3.14};//error
	
	return 0;
}



