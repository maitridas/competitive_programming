/********   All Required Header Files ********/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <cstdlib>
#include <unordered_map>

using namespace std;

#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long int
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pll pair<ll,ll>
#define cd complex<double> 
#define vv vector
#define imx INT_MAX
#define imn INT_MIN
#define lmx LLONG_MAX
#define lmn LLONG_MIN

struct Node{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

Node* buildTree(string str){
    if(str.length()==0 || str[0]=='N') return NULL;

    vector<string> ip;
    istringstream iss(str);

    for(string str; iss>>str;) ip.push_back(str);

    Node* root = new Node(stoi(ip[0]));

    queue<Node*> queue;
    queue.push(root);

    int i=1;
    while(!queue.empty() && i<ip.size()){
        Node *curr = queue.front();
        queue.pop();

        string currval = ip[i];

        if(currval != "N"){
            Node *newnode = new Node(stoi(currval));
            curr->left = newnode;
            queue.push(curr->left);
        }

        i++;
        if(i>=ip.size()) break;
        currval = ip[i];

        if(currval != "N"){
            Node *newnode = new Node(stoi(currval));
            curr->right = newnode;
            queue.push(curr->right);
        }
        i++;
    }

    return root;

}

// Recursive
void preorderrecurr(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderrecurr(root->left);
    preorderrecurr(root->right);
}

//iterative
void preorderiter(Node *root){
    stack<Node*> s;
    Node* curr;
    if(root==NULL) return;
    curr=root;
    while(!s.empty() || curr!=NULL){
        if(curr){
            cout<<curr->data<<" ";
            if(curr->right) s.push(curr->right);
            curr = curr->left;
        }
        else{
            curr = s.top();
            s.pop();
        }
    }
}


int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string str;
    getline(cin,str);
    Node *root = buildTree(str);
    preorderrecurr(root);
    cout<<endl;
    preorderiter(root);
}