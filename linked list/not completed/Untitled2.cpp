#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}head;
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
void reversenode(){
	struct node *temp=head;
	struct node *lastnode=NULL;
	struct node *nextnode,*currentnode;
	while(temp->next!=NULL){
		
	}
}