#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define all(x) x.begin(),x.end()
#define ll long long int
#define vi vector<ll>
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) //set or map
#define cpresent(c,x) (find(all(c),x) != (c).end()) // vector
#define mem(a,x) memset(a,x,sizeof(a))
#define inf 0x3f3f3f3f 
#define mp map<ll,ll>
      
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
     ll n,sum,t;
    cin>>t;
    while(t--){
    cin>>n>>sum;
    vi v(n);
    mp m;
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    	m[v[i]]++;
    }

    ll c=0;
    for (int i = 0; i < n; ++i)
    {
    	if(m[sum-v[i]]>0)
    		c++;
    	
    	 m[v[i]]=0;
    }
    cout<<c<<"\n";
    
        
    }
return 0;
}