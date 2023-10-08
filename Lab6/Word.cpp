#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
   cin>>s;
   int count=0,low=0;
   for(int i=0; i<s.size();i++){
    if(s[i]>='A' && s[i]<='Z'){
        count++;
    }
    else low++;
   }
    if(count>low){
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&& s[i]<='z'){
               s[i]= s[i]-32;
            }
        }
    }
    else if(low>=count) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
           s[i]= s[i]+32;
            }
        }

    }
    cout<<s;
    return 0;
}
