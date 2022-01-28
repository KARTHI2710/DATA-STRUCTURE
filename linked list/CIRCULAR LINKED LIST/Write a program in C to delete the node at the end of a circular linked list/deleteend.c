#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*head;
void createnode(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=newnode;
		head=newnode;
	}
	else{
		struct node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
}
void deleteend(){
	struct node *temp=head;
	struct node *last=temp->next;
	while(last->next!=head){
		temp=temp->next;
		last=temp->next;
	}
	temp->next=head;
	free(last);
}
void printnode(){
	struct node *temp=head;
	do{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
int main(){
	int i,n,num;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printf("before deleting the node \n");
	printnode();
	printf("\nafter deleting the node\n");
	deleteend();
	printnode();
}
