#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void arrange(int* arr,int n){
	int i=0,j=n-1;
	while(i<=j){
		if(arr[j]<0 && arr[i]>0){
			swap(arr[i],arr[j]);i++;
			j--;
		}else if(arr[j]<0 && arr[i]<0){
			i++;
		}else if(arr[j]>0 && arr[i]>0){
			j--;
		}else{
			i++;
			j--;
		} 
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	arrange(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;	
	return 0;
}