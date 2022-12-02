#include <iostream>
#include <stack>
using namespace std;

int main() {
    int t;
    cin >> t;
    stack <int> a;
    while (t--) {
        long long int n;
        cin >> n;
        while (n!=0) {
            a.push(n%2);
            n/=2;
        }
        while(a.empty() != true) {
            cout << a.top();
            a.pop();
        }
        cout << endl;
    }
    return 0;
}