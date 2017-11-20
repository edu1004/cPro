#include <stdio.h>
#include <time.h>
struct Student{
	char *pt_name;
	int kor;
	int eng;
	int math;
	int total;
	double avg;
};

typedef struct Member{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
	time_t time;
	
} MEM;
int main(int argc, char **argv){
	
	
	printf("struct\n");
	printf("============= \n");
	
	struct Student st;
	//typedef struct Student STD;
	//STD stddd;
	
	st.pt_name = "KIM";
	st.kor = 99;
	st.eng = 88;
	st.math = 77;
	st.total = st.kor + st.eng + st.math;
	st.avg = st.total/3.0;
	printf("%s\n",st.pt_name);
	printf("%d\n",st.kor);
	printf("%d\n",st.eng);
	printf("%d\n",st.math);
	printf("%d\n",st.total);
	printf("%.2lf\n",st.avg);
	printf("============= \n");
	
	struct Student st2 = {"yangssem",
		11,22,33,
		st2.kor+st2.eng+st2.math,
		st2.total/3.0};
	printf("%s\n",st2.pt_name);
	printf("%d\n",st2.kor);
	printf("%d\n",st2.eng);
	printf("%d\n",st2.math);
	printf("%d\n",st2.total);
	printf("%.2lf\n",st2.avg);
	
	//int x,y,z;
	//struct Student st3,st4,st5;
	
	//MEM.num = 99;
	//printf("%d\n",MEM.num);
	
	//struct Member m1,m2,m3;
	MEM m1,m2,m3;
	m1.num = 88;
	m2.num = 77;
	m3.num = 66;
	printf("%d\n",m1.num);
	printf("%d\n",m2.num);
	printf("%d\n",m3.num);
	printf("============= \n");
	
	struct tm *pt_time;
	//m1.time = time(NULL);
	time(&m1.time);
	pt_time = localtime(&m1.time);
	printf("%ld\n",m1.time);
	printf("%ld\n",pt_time);
	printf("%s\n",asctime(pt_time));
	
	return 0;
}
