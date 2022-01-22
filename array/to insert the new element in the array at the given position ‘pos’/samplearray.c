#include<stdio.h>
void print(int n,int arr[],int pos,int ele){
	int i;
	for(i=n;i>pos;i--){
	arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n;
	printf("enter n of elements\n");
	scanf("%d",&n);
	int i,arr[n],ele,pos;
	printf("enter element and position\n");
	scanf("%d %d",&ele,&pos);
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	print(n,arr,pos,ele);
	

	return 0;
}
