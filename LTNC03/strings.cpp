#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a;
  string b;
  cin >> a >> b;
  string c;
  char d;
  c = a + b;
  int x = 0;
  int y = 0;
  for(char t : a){x = x + 1;}
  for(char u : b){y = y + 1;}
  d = a[0];
  a[0] = b[0];
  b[0] = d;
  cout << x << " " << y << endl << c << endl << a << " " << b;
  
    return 0;
}
