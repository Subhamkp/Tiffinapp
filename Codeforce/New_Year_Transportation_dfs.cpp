#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(),x.end()
#define ll long long int
#define vi vector<ll>
#define mp map<ll,ll>
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) //set or map
#define cpresent(c,x) (find(all(c),x) != (c).end()) // vector
#define mem(a,x) memset(a,x,sizeof(a))
#define inf 0x3f3f3f3f 
      
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n,t;
    cin>>n>>t;
    vi v(n);
    for (int i = 1; i <= n-1; ++i)
    {
    	cin>>v[i];
    }
    ll x=1;
    while(x<t)
    {
    	x+=v[x];
    }
    cout<<(x==t?"YES":"NO");
return 0;
}