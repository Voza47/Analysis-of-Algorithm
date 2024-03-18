
#include<stdio.h>
#include<conio.h>

int n,array[10],i,j,low,high,mid,key;
void main(){
    printf("******This is the Binary Search********\n");
    printf("Enter the number of Element in array:");
    scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the element %d  :",i);
    scanf("%d",&array[i]);

  }
  printf("Enter the element you want to find:");
  scanf("%d",&key);
  low=0;
  high=n;
  mid=0;
  while(low<=high)
  {
    mid = (high+low)/2;
    if( array[mid]==key){
        printf("Element is found at %d",mid);
        break;

    }
    else if(array[mid]<key){
        low=mid+1;
    }
    else
    {
        high=mid-1;
        
    }
  }





}