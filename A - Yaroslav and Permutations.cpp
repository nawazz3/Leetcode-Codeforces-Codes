#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
   
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int c=1,ans=0;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            c++;
            ans=max(ans,c);
        }
        else{
            c=1;
        }
    }
    if(ans<=(n+1)/2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    // cout<<ans<<endl;
    
}
