#include<stdio.h>

void merge(int *a,int s,int e){
    int mid = (s+e)/2;

    int i = s;
    int j = mid+1;
    int k = s;

    int temp[100];

    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }

    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }


}

void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,e);

}




int main(){

	int a[100];
	int n;
	printf("enter the number of elements :");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	printf("The sorted elements are:\n");

	for(int i=0;i<n;i++){
	    printf("%d\n",a[i]);
	}
}
