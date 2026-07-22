/******************************************************************************

                            Online C Debugger.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Debug" button to debug program.

*******************************************************************************/
#include <stdio.h>
/*void inssort(int arr[],int len){
    for(int i=1,j;i<len;i++){
        int temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}
void swapping(int* a,int* b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
int hoarepartitioningscheme(int arr[],int low,int high){
    int i=low-1,j=high+1,pivot=arr[low];
    while(1){
    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    if(i>=j) return j;
    swapping(&arr[i],&arr[j]);
    }
}
void quicksort(int arr[],int low,int high){
    if(low<high){
    int pivot=hoarepartitioningscheme(arr,low,high);
    quicksort(arr,low,pivot);
    quicksort(arr,pivot+1,high);
   }
}*/
int main(){
   printf("Enter the number of elemnts:");
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
   int found=0,key;
   scanf("%d",&key);
   int start=0,end=n-1,mid;
   //quicksort(arr,0,n-1);
   //inssort(arr,n);
   mergesort(arr,0,n);
   int k=0;
   while(k<n){
       printf("%d ",arr[k++]);
   }
   while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]==key){
        printf("Found at Index: %d",mid);
        found=1;
        break;
    }
    if(arr[mid]<key) start=mid+1;
    else end=mid-1;
   }
   if(found==0){
    printf("Element not in list!");
   }
   return 0;
}
