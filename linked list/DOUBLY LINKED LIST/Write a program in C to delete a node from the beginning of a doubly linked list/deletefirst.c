#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
}*head;
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
	}
}
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void deletefirst(){
	struct node *temp=head;
	head=head->next;
	head->prev=NULL;
	free(temp);
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
	printf("before deleteting the node\n");
	printnode();
	printf("\nafter deleting the node\n");
	deletefirst();
	printnode();
	return 0;
}
