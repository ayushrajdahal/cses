#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll numberOfInputs, x;
    set<ll> prevInputs;

    cin >> numberOfInputs;

    while (numberOfInputs--) {
        cin >> x;
        prevInputs.insert(x);
    }
    cout << prevInputs.size() << "\n";
    return 0;
}
