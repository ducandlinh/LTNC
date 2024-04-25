#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    
    int arr1[n+1];
    for (int j = 0; j<n+1; j++) {
        cin >> arr1[j];
    }
    
    int result = 0;
    for (int i = 0; i<n; i++) {
        result ^= arr[i];
    }
    for (int j = 0; j<n+1; j++) {
        result ^= arr1[j];
    }
    
    cout << result << endl;
    return 0;
}
