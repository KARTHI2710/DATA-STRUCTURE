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
void insertpos(int pos,int val){
	struct node *last=head, *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	while(last->next!=head){
		last=last->next;
	}
	struct node *temp=head;
    if(pos==1){
    	newnode->next=temp;
    	last->next=newnode;
    	head=newnode;
	}
	else{
		int i;
		struct node *temp=head;
		struct node *current=temp->next;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
			current=temp->next;
		}
		temp->next=newnode;
		newnode->next=current;
	}	
}
int main(){
	int i,n,num,pos,ele;
	printf("enter no of node\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node data\n",i);
		scanf("%d",&num);
		createnode(num);
	}
	printnode();
	printf("\nenter inserted position and data\n");
	scanf("%d %d",&pos,&ele);
	insertpos(pos,ele);
	printnode();
	return 0;
}
