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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 100006

int main()
{
    fast;
    ll t;

    ll m,n,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=1,ans=0,sum1=0, sum2=0;
    scl(n);
    ll a[n], b[n];

    fr(i,n)cin>>a[i];
    fr(i,n)cin>>b[i];

    fr(i, n)if( (a[i]==1 and b[i]==0)  ) sum1++; else if (a[i]==0 and b[i]==1) sum2++;

    //cout<<sum1<<" "<<sum2<<endl;

    if(sum1==sum2 and sum1==0)cout<<-1<<endl;
    else
        {
        ll val=sum1;
        if(sum1==0)cnt=-1;
        else fr1(i, N)if(sum2>=sum1)sum1=val*i, cnt=i;else break;
        cout<<cnt<<endl;
        }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



