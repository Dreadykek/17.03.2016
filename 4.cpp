#include <iostream>

using namespace std;

long long lastIn(const string &s, const string &p) {

    long long con = p.length() - 1;

    for (long long i = s.length() - 1; i >= 0; --i)
        if (s[i] == p[con]) {
            --con;
            if (con == -1)
                return i;
        }
        else {
            con = p.length() - 1;
        }
}

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    cout << lastIn(s, p) << endl;
    return 0;
}
