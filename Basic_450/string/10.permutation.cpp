#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> allpermutes;
string swap(string s, int l, int r)
{
    char temp = s[l];
    s[l] = s[r];
    s[r] = temp;
    return s;
}

void permute(string s, int l, int r)
{
    if (l == r)
    {
        allpermutes.push_back(s);
        return;
    }
    for (int i = l; i <= r; i++)
    {
        s = swap(s, l, i);
        permute(s, l + 1, r);
        s = swap(s, l, i);
    }
}
vector<string> find_permutation(string S)
{
    // Code here there
    permute(S, 0, S.length() - 1);
    sort(allpermutes.begin(), allpermutes.end());
    return allpermutes;
}

int main(){
    string s;
    cin>>s;
    allpermutes = find_permutation(s);
    for(auto elem:allpermutes){
        cout<<elem;
    }
}