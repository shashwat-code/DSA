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
void reverseArray(int* arr,int n){
	int i=0;
	while(i<=n/2){
		swap(arr+i,arr+n-1-i);
		i++;
	}
}
int main(){
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	reverseArray(arr,8);
	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}