
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int d; cin>>d;
    for(int i=1;i<=d;i++){
        if(n%10==0){
            n=n/10;
        }
        else n=n-1;
    }
  cout<<n;

    return 0;
}
