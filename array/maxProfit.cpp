#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
int profit(int* arr,int n){
	int sum=arr[1]-arr[0];
	int min_element=arr[0];
	for(int i=1;i<n;i++){
		if(sum<arr[i]-min_element){
			sum=arr[i]-min_element;
		}
		if(min_element>arr[i]){
			min_element=arr[i];
		}
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int* arr=new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<profit(arr,n)<<endl;
	}
	return 0;
}