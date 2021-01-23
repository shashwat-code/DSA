#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
#include "linkedListNode.cpp"
using namespace std;
int indexNode(node* head,int element,int count){
	cout<<"count: "<<count<<endl;
	if(head==NULL){
		return -1;
	}
	if(head->data==element){
		return count;
	}
	int x=indexNode(head->next,element,count+1);
	if(x==-1){
		return -1;
	}
	return x;
}
int main(){
	node* head = input();
	print(head);
	int data;
	cout<<"enter the element to searched: ";
	cin>>data;
	cout<<"index of element is: "<<indexNode(head,data,0);
	return 0;
}