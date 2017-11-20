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
	printf("struct array\n");
	printf("============= \n");
	
	Contact ctt1 = {"02","aaa@aaa.com","seoul"};
	Contact ctt2 = {"031","bbb@bbb.com","pusan"};
	
	Score s1 = {99,88,77,s1.kor+s1.eng+s1.math,s1.total/3.0};
	Score s2 = {33,44,55,s2.kor+s2.eng+s2.math,s2.total/3.0};
	
	Contact cs[2] = {ctt1,ctt2};
	int i;
	for(i=0;i<2;i++){
		printf("%d : %s %s %s\n",i,cs[i].tel,cs[i].email,cs[i].addr );
	}
	
	
	Score ss[2] = {s1,s2};
	for(i=0;i<2;i++){
		printf("%d : %d %d %d %d %.2lf\n",i,
									ss[i].kor,ss[i].eng,ss[i].math,
									ss[i].total,ss[i].avg );
	}
	
	struct student st1 = {"kim",ctt1,s1};
	struct student st2 = {"yangssem",ctt2,s2};
	
	struct student sts[2] = {st1,st2};
	for(i=0;i<2;i++){
		printf("%d : %s ,%s %s %s %d %d %d %d %.2lf\n",i,
									sts[i].name,
									sts[i].ctt.tel,sts[i].ctt.email,sts[i].ctt.addr ,
									sts[i].s.kor, sts[i].s.eng, sts[i].s.math,
									sts[i].s.total, sts[i].s.avg );
	}
	
	
	
	return 0;
}

