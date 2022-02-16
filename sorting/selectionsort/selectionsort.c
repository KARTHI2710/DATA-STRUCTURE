#include<stdio.h>
void selectionsort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	int n,i;
	printf("enter no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("before sorting the array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	selectionsort(arr,n);
	printf("\nafter sorting the array\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
