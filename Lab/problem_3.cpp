// use condition in c++ lab class ........
// use if and else ..........
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;cin>>x>>y>>z;
    if(x>y && x>z) {
        cout<<x;
    }
    else if(y>x && y>z) {
    cout<<y;
    }
    else {
    cout<<z;
    }
    return 0;
}