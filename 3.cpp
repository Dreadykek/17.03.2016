#include <iostream>

using namespace std;

bool pro(int n){
    if (n == 1){
        return true;
    } else {
        while (n != 1){
            if (n % 13 != 0){
                return false;
            }
            n = n / 13;
        }
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    if (pro(n) == false){
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
