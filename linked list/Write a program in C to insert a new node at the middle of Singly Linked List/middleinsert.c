#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
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
	while(head!=NULL){
	    printf("%d ",head->data);
		head=head->next;	
	}
}
void middleinsert(int val,int pos)
{
	int i;
	struct node *temp=head;
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	for(i=1;i<pos-1;i++){
		temp=temp->next;	
	}.
	newnode->next=temp->next;
	temp->next=newnode;	
}
int main(){
	int n,i,num,num1,pos;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d elements\n",i);
		scanf("%d",&num);
		create(num);
	}
	printf("enter new node inserted data\n");
	scanf("%d",&num1);
	printf("enter position of new node\n");
	scanf("%d",&pos);
	middleinsert(num1,pos);
	printnode();
	return 0;
}
