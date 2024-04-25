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
    
    vector<int> a;
    int num;
    for (int i = 0; i<n; i++) {
        cin >> num;
        a.push_back(num);
    }
    
    sort(a.begin(), a.end());
    for (int i = 0; i<a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
