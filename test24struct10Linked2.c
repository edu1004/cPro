#include <stdio.h>


struct list{
	int num;
	struct list *next;
};


int main(int argc, char **argv){
	printf("struct linked\n");
	printf("============= \n");
	
	struct list a={10},b={20},c={30},d={40};
	
	printf("&a %p\n",&a);
	printf("&b %p\n",&b);
	printf("&c %p\n",&c);
	printf("&d %p\n",&d);
	
	printf("a.num %d\n",a.num);
	printf("b.num %d\n",b.num);
	printf("c.num %d\n",c.num);
	printf("d.num %d\n",d.num);
	printf("============= \n");
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	
	printf("a.next %p\n",a.next);
	printf("b.next %p\n",b.next);
	printf("c.next %p\n",c.next);
	
	printf("a.next->num %d\n",a.next -> num);
	
	printf("a.next -> next %p\n",a.next ->next);
	printf("a.next-> next -> num %d\n",a.next -> next -> num);
	
	printf("b.next->num %d\n",b.next -> num);
	printf("b.next -> next %p\n",b.next ->next);
	printf("b.next-> next -> num %d\n",b.next -> next -> num);
	
	printf("============= \n");
	struct list *pt_first_list = &a;
	//struct list *pt_head = &a;
	while(pt_first_list != NULL){
		printf("%d %p\n",pt_first_list -> num, pt_first_list);
		pt_first_list = pt_first_list -> next;
	}
	
	return 0;
}



