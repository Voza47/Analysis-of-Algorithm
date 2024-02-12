#include<stdio.h>
#include<conio.h>
int main(){
int myArray[8]={11,22,33,44,55,66,77,88};
int low=0;
int n=8;
int high=n;
int key;
printf("Enter the element you want to find");
scanf("%d",&key);
while (low<high){
int mid=(low+high)/2;
if(myArray[mid]==key){
	printf("Element is at index%d ",mid);
	return 0;
}
else if(myArray[mid]<=key){
low=mid+1;
}
else{
high=mid-1;
}
}
getch();
}
