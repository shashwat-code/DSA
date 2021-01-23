#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
class node{
public:
	int data;
	node* next;
	node(int data){
		this->data=data;
		next=NULL;
	}
};


// taking input for LL
node* input(){
	int data;
	cin>>data;
	node* head=new node(data);
	node* temp=head;
	while(1){
		cin>>data;
		if(data==-1){
			break;
		}
		node* next=new node(data);
		temp->next=next;
		temp=temp->next;
	}
	
	return head;
}

// print Linked list
void print(node* head){
	
	 while(head!=NULL){
	 	cout<<head->data<<" ";
	 	head=head->next;
	 }
}

// print ith node
int printNode(node* head,int i){
	i--;
	while(i--){
		head=head->next;
	}
    return head->data;
}
// find length of LL
int length(node* head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}