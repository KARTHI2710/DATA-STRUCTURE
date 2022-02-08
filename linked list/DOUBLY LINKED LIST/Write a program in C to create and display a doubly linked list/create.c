#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
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
		newnode->prev=lastnode;
		newnode->next=NULL;
	}
}
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("address of head = %p\n",&temp);
		printf(" simple temp=%p\n",temp);
		printf("*temp =%p\n",*temp);
		printf("address of prev = %p\n",&temp->prev);
		//printf("%d \n",head->data);
		printf("address of key = %p\n",&temp->data);
		printf("address of next = %p\n",&temp->next);
		temp=temp->next;
	}
}
int main(){
	int i,n,ele;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&ele);
		createnode(ele);
	}
	printnode();
	return 0;
}
