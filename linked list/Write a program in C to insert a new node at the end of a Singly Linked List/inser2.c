#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void lastcreate(int val){
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
void firstcreate(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	head=newnode;
}
void printnode(){
	while(head!=NULL){
		printf("%d \n",head->data);
		printf("address of data%d\n",&head->data);
		printf("address of reference %d\n",&head->next);
		head=head->next;
	}
}
int main(){
	int n,num,i,k,value;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("enter %d element\n",i);
		scanf("%d",&num);
		lastcreate(num);
	}
	printf("1.Insert another node\n2.exit\n");
	scanf("%d",&k);
	switch(k){
		case 1:
			printf("enter inserted node\n");
			scanf("%d",&value);
			lastcreate(value);
			printnode();
			break;
		case 2:
			printnode();
			break;
		default:
		    printf("enter correct key\n");
			break;		
	}
	return 0; 
}
