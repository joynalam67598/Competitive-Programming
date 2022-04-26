#include <bits/stdc++.h>

#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define fast    ios_base::sync_with_stdio(false);

#define ll long long int
#define ld long double
#define ul unsigned long long int
#define dl double
#define st string

#define vb vector<bool>
#define vll vector<ll>
#define lll list<ll>
#define ls list<string>
#define lc list<char>
#define qll queue<ll>
#define stll stack<ll>
#define sll set<ll>
#define sts set<string>
#define vs vector<string>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define msl map<string, ll>
#define vecp vector<pair<ll, ll>>
#define vecpp vector<pair<ll, pair<ll, ll>>>
#define pb push_back
#define pf push_front
#define in insert
#define eb emplace_back
#define ppb pop_back
#define ppf pop_front

#define el endl
#define rt return 0

#define F first
#define S second
#define N printf("NO\n")
#define Y printf("YES\n")
#define sf1(a) scanf("%lld", &a)
#define sf2(a, b) scanf("%lld%lld", &a, &b)
#define sf3(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define pr(a) printf("%lld\n", a)
#define prs(a) printf("%lld ", a)
#define prc(a) printf("%c", a)
#define prcc(a) printf("Case %lld: ")
#define prss(a) printf("%s\n",a)


#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)

#define sim template <class T
#define len(X) ((ll)X.size())
#define mem(a, v) memset(a, v, sizeof(a))
//#define     mp              make_pair
#define ins insert
#define rev reverse
#define _max *max_element
#define _min *min_element
#define SUM accumulate
#define BS binary_search

#define wh while
#define rep(i, l, r) for (long long i = l; i < r; i++)
#define repi(i, l, r, p) for (long long i = l; i < r; i += p)
#define repi2(i, l, r, p) for (long long i = l; i >= r; i += p)
#define repb(i, r, l) for (long long i = r; i >= l; i--)
#define repbd(i, r, l, d) for (long long i = r; i > l; i -= d)
#define repr(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) ///traverse a array!!

#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(min(a, b), min(c, d))

#define vsort(v) sort(v.begin(), v.end())
#define all(container) container.begin(), container.end()
#define rall(container) container.rbegin(), container.rend()
#define iterate(v, it) for (vector<long long>::const_iterator it = v.begin(); it != v.end(); it++)

#define randV(V) random_shuffle(all(V))
#define lb(a, X) lower_bound(all(a), X) - a.begin()
#define ub(a, X) upper_bound(all(a), X) - a.begin()

#define BTCL __builtin_clz      ///bit -size
#define BTFF __builtin_ffs      ///position of 1 from last 1 base
#define BTCT __builtin_ctz      /// number of zero at last
#define BTPP __builtin_popcount /// number of 1 bit

#define BIG 300000

using namespace std;

const int MOD = 1e9 + 7; // 998244353;
const int MAX = 1e9 + 5;
const ll INF = 1e18;
const double PI = acos(-1.0);

int msb(ll n)
{
    int ans;
    for (int i = 0; i < 64; i++)
        if (n & (1LL << i))
            ans = i + 1;
    return ans;
}
int SetBit(int n, int X) { return n | (1 << X); }
int ClearBit(int n, int X) { return n & ~(1 << X); }
int ToggleBit(int n, int X) { return n ^ (1 << X); }
bool CheckBit(int n, int X) { return (bool)(n & (1 << X)); }
ll powmod(ll a, ll b)
{
    ll res = 1;
    a %= MOD;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
    }
    return res;
}

///**************************************** Converte km.cm.m ****************************************

long long operator"" _m(unsigned long long literal) { return literal; }
long double operator"" _cm(unsigned long long literal) { return literal / 100.0; }
long long operator"" _km(unsigned long long literal) { return literal * 1000; }
//cout << 250_m

/// *********************** debugging any variables value *************************************************************

