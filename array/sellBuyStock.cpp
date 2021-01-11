#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
int stock(int* arr,int n){
	int min_element=INT_MAX;
	int max_diff=INT_MIN;
	for(int i=0;i<n;i++){
		min_element=min(min_element,arr[i]);
		max_diff=max(max_diff,arr[i]-min_element);
	}
	return max_diff;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<stock(arr,n);

	return 0;
}