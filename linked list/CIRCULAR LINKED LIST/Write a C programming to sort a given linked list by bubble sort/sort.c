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
void bubblesort(){
	struct node *temp=head;
	int change;
	while(temp->next!=head){
		struct node *current=temp->next;
		while(current!=head){
			if(temp->data>current->data){
				change=temp->data;
				temp->data=current->data;
				current->data=change;
			}
			current=current->next;
		}
		temp=temp->next;
	}
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
	printf("before sorted node\n");
	printnode();
	printf("\nafter sorted node\n");
	bubblesort();
	printnode();
	return 0;
}
