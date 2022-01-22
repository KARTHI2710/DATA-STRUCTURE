#include<stdio.h>
void search(int a[],int k,int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("you searched element is avail in the arry in the %d position",i);
			return 0;
		}
	}
  	printf("sorry! you entered key is not avail in the array");
}
int main()
{
	int n;
	printf("enter no of elements\n");
	scanf("%d",&n);
	int arr[n],key,i;
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter search key\n");
	scanf("%d",&key);
	search(arr,key,n);
	return 0;
}

