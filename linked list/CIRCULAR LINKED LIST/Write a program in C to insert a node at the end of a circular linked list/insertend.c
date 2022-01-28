#include<stdio.h>
#include<stdlib.h>
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
void printnode(){
	struct node *temp=head;
	do{
	    printf("%d ",temp->data);
		temp=temp->next;	
	}while(temp!=head);
}
int main(){
	int i,n,num;
	printf("enter no of node\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printnode();
	return 0;
}
