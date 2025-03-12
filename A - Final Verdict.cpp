#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<long long int>
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define mii map<long long int, long long int>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int sum=0;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        sum+=v[i];
	    }
	    if(sum==n*x) yes;
	    else no;
	    
	}
}
