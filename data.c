#include<stdio.h>
struct self
{
	int a;
	char c;
	struct self *p;
};
int main()
{
	struct self v;
	v.a=3;
	v.c='a';
	v.p=NULL;
	struct self x;
	x.a=20;
	x.c='s';
	x.p=NULL;
	v.p=&x;
	printf("BLOCK-1 %d %c",v.a,v.c);
	printf("\nBLOCK-2 %d %c",v.p->a,v.p->c);
}
