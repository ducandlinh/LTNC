#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char h[4];
     h[2] = s[8];
    if(h[2] == 'P'){h[0] = s[0] ; h[1] = s[1];
              if(h[0] == '1' && h[1] == '2'){s[0] = '1'; s[1] = '2'; s[8] = s[9] = ' ';  
              return s;}
              if(h[0] == '0' && h[1] == '1'){s[0] = '1'; s[1] = '3'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '0' && h[1] == '2'){s[0] = '1'; s[1] = '4'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '0' && h[1] == '3'){s[0] = '1'; s[1] = '5'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '0' && h[1] == '4'){s[0] = '1'; s[1] = '6'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '0' && h[1] == '5'){s[0] = '1'; s[1] = '7'; s[8] = s[9] = ' ';
              
              return s;}
            if(h[0] == '0' && h[1] == '6'){s[0] = '1'; s[1] = '8'; s[8] = s[9] = ' ';
              
              return s;}
            if(h[0] == '0' && h[1] == '7'){s[0] = '1'; s[1] = '9'; s[8] = s[9] = ' ';
              
              return s;}
             if(h[0] == '0' && h[1] == '8'){s[0] = '2'; s[1] = '0'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '0' && h[1] == '9'){s[0] = '2'; s[1] = '1'; s[8] = s[9] = ' ';
              
              return s;}
            if(h[0] == '1' && h[1] == '0'){s[0] = '2'; s[1] = '2'; s[8] = s[9] = ' ';
              
              return s;}
              if(h[0] == '1' && h[1] == '1'){s[0] = '2'; s[1] = '3'; s[8] = s[9] = ' ';
              return s;}
     
} 
if(s[0]== '1' && s[1]=='2'){s[8] = s[9] = ' '; s[0]='0';s[1]='0'; return s;}
s[8] = s[9] = ' ';
return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
