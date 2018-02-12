#include<bits/stdc++.h>
using namespace std;
#define ft first
#define sd second
#define pb push_back
#define all(x) x.begin(),x.end()
#define cnti(x) (__builtin_popcount(x))
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x))
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x))
#define ctzl(x) (__builtin_ctzll(x))
#define ull unsigned long long int
#define ll long long int
#define vi vector<long long int>
#define vii vector<pair<long long int,long long int> >
#define pii pair<long long int,long long int>
#define mp make_pair

const int N = 1e5 + 10;
const int mod = 1e9 + 7;
const ll INF = 1LL << 62;
ll power(ll x,ll y){
  ll t=1;
  while(y>0){
    if(y&1) y-=1,t=t*x%mod;
    else y/=2,x=x*x%mod;
  }
  return t;
}
ll inverse(ll q){ll t;t=power(q,mod-2);return t;}
ll gcd(ll a,ll b){return (b==0)?a:gcd(b, a%b);}
ll lcm(ll a,ll b){return (a*(b / gcd(a, b))); }

map<ll, ll> F;
ll f(ll n){   // for standard fibo only i.e 0,1
    F[0]=0;F[1]=1;
    if (F.count(n)) return F[n];
	if(n==2){   // it is repeated
        F[2]=F[0]+F[1];
        return F[2];
    }
    ll k=n/2;
	if (n%2==0){ // n=2*k
		return F[n] = (f(k)*( f(k+1)+f(k-1) )) % mod;
	} else { // n=2*k+1
		return F[n] = (f(k+1)*f(k+1) + f(k)*f(k)) % mod;
	}
}
void fact(int n)//for n>20 else use storing
{  int a[200],m=1,temp=0,i,j,x;a[0]=1;
    for(i=1;i<=n;i++){
        for(j=0;j<m;j++){
            x = a[j]*i+temp;
            a[j]=x%10;
            temp = x/10;
        }
        while(temp>0){
            a[m]=temp%10;
            temp = temp/10;
            m++;
        }
       } for(i=m-1;i>=0;i--)cout<<a[i];
              cout<<"\n";
}
bool isprime(ll number)
{
    if (number < 2) return false;
    if (number % 2 == 0) return (number == 2);
    ll root = sqrt(number);
    for (ll i = 3; i <= root; i += 2){
        if (number % i == 0) return false;
    }
    return true;
}

/*
int D, X, Y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        D = A;
        X = 1;
        Y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = X;
        X = Y;
        Y = temp - (A/B)*Y;
    }
}

*/

/*
vector<int>vec[500];
int visited[500]={0};
void dfs(int v)
{
    for(int j=0;j<vec[v].size();j++){
        if(visited[vec[v][j]]==0){
               visited[vec[v][j]]=1;
               dfs(vec[v][j]);
        }
    }
}
*/
bool cmp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.ft!=p2.ft)
        return p1.ft<p2.ft;
    return p1.sd>p2.sd;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
return 0;
}