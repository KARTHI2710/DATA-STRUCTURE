#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void create(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node *lastnode=head;
		while(lastnode->next!=NULL){
			lastnode=lastnode->next;
		}
		lastnode->next=newnode;
	}
}
void printnode(int *poi){
	//struct node *temp=head;
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
		*poi=*poi+1;
	}
}
int main(){
	int n,i,num,count=0;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d element\n",i);
		scanf("%d",&num);
		create(num);
	}
	printnode(&count);
	printf("\nno of nodes is %d",count);
	return 0;
	
}
