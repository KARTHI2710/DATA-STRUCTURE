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
void deletefirst(){
	struct node *temp=head;
	head=head->next;
	free(temp);
}
int main(){
	int n,num,i;
	printf("enter no of nodes \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d node element\n",i);
		scanf("%d",&num);
		create(num);
	}
	printf("before deleting first node\n");
	printnode();
	printf("\nafter deleting the first node\n");
	deletefirst();
	printnode();
	return 0;
}

