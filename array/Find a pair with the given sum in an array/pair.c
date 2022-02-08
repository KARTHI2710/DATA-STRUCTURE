#include<stdio.h>
void findpair(int a[],int n,int tar){
	int i,j,f=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==tar){
				printf("pair(%d,%d)\n",a[i],a[j]);
				f=1;
			}
		}
	}
	if(f==0){
	printf("pair not found\n");
    }
}
int main(){
	int n,i;
	printf("enter no of element in the array\n");
	scanf("%d",&n);
	int arr[10],target;
	printf("enter target\n");
	scanf("%d",&target);
	printf("enter array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	findpair(arr,n,target);
	return 0;
}
