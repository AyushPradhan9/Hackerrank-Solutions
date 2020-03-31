#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n;
    cin>>q;
    vector <vector <int>> a(n);
    for(int j=0;j<n;j++){
        int s;
        cin>>s;
        for(int i=0;i<s;i++){
            int d;
            cin>>d;
            a[j].push_back(d);
        }
    }
    for(int j=0;j<q;j++){
        int k,l;
        cin>>k;
        cin>>l;
        cout<<a[k][l]<<endl;
    }  
    return 0;
}