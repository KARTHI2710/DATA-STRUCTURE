#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
}*head;
void createbegin(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	if(head==NULL){
		newnode->next=NULL;
		newnode->prev=NULL;
	}
	else{
		newnode->prev=NULL;
		newnode->next=head;
	}
	head=newnode;
}
void printnode(){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
int main(){
	int i,n,num;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createbegin(num);
	}
	printnode();
	return 0;
}
