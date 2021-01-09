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

void sort012(int* arr,int n){
	int i0=0,i1=0,i2=n-1;
	while(i1<=i2){
		if(arr[i1]==0){
			swap(arr+i0,arr+i1);
			i0++;
			i1++;
		}else if(arr[i1]==2){
			swap(arr[i1],arr[i2]);
			i2--;
			i1++;
		}else{
			i1++;
		}
	}
}
// Time Complexity: O(n)
// Space Complexity: O(1) 
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort012(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;	
	return 0;
}