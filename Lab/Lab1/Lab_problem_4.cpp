// some 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;
    if(x>=0){
        cout<<" X valu is possitive integer"<<endl;
        if(x%2==0){
            cout<<"X valu is EVEN:"<<endl;
        }
        if(x>999 && x<10000){
            cout<<"X valu contains fore Digit"<<endl;
        }
    }
    return 0;
}