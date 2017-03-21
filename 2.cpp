#include <iostream>
#include <cmath>

using namespace std;

double sqr (double R){
    double pi = 3.1415;
    return pi * R * R;
}

int main(){
    double A;
    double s1, s2;
    cin >> A;
    s1 = sqr (A / 2);
    s2 = sqr (sqrt(2) * A / 2);
    cout << s2 - s1;
    return 0;
}
