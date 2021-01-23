#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;

// node class
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

//insert node at ith position helper function
node* insertNodeHelper(node* head,int i,int data){
	cout<<i<<endl;
	if(i==0){
		node* newNode=new node(data);
		newNode->next=head->next;
		head->next=newNode;
		return head;
	}
	if(head==NULL){
		return head;
	}
	node* temp =insertNodeHelper(head->next,i-1,data);
	head->next=temp;
	return head;
}

// insert node at ith position
node* insertNode(node* head,int i,int data){
	if(i==0){
		node* newNode=new node(data);
		newNode->next=head;
		return newNode;
	}
	return insertNodeHelper(head,i-1,data);
}

node* deleteNode(node* head,int i){
	if(head==NULL){
		return NULL;
	}
	if(i==0){
		return head->next;
	}
	node* temp = deleteNode(head->next,i-1);
	head->next=temp;
	return head;
}




int main(){
	node* head=input();
	cout<<head<<endl;
	print(head);
	cout<<"length is: "<<length(head)<<endl;
	int i;
	cin>>i;
	cout<<"ith node is: "<<printNode(head,i)<<endl;
	cout<<"insert node at ith pos: ";
	cin>>i;
	int data;
	cout<<"\ndata: ";
	cin>>data;
	head=insertNode(head,i,data);
	print(head);
	cout<<"delete node: of pos: ";
	cin>>i;
	head=deleteNode(head,i);
	print(head);
	return 0;
}