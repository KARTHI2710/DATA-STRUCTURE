#include<stdio.h>
#include<stdlib.h>
struct node {
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
void insertnode(int pos,int val){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(pos==1){
    	struct node *temp=head;
    	newnode->next=temp;
    	temp->prev=newnode;
    	head=newnode;
	}
	else{
		int i;
		struct node *temp=head;
		struct node *lastnode=temp->next;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
			lastnode=temp->next;
		}
		newnode->next=lastnode;
		newnode->prev=temp;
		temp->next=newnode;
		lastnode->prev=newnode->next;
	}
}
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int i,n,num,pos,ele;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printf("before inserting the node\n");
	printnode();
	printf("\nenter new inserted node data and position\n");
	scanf("%d %d",&ele,&pos);
	insertnode(pos,ele);
	printf("\nafter inserting the node\n");
	printnode();
	return 0;
}
