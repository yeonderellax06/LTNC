#include<iostream>

using namespace std;

int main(){
    int n,k,i,j;
    cin >> n;
    int a[n+1];
    for (i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    for (i = 0; i < n-1; i++)
        for (j = i+1; j < n; j++)
        if (a[i] + a[j] == k) cout << a[i] << " " << a[j] << endl;
    return 0;

}
