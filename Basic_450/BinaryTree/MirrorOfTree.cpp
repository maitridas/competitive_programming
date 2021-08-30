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

void inorder(Node* root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

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

void mirroroftree(Node *root){
    if(root==NULL){
        return;
    }
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirroroftree(root->left);
    mirroroftree(root->right);
}

int main(){
    string str;
    getline(cin,str);
    Node *root = buildTree(str);
    inorder(root);
    cout<<endl;
    mirroroftree(root);
    inorder(root);
}