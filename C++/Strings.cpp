#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char t;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<"\n"<<a+b;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<endl<<a<<" "<<b;
    return 0;
}