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
void deletemid(int pos){
	if(pos==1){
		struct node *temp=head,*last=head;
		while(last->next!=head){
			last=last->next;
		}
		head=temp->next;
		last->next=head;
		free(temp);
	}
	else{
		int i;
		struct node*temp=head,*last=temp->next;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
			last=temp->next;
		}
		temp->next=last->next;
		free(last);
	}
}
int main(){
	int i,n,num,pos;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printf("before deleting the node \n");
	printnode();
    printf("\nenter the postion of the node for deleting\n");
    scanf("%d",&pos);
	printf("\nafter deleting the node\n");
	deletemid(pos);
	printnode();
	return 0;
}
