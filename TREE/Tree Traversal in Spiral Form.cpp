//method1
#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void printSpiral(Node *root){
    if(root==NULL)return;
    queue<Node *>q;
    stack<int> s;
    bool reverse=false;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<count;i++){
        Node *curr=q.front();
        q.pop();
        if(reverse)
            s.push(curr->key);
        else
            cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        }
        if(reverse){
            while(s.empty()==false){
                cout<<s.top()<<" ";
                s.pop();
            }
        }
    reverse=!reverse;
    }
}  

int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	printSpiral(root);
}
//method int32_t#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
    Node(int val) : key(val), left(NULL), right(NULL) {}
};

void printSpiral(Node* root) {
    if (root == NULL) 
        return;

    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(root);

    while (!s1.empty() || !s2.empty()) {
        // Process s1
        while (!s1.empty()) {
            Node* temp = s1.top();
            s1.pop();
            cout << temp->key << " ";

            // Right to left
            if (temp->right) 
                s2.push(temp->right);
            if (temp->left) 
                s2.push(temp->left);
        }

        // Process s2
        while (!s2.empty()) {
            Node* temp = s2.top();
            s2.pop();
            cout << temp->key << " ";

            // Left to right
            if (temp->left) 
                s1.push(temp->left);
            if (temp->right) 
                s1.push(temp->right);
        }
    }
}


int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	printSpiral(root);
}