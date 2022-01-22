#include<stdio.h>
#include<stdlib.h>
struct node{
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
void deleteele(int ele){
	struct node *temp=head;
	struct node *lastnode;
	if(temp->data==ele){
		head=temp->next;
		free(temp);
    }
    else{
	while(temp!=NULL){
	if(temp->data==ele){
		lastnode->next=temp->next;
		free(temp);
		break;
	}
	else{
		lastnode=temp;
		temp=temp->next;
	}
}
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
	int i,n,num,value;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		create(num);
	}
	printf("enter delete node value\n");
	scanf("%d",&value);
	deleteele(value);
	printnode();
	return 0;
}
