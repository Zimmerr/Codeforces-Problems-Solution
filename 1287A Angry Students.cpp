//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




//vector<ll>cnt(26, 0);   ///create fixed 26 sized vector and initialize initially all 0
// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

///Every even integer greater than 2 can be represented as the sum of two primes numbers.
//count item in array : count(arr,arr+n,'I');
#define N 100006

int main()
{
    fast;
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r, pos;
        string s, s1, s2, s3, s4;
        cin>>n>>s;
       ll cnt=0;

       fr(i, n)
       {
           if(i+1<n and  s[i]=='A' and s[i+1]=='P' )
           {
               vector<ll> v;

               for(j=i; j<n; j++)   if(s[j]=='A')v.pb(j);

               ll sz=v.size();

               fr(i, sz)   s[ v[i]+1 ]='A';

               v.clear();
               cnt++;
           }
       }


       pfl(cnt);
    }
    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

