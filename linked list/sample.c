#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*a,*b,*c;
int main()
{
	int n1,n2,n3;
	//struct node *a,*b,*c;
	a=malloc(sizeof(struct node));
	b=malloc(sizeof(struct node));
	c=malloc(sizeof(struct node));
	printf("enter first,second and third node data\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	a->data=n1;
	b->data=n2;
	c->data=n3;
	//a->next=&(b->data);
	//b->next=&(c->data);
	a->next=b;
	b->next=c;
	c->next=NULL;
	struct node *temp=a;
	while(a!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
	
}
