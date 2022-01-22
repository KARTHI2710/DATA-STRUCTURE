#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
}*head;
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
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void middelete(int pos){
	int i;
	struct node *pre;
	struct node *temp=head;
	for(i=1;i<pos;i++){
		pre=temp;
		temp=temp->next;
	}
	pre->next=temp->next;
	free(temp);
}
int main(){
	int n,num,i,pos;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		create(num);
	}
	printf("before deleting the node\n");
	printnode();
	printf("enter the pos of deleting node\n");
	scanf("%d",&pos);
	middelete(pos);
	printf("\nafter deleting the node\n");
    printnode();
    return 0;
	
}
