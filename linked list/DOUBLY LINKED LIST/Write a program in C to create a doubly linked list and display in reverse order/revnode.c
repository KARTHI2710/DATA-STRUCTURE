#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head,*tail;
void createnode(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node *lastnode=head;
		while(lastnode->next!=NULL){
			lastnode=lastnode->next;
		}
		lastnode->next=newnode;
		newnode->next=NULL;
		newnode->prev=lastnode;
		tail=newnode;
	}
}
void printnoderev(){
	while(tail!=NULL){
		printf("%d ",tail->data);
		tail=tail->prev;
	}
}
int main(){
	int i,n,num;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printnoderev();
	return 0;
}
