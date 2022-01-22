//remover array element
#include<stdio.h>
int search(int a[],int k,int n){
	int i;
	for(i=0;i<n;i++){
		if (a[i]==k){
			return i;
		}
	}
	printf("remove element is not in this array\n");
	exit(0);
}
int remove_element(int a[],int s,int n){
	int i;
	for(i=s;i<n-1;i++){
		a[i]=a[i+1];
	}
}
int main()
{
	int n;
	printf("enter no of elements in array\n");
	scanf("%d",&n);
	int i,arr[n],s,key;
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter remove key\n");
	scanf("%d",&key);
    s=search(arr,key,n);
    remove_element(arr,s,n);
    for(i=0;i<n-1;i++){
    	printf("%d ",arr[i]);
	}
	return 0;
}
