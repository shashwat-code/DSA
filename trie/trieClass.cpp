#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<math.h>
#include<stack>
#include<map>
using namespace std;
class trieNode{
public:
	char data;
	trieNode** children;
	bool isTerminal;
	trieNode(char data){
		this->data=data;
		this->isTerminal=false;
		isTerminal=new char*[26];
		for(int i=0;i<26;i++){
			children[i]=NULL;
		}
	}
};
class trie{
	trieNode* root;
public:
	trie(){
		root=new trieNode('\0');
	}
	void insert(trieNode* root, string s){
		if(s.length()==0){
			root->isTerminal=true;
			return;
		}
		trieNode* child;
		if(root->children[s[0]-'a']!=NULL){
				child=root->children[s[0]-'a'];
		}else{
			child=new trieNode(s[0]);
			root->children[s[0]-'a']=child;
		}
		insert(child,s.substr(1));
		
	}
	void insert(string s){
		insert(root,s);
	}

};
int main(){

	return 0;
}