#include <stdio.h>

int binary_search(int *arr,int size ,int key){
int mid,lo,hi;
hi=size;
lo=0;
while(hi>=lo){
mid=(hi+lo)/2;
if(arr[mid]==key) return mid+1;
else if (arr[mid]>key) hi=mid-1;
else lo=mid+1;
}
return -1;
}
int main (){
int arr[5]={3,7,13,17,25};
int res=0;
res=binary_search(arr,5,13);
if(res==-1){
printf("number not foud \n");
}
else printf("the number is found at index %d \n",res);
return 0;
}


