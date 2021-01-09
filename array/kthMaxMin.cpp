#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;

// Approach 1 : Using heap
int kthSmallest(int* arr,int n,int k){
	priority_queue<int,vector<int>,greater<int> > sorted;
	for(int i=0;i<n;i++)sorted.push(arr[i]);
	int i=1;
	while(i!=k){
		sorted.pop();
		i++;
	}
	return sorted.top();	
}
// Time Complexity: O(n)
// Space Complexity: O(n)
//---------------------------------------------------------------------------------
//Approach 2: Using quickselect
void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int* arr,int l,int r){
	int pivotElement=arr[r];
	int k=l;
	for(int i=l;i<r;i++){
		if(pivotElement>=arr[i]){
			swap(arr+i,arr+k);
			k++;
		}
	}
	swap(arr+k,arr+r);
	return k;
}
int kthSmallest(int* arr,int l,int r,int k){
	cout<<l<<" : "<<r<<endl;
	int idx= partition(arr,l,r);
	cout<<"arr["<<idx<<"]: "<<arr[idx]<<endl;
	
	if(k-1==idx){
		return arr[idx];
	}else if(idx>k-1){
		return kthSmallest(arr,l,idx-1,k);
	}else{
		return kthSmallest(arr,idx+1,r,k);
	}
}
// Time Complexity: O(n)
// Space Complexity: O(1)

//main function
int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>k;
	//Using priority queue	
    cout<<kthSmallest(arr,n,k);
    //Using Quickselect
    cout<<kthSmallest(arr,0,n-1,k);
	return 0;
}