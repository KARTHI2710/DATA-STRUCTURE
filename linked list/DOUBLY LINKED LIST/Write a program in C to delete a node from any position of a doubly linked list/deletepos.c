#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
}*head,*tail;
int count=0;
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
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		count++;
	}
}
void deletepos(int pos){
	int i;
	if(pos==1){
		struct node *temp=head;
		head=temp->next;
		free(temp);
	}
	else if(count==pos){
		struct node *temp=tail;
		tail=tail->prev;
		tail->next=NULL;
		free(temp);
	}
	else{
		struct node *lastnode,*nextnode;
		struct node *temp=head;
	for(i=1;i<pos;i++){
		lastnode=temp;
		temp=temp->next;
		nextnode=temp->next;
	}
	lastnode->next=temp->next;
	nextnode->prev=temp->prev;
	free(temp);
}
}
int main(){
	int i,n,num,pos;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printf("enter deleting node position\n");;
	scanf("%d",&pos);
	printf("before deleteting the node\n");
	printnode();
	printf("\nafter deleting the node\n");
	deletepos(pos);
	printnode();
	return 0;
}