#define deb(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
void err(istream_iterator<string> it)
{
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
/**_____________________________________DEBUG____________________________________________________**/

template<typename T>void showSTL(T H);template<typename T,typename V>void showSTL(pair<T,V> H);
template<typename T>void showSTL(priority_queue<T> H);template<typename T>void showSTL(stack<T> H);
template<typename T,typename V>void showSTL(map<T,V> H);template<typename T,typename V>void showSTL(multimap<T,V> H);
template<typename T>void showSTL(vector<T> H);template<typename T>void showSTL(set<T> H);template<typename T>void showSTL(multiset<T> H);
template<typename T>void showSTL(list<T> H);void showSTL(char *H);template<typename T>void showSTL(deque<T> H);
template<typename T>void showSTL(queue<T> H);template<typename T>void showSTL(T H){stringstream ss;ss<<H;cerr<<ss.str();}
template<typename T,typename V>void showSTL(pair<T,V> H){cerr<<"(";showSTL(H.first);cerr<<"=>";showSTL(H.second);cerr<<")";}
template<typename T>void showSTL(priority_queue<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}cerr<<endl;}
template<typename T>void showSTL(stack<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}}
template<typename T,typename V>void showSTL(map<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T,typename V>void showSTL(multimap<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T>void showSTL(vector<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(set<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(multiset<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(list<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
void showSTL(char *H){for(int i=0;i<strlen(H);i++){showSTL(H[i]);};}
template<typename T>void showSTL(deque<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(queue<T> H){cerr<<"[ ";while(!H.empty()){showSTL(H.front());cerr<<' ';H.pop();}cerr<<"]";}
vector<string>vec_spltr(string s){s+=',';vector<string>res;while(!s.empty()) res.push_back(s.substr(0, s.find(','))),s=s.substr(s.find(',')+1);return res;}
void dbg_out(vector<string>__attribute__((unused))args,__attribute__((unused))int idx,__attribute__((unused))int LINE_NUM)
{cerr<<endl;}template<typename Head,typename... Tail> void dbg_out ( vector <string> args, int idx, int LINE_NUM, Head H, Tail... T)
{if(idx>0)cerr<<", ";else cerr << "Line(" << LINE_NUM << "):"; cerr<<" "<<args[idx]<<" = ";showSTL(H);dbg_out(args,idx+1,LINE_NUM, T...);}
#define debug(...) dbg_out(vec_spltr(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)

///**************************************** integer and string manipulation  ****************************************

string c2s(char &C) { return string(1, C); }
bool vowel(char C)
{
    C = tolower(C);
    return (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u');
}
string intgtostring(ll S)
{
    stringstream SS;
    SS << S;
    return SS.str();
}
ll s2ll(string &S)
{
    ll X;
    stringstream SS(S);
    SS >> X;
    return X;
}
vll s2v(string &S)
{
    ll Z = len(S);
    vll A(Z);
    rep(i, 0, Z) A[i] = S[i] - '0';
    return A;
}
string v2s(vll &A)
{
    ll Z = len(A);
    string S(Z, ' ');
    rep(i, 0, Z) S[i] = A[i] + '0';
    return S;
}
ll reversedigits(ll &X)
{
    string S = intgtostring(X);
    reverse(all(S));
    return s2ll(S);
}

bool pal(string &S)
{
    ll X = 0, y = len(S);
    for (; X < y / 2; X++)
        if (S[X] != S[y - X - 1])
            return 0;
    return 1;
}
bool pal(string &S, ll X, ll y)
{
    for (; X < y; X++, y--)
        if (S[X] != S[y])
            return 0;
    return 1;
}
string binary(ll X)
{
    string S;
    for (; X; X /= 2)
        S.pb(X % 2 ? '1' : '0');
    reverse(all(S));
    return S;
}
ll decimal(string &S)
{
    ll dm = 0, ct = 1;
    repb(i, len(S) - 1, 0)
    {
        dm += ct * (S[i] == '1');
        ct *= 2;
    }
    return dm;
}

string find_largest_pref_palindrome(const string &a)
{
    string s = a;
    reverse(s.begin(), s.end());
    s = a + "%" + s;
    int c = 0;
    vector<int> pref(2 * ((int)a.size()) + 2);
    for (int i = 1; i < s.size(); i++)
    {
        while (c != 0 && s[i] != s[c])
            c = pref[c - 1];
        if (s[i] == s[c])
            c++;
        pref[i] = c;
    }
    return s.substr(0, c);
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length() - 1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
string twostringdigitsum(string a, string b)
{
    string s = "";
    while (a.size() < b.size())
    {
        a = '0' + a;
    }
    while (a.size() > b.size())
    {
        b = '0' + b;
    }
    ll c = 0;
    for (ll i = a.size() - 1; i >= 0; i--)
    {
        c += (a[i] - '0') + (b[i] - '0');
        s = char((c % 10) + '0') + s;
        c /= 10;
    }
    while (c > 0)
    {
        s = char((c % 10) + '0') + s;
        c /= 10;
    }
    return s;
}
ll stringdigitsum(string digits)
{
    ll num, total = 0;
    for (int i = 0; i < digits.length(); i++)
    {
        num = digits.at(i) - '0';
        assert(0 <= num && num <= 9);
        total += num;
    }
    return total;
}
ll integerdigitsum(ll n)
{
    ll sum = 0;
    while (1)
    {
        if (n < 10)
        {
            sum += n;
            break;
        }
        else
        {
            sum += n % 10;
            n /= 10;
        }
    }
    return sum;
}

///  **************************************** vector (integer) manipulation  ****************************************

int sum() { return 0; }
template <typename T, typename... Args>
T sum(T a, Args... args) { return a + sum(args...); }
ll vsum(vll v, ll s, ll e)
{
    ll S = 0;
    rep(i, s, e) S += v[i];
    return S;
}
ll _sum_(vll &V)
{
    ll S = 0;
    for (ll X : V)
        S += X;
    return S;
}
ll _min_(vll &V)
{
    ll M = V[0];
    for (ll X : V)
        M = min(M, X);
    return M;
}
ll _max_(vll &V)
{
    ll M = V[0];
    for (ll X : V)
        M = max(M, X);
    return M;
}
ll _lcm_(vll &V)
{
    ll G = 0;
    for (ll X : V)
        G = lcm(G, X);
    return G;
}
ll _gcd_(vll &V)
{
    ll G = 0;
    for (ll X : V)
        G = __gcd(G, X);
    return G;
}
ll _xor_(vll &V)
{
    ll G = 0;
    for (ll X : V)
        G ^= X;
    return G;
}
vll _odd_(vll &V)
{
    vll O;
    for (ll X : V)
        if (X % 2)
            O.pb(X);
    return O;
}
vll _even_(vll &V)
{
    vll E;
    for (ll X : V)
        if (!(X % 2))
            E.pb(X);
    return E;
}

// ll count_x = count_if(v.begin(), v.end(), [](ll a) { return (a >= x); }); /// function to count numbers greater than or equal to x
// bool ok = none_of(a.begin(), a.end(), [](ll x) { return x == 9; }); /// true iff all the elements does not follow some condition.
// bool ok = all_of(a.begin(), a.end(), [](ll x) { return x == 9; }); ///true iff all the elements in the range [first, last) follow some condition.
// bool ok = any_of(a.begin(), a.end(), [](ll x) { return x == 9; }); ///true iff any of the elements in the range [first, last) satisfies some condition.

sim > T power(T X, ll y)
{
    T A = (T)1;
    for (; y; y >>= 1, X = (X * X))
        if (y & 1)
            A = (A * X);
    return A;
}
sim > T powerm(T X, ll y, ll M = MOD)
{
    T A = (T)1;
    for (; y; y >>= 1, X = (X * X) % M)
        if (y & 1)
            A = (A * X) % M;
    return A;
}
sim > T inv(T X, ll mod = MOD) { return powerm(X, mod - 2, mod); }

bool isPowerOfTwo(ll x) { return x && (!(x & (x - 1))); }
bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}
ll digNO(ll num) { return floor(log10(num)) + 1; }
int findSqrt(int n)
{
    int lo = 0, hi = n;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (mid * mid <= n)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return lo - 1;
}
ll fib(ll n)
{
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}
bool primeCheck(long long n)
{
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

ll gcd(ll n1, ll n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
ll LCM(ll n1, ll n2)
{
    ll m = max(n1, n2);
    do
    {
        if (m % n1 == 0 && m % n2 == 0)
            return m;
        else
            ++m;
    } while (true);
}

sim > T nc2(T X)
{
    if (X < 2)
        return 0;
    return (X * (X - 1)) / 2;
}
ll nck(ll X, ll K)
{
    if (X < K)
        return 0;
    ll A = 1;
    K = min(K, X - K);
    rep(i, 0, K) A *= (X - i), A /= (i + 1);
    return A;
}
sim > ld dis(T x1, T y1, T x2, T y2) { return sqrt((ld)(x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); }

///****************************************  FACTORIZATION & SIEVE OF ERATOSTHENES ****************************************

ll fact(ll num)
{
    ll fac = 1;
    while (num != 1)
    {
        fac = fac * num;
        num--;
    }
    return fac;
}
vll fac_help(ll X)
{
    vll V;
    for (ll i = 1; i * i <= X; i++)
    {
        if (X % i == 0)
        {
            V.pb(i);
            if (X / i != i)
                V.pb(X / i);
        }
    };
    return V;
}
vll factors(ll X)
{
    vll V = fac_help(X);
    sort(all(V));
    return V;
}
void prime_help(ll &X, ll y, vll &V)
{
    if (X % y == 0)
        V.pb(y);
    while (X % y == 0)
        X /= y;
}
vll primeFac(ll X)
{
    vll V;
    prime_help(X, 2, V);
    for (ll i = 3; i * i <= X; i += 2)
        prime_help(X, i, V);
    if (X != 1)
        V.pb(X);
    return V;
}
vll sieve1(ll L)
{
    vb PR(L += 5, 1);
    vll V;
    for (ll i = 2; i * i < L; i++)
        if (PR[i])
            repi(j, i * i, L + 1, i) PR[j] = 0;
    rep(i, 2, L - 5) if (PR[i]) V.pb(i);
    return V;
}
vb sieve2(ll L)
{
    vb PR(L += 5, 1);
    for (ll i = 2; i * i < L; i++)
        if (PR[i])
            repi(j, i * i, L + 1, i) PR[j] = 0;
    PR[1] = 0;
    return PR;
}

vll input(vll v, ll n)
{
    wh(n--)
    {
        ll a;
        cin >> a;
        v.eb(a);
    }
    return v;
}
void prnt(vll v)
{
    ll n = v.size();
    for (ll i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

bool compare(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; }

const int Max = 1e8;
int status[(Max >> 5) + 2];
bool Check(int n, int pos) { return (bool)(n & (1 << pos)); }
int Set(int n, int pos) { return n = n | (1 << pos); }
vector<ll> primes;
void seive_bitwise()
{
    int sqrtN = sqrt(Max);
    for (int i = 3; i <= sqrtN; i += 2)
    {
        if (Check(status[i >> 5], (i & 31)) == 0)
        {
            for (int j = i * i; j <= Max; j += (i << 1))
            {
                status[j >> 5] = Set(status[j >> 5], (j & 31));
            }
        }
    }
    primes.push_back(2);
    for (ll i = 3; i <= Max; i += 2)
        if (Check(status[i >> 5], i & 31) == 0)
            primes.push_back(i);
}
int exp(int x, unsigned int y, int p){
    int res=1; x=x%p;
    while(y>0){
        if (y&1) res= (res*x)%p; y=y>>1; x=(x*x)%p;
    }
    return res;
}
ll divSum(ll n)
{

int s=0;
    int sq = sqrt(n);
    int inv = exp(2,MOD-2,MOD);
    for (int i = 1; i <= sq; i++) {
        int x = (n/i - n/(i+1))%MOD;
        int r = n/i, l = n/(i+1) + 1;
        s = ( s + x*((l+r)%MOD)%MOD*inv%MOD*i%MOD)%MOD;
    }
    for (int i = 1; i <= n/(sq+1); i++) {
        s = (s + n/i*i) % MOD;
    }

    return s;
}
ll toDec(string s,ll k){ // A function that converts S in base K into its decimal representation
    ll ans=0;
    for(char x:s){
        ans *= k;
        ans += x - '0';
    }
    return ans;
}

vector<pair<ll, ll> > A;
bool cmp(pair<ll, ll>& a,
         pair<ll, ll>& b)
{
    return a.second < b.second;
}

void sortMP(map<ll, ll>& M)
{

    for (auto& it : M) {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
}
bool isPerfectSquare(ll x)
{
    if (x >= 0) {

        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
 string generateTheString(int n) {
        if(n % 2 == 1) return string(n, 'a');
        string ans = string(n-1, 'a');
        ans += 'b';
        return ans;
    }
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

vector<vector<ll>> adj;

// function to initialise
// the adjacency matrix
void init(int n)
{
    for(int i=1;i<=n;i++)
        adj[i][i]=1;
}

// Function to add edge between nodes
void addEdge(ll a,ll b)
{
    adj[a][b]=1;
    adj[b][a]=1;
}

// Function to compute the path
void computePaths(ll n)
{
    // Use Floyd Warshall algorithm
    // to detect if a path exists
    for(ll k = 1; k <= n; k++)
    {
        // Try every vertex as an
        // intermediate vertex
        // to check if a path exists
        for(ll i = 1; i <= n; i++)
            for(ll j = 1; j <= n; j++)
                adj[i][j] = adj[i][j] | (adj[i][k] && adj[k][j]);
    }
}

// Function to check if nodes are reachable
bool isReachable(ll s, ll d)
{
    if (adj[s][d] == 1)
        return true;
    else
        return false;
}


ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll   ttt,a,b, i, d, o, c, g, e, r, j, k, l, f = 0, h = 0, m, n, q, p, t=0, w, cnt;
    string s, s1;
    char cc;
    sf1(ttt);
    while (ttt--)
    {
        cin>>a;
        ll ans=0;

        for(i=1;i*i<=a;i++)
        {
            if(a%i==0)
            {
                s = to_string(i);
                s1=s;
                reverse(all(s));
                if(s==s1) ans++;
                if(a/i!=i)
                {
                    s = to_string(a/i);
                    s1=s;
                    reverse(all(s));
                    if(s==s1) ans++;

                }

            }
        }

        cout<<"Case #"<<++t<<": ";
        cout<<ans<<endl;


    }
}

//Link: https://codingcompetitions.withgoogle.com/kickstart/round/00000000008caa74/0000000000acee89
