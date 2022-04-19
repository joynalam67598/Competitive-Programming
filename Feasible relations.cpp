#include <bits/stdc++.h>

#define     fr              freopen("input.txt","r",stdin)
#define     fw              freopen("output.txt","w",stdout)
#define     fast            ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


#define     ll              long long int
#define     ld              long double
#define     ul              unsigned long long int
#define     dl              double
#define     st              string

#define     vb              vector<bool>
#define     vll             vector <ll>
#define     lll             list <ll>
#define     ls              list<string>
#define     lc              list <char>
#define     qll             queue <ll>
#define     stll            stack <ll>
#define     sll             set <ll>
#define     sts             set <string>
#define     vs              vector <string>
#define     pll             pair <ll,ll>
#define     mll             map <ll,ll>
#define     msl             map <string,ll>
#define     vecp            vector < pair <ll, ll> >
#define     vecpp           vector < pair <ll, pair <ll, ll> > >
#define     pb              push_back
#define     MP              make_pair
#define     pf              push_front
#define     in              insert
#define     eb              emplace_back
#define     ppb             pop_back
#define     ppf             pop_front

#define     el              endl
#define     rt              return 0

#define     F               first
#define     S               second
#define     Y               printf("YES\n")
#define     N               printf("NO\n")
#define     pr(a)           printf("%lld\n",a)
#define     prs(a)          printf("%lld ",a)
#define     prc(a)          printf("Case %lld: ",a)
#define     sf1(a)          scanf("%lld",&a)
#define     sf2(a,b)        scanf("%lld%lld",&a,&b)
#define     sf3(a,b,c)      scanf("%lld%lld%lld",&a,&b,&c)


#define     gcd(a, b)       __gcd(a, b)
#define     lcm(a, b)       (a * b) / gcd(a, b)
#define     len(X)          ((ll)X.size())


#define     sim                 template<class T
#define     wh                  while
#define     rep(i, l, r)        for(long long i = l; i<r; i++)
#define     repi(i, l, r, p)    for(long long i = l; i<r; i+=p)
#define     repi2(i, l, r, p)   for(long long i = l; i>=r; i+=p)
#define     repb(i, r, l)       for(long long i = r; i>=l; i--)
#define     repbd(i, r, l, d)   for(long long i = r; i>l; i-=d)
#define     repr(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) ///traverse a array!!

#define     max3(a, b, c)       max(a, max(b, c))
#define     min3(a, b, c)       min(a, min(b, c))
#define     max4(a, b, c, d)    max(max(a, b), max(c, d))
#define     min4(a, b, c, d)    min(min(a, b), min(c, d))

#define     vsort(v)            sort(v.begin(),v.end())
#define     all(container)      container.begin(), container.end()
#define     rall(container)     container.rbegin(), container.rend()
#define     iterate(v, it)      for(auto it = v.begin(); it != v.end(); it++)

#define     rand(V)             random_shuffle(all(V))
#define     lb(a,X)             lower_bound(all(a),X)-a.begin()
#define     ub(a,X)             upper_bound(all(a),X)-a.begin()

#define     BIG                 300000
#define     mem(a,v)            memset(a,v,sizeof(a))
#define     for0(i,n)           for(int (i)=0; (i) < (n); (i)++)

#define BTCL __builtin_clz      ///bit -size
#define BTFF __builtin_ffs      ///position of 1 from last 1 base
#define BTCT __builtin_ctz      /// number of zero at last
#define BTPP __builtin_popcount /// number of 1 bit



using namespace std;

const int MOD = 1e9+7; // 998244353;
const int MAX = 2e5+5;
const ll INF = 1e18;
const double PI = acos(-1.0);
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

#define deb(args...){string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s);istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << endl; err(++it, args...); }



// WE CREATE GRAPH FRO = SIGN AND FOR NOT EQUAL WE WILL SAVE THEM TO CHECK LATER.
//

vll adj[1000005];
ll vis[1000005],dis[1000005],cc[10000005];
ll cur_connectd;


void dfs(ll node){
    vis[node]=1;
    cc[node] = cur_connectd;
    for(auto ch:adj[node])
     if(vis[ch]==0) dfs(ch);

}

int main(){
    ll n,m,a,b,t;
    cin>>t;
    while(t--){
        string s;
        cin>>a>>b;
        rep(i,0,a+1) adj[i].clear(),vis[i]=0;
        vector<pair<ll,ll>> edgeList;
        rep(i,0,b)
        {
            cin>>n>>s>>m;
            if(s=="=") adj[n].pb(m),adj[m].pb(n);
            else edgeList.pb({n,m});
        }

        rep(i,1,a+1)
        {
            if(vis[i]==0)
            {
                cur_connectd++;
                dfs(i);
            }
        }


        ll f=1;
        for(auto i: edgeList)
        {
            ll p = i.F, q = i.S;
            if(cc[p]==cc[q]){ // cc[p] in which connected component does it belongs to.
                f=0;break;
            }

        }

        f ? Y : N;

    }
}



