#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
class tuple{
public:
	int mx;
	int mn;
	tuple(){
		mx=INT_MIN;
		mn=INT_MAX;
	}
};

tuple maxMin(int* arr,int n){

	tuple p;
	for(int i=0;i<n;i++){
		if(p.mn>arr[i]){
			p.mn=arr[i];
		}
		if(p.mx<arr[i]){
			p.mx=arr[i];
		}
	}
	return p;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++)cin>>arr[i];
    tuple p=maxMin(arr,n);
    cout<<p.mn<<" "<<p.mx<<endl;
	return 0;
}