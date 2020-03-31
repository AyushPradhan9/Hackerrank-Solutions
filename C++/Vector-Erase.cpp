#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    int n,m,t,a,b;
    cin>>n;
    while(n--){
        cin>>t;
        v.push_back(t);
    }
    cin>>m;
    cin>>a>>b;
    v.erase(v.begin()+(m-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for (auto x:v){
        cout<<x<<" ";
    }
    return 0;
}