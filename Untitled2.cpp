
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[m];
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    sort(a, a+m);
    
    int i = 0;
    
    while(i < m -1) {
        int sum = a[i] + a[m-1];
        if(sum == n) {
            cout << a[i] << " " << a[m-1];
            return 0;
        } else {
            if(sum > n) {
                m = m - 1;
            } else {
                i++;
            }
        }
    }
    
    cout << a[i] << " " << a[m];

}

