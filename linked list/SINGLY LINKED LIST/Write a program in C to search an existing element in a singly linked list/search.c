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
void printnode(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void search(int key){
	int i=0;
	struct node *temp=head;
	while(temp->next!=NULL){
		i=i+1;
		if(temp->data==key){
			printf("element found in %d node",i);
			exit(0);
		}
		temp=temp->next;
	}
	printf("element not found\n");
}
int main(){
	int i,n,num,k;
	printf("enter no of nodes \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		create(num);
	}
	printf("enter search key\n");
	scanf("%d",&k);
	search(k);
	return 0;
}
