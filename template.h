#ifndef _template_h_
#define _template_h_

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef complex<int> ci;
typedef pair<ll, ll> pll;
typedef complex<ll> cll;
typedef tuple<int,int,int> _3i;
typedef tuple<ll,ll,ll> _3ll;
typedef tuple<ll,ll,ll,ll> _4ll;
#define FOR(i,a,b) for (int i=(int)(a); i<=(int)(b); ++i)
#define FORB(i,a,b) for (int i=(int)(a); i>=(int)(b); --i)
#define PB push_back
#define EB emplace_back

template<typename T>
void mnm(T& a, T b) {a=min(a,b);};
template<typename T>
void mxm(T&a, T b) {a=max(a,b);};
template<typename T>
int discrete_id (vector<T>&vals, T val, int startId=1) {
    return startId+(int)(lower_bound(vals.begin(), vals.end(), val)-vals.begin());
}

const ll mod=1000000007LL;                       //Sửa mod lại.
ll power (ll a, ll n, ll mod=mod) {
    ll ans=1;
    while (n) {
        if (n&1) ans=(ans*a)%mod;
        a=(a*a)%mod; n/=2;
    }
    return ans;
}
ll modul (ll x, ll mod=mod) {x%=mod; if (x<0) x+=mod; return x;}
_3ll eea (ll x, ll y) { //(a,b,d)
    if (y==0) return _3ll(1LL,0LL,x);
    ll a,b,d,q=x/y;
    tie(a,b,d)=eea(y,x%y);
    return _3ll(b,a-b*q,d);
}
ll inv (ll x, ll m=mod) { //assume gcd(x,m)=1
    ll a,b,d; tie(a,b,d)=eea(x,m);
    assert(d == 1);
    return modul(a,m);
}
ll mul (ll a, ll b, ll m=mod) {a%=m; b%=m; return (a*b)%m;}
char i2c(int c) {return (char)(c+'0');}

ll gcd(ll a, ll b) {
    while (b) {
        ll r=a%b;
        a=b; b=r;
    }
    return a;
}
ll lcm (ll a, ll b) {return a/gcd(a,b)*b;}


class Problem {
    public:
    virtual ~Problem() {} //Non-virtual interface idiom
    virtual void main()=0; //every problem should implement this
    Problem& solve() {main(); return *this;}

    inline friend 
    std::ostream& operator << (std::ostream &o, const Problem &p) 
    {
        return o << p.cout.rdbuf();
    }

    inline friend 
    std::istream& operator >> (std::istream &i, Problem &p) 
    {
        return i >> p.cin.rdbuf();
    }

    inline friend 
    Problem& operator << (Problem& receive, Problem& give) 
    {
        receive.cin << give.cout.rdbuf();
        return receive;
    }

    inline friend
    Problem& operator >> (Problem& give, Problem &receive)
    {
        give.cout >> receive.cin.rdbuf();
        return give;
    }

    template <typename T> inline friend
    Problem& operator << (Problem& p, const T& t) 
    {
        p.cin << t; return p;
    }

    template <typename T> inline friend
    Problem& operator >> (Problem& p, T& t) 
    {
        p.cout >> t; return p;
    }

    protected:
        std::stringstream cin, cout;
};

#endif