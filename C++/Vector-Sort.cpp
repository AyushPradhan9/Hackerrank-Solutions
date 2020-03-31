#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int> v;
    int n,t;
    cin>>n;
    while(n--){
        cin>>t;
        v.push_back(t);
    } 
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    } 
    return 0;
}