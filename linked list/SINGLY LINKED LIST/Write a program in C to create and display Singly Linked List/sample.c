#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct data *next;
};
struct node *head;
void addlast(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		struct node *lastnode=head;
		while(lastnode->next!=NULL){
		    lastnode->next=lastnode;	
		}
		lastnode->next=newnode;
	}
}
void addfirst(int val){
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=head;
	head=newnode;
}
int main(){
	int n;
	int i,val,k;
	printf("enter no of nodes\n");
	scanf("%d",&n);
	printf("node addfirst or addlast\n1.addfirst\n2.addlast\n");
	scanf("%d",&k);
	switch(k){
		case 1:
		for(i=0;i<n;i++){
		    printf("enter %d th node element\n",i);
		    scanf("%d",&val);
		    addfirst(val);
	    }
	    break;
	    case 2:
	    for(i=0;i<n;i++){
		    printf("enter %d th node element\n",i);
		    scanf("%d",&val);
		    addlast(val);
	    }
	    break;
			
	}
	i=0;
	while(head!=NULL){
		printf("%d node element is %d\n",i,head->data);
		head=head->next;
		i++;
	}
	return 0;
}
