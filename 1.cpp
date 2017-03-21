#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    int min = a[0][n - 1];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j && max < a[i][j]){
                max = a[i][j];
            }
            if (j == n - 1 - i && min > a[i][j]){
                min = a[i][j];
            }
        }
    }
    if (max  - min > 0){
        cout << 1;
    } else {
        if (max == min){
            cout << 0;
        } else {
            cout << -1;
        }
    }
    return 0;
}
