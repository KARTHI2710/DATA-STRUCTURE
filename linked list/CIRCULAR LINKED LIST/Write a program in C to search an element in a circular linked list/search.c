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
void search(int val){
	struct node *temp=head;
	int i=0;
	do{
		i++;
		if(temp->data==val){
			printf("your searched node pos is %d\n",i);
			return;
		}
		temp=temp->next;
	}while(temp!=head);
	printf("key not found\n");
}
int main(){
	int i,n,num,s;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		createnode(num);
}
	printf("enter your search key\n");
	scanf("%d",&s);
	search(s);
	return 0;
}
