#include<vector>
#include<unordered_map>
using namespace std;
int main() {
	 int t;
	 cin>>t;
	 
	 while(t--){
	     vector<int> arr1;
	     vector<int> arr2;
	     int n,m;
	     cin>>n;
	     cin>>m;
	     for(int i=0;i<n;i++){
	         int k;
	         cin>>k;
	         arr1.push_back(k);
	     }
	     
	     for(int i=0;i<m;i++){
	         int k;
	         cin>>k;
	         arr2.push_back(k);
	     }
	     unordered_map<int,int> pq;
	     for(int i=0;i<n;i++){
	         pq[arr1[i]]++;
	     }
	     for(int i=0;i<m;i++){
	         pq[arr2[i]]++;
	     }
	     cout<<pq.size()<<endl;
	     
	     
	 }
	return 0;
}