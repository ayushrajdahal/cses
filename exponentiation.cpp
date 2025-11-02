#include <iostream>
using namespace std;
typedef long long ll;

const ll MOD = 1e9+7;

ll power(ll base, ll exponent) {
    ll result = 1;
    while (exponent) {
        if (exponent & 1) {
            result = (result * base) % MOD;
        }
        exponent >>= 1;
        base = (base * base) % MOD;
    }
    return result % MOD;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll numberOfInputs, base, exponent;
    cin >> numberOfInputs;
    while (numberOfInputs--) {
        cin >> base >> exponent;
        cout << power(base, exponent) << "\n";
    }
    return 0;
}
