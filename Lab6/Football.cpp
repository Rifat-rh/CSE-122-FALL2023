#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            sum++;
            if(sum==6) break;
        }
        if(s[i]!=s[i+1]){
            sum=0;
        }
    }
    if(sum>=6) cout<<"YES";
    else cout<<"NO";
return 0;
}
