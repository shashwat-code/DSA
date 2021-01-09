#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
#include<unordered_map>
using namespace std;
bool subArrayExists(int* arr,int n){
	unordered_map<int,int> map;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
		if(sum==0 || map.find(sum)!=map.end()){
			return true;
		}
		map[sum]++;
	}

	return false;
}
// Time Complexity: O(n)
// Space Complexity: O(n)
int main(){

	return 0;
}