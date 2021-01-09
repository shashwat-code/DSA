#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;


int minJumps(int* arr,int n){
	int dp[n];
	dp[0]=0;
	for(int i=1;i<n;i++){
		dp[i]=INT_MAX-1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(j+arr[j]>=i){
				dp[i]=min(dp[i],dp[j]+1);
			}
			
		}
	}
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
	}
	if(dp[n-1]==INT_MAX-1){
		return -1;
	}
	return dp[n-1];
}
// Time Complexity: O(n2)
// Space Complexity: O(n)
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
   
    cout<<minJumps(arr,n);
	return 0;
}