// CPP program to find (a^b) % MOD where a and
// b may be very large and represented as strings.
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll MOD = 1e9 + 7;

// Returns modulo exponentiation for two numbers
// represented as long long int. It is used by
// powerStrings(). Its complexity is log(n)
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}

// Returns modulo exponentiation for two numbers
// represented as strings. It is used by
// powerStrings()

int main()
{
    // As numbers are very large
    // that is it may contains upto
    // 10^6 digits. So, we use string.
    int n;
    cin>> n;

    cout << powerLL(2,n) << endl;
    return 0;
}
