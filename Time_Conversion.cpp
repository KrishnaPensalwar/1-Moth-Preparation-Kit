#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string timeConversion(string s) {
    int a = stoi(s.substr(0, 2));
    string b = s.substr(8, 2);
    
    if(a==12 && b=="AM"){
        s.replace(0,2, "00");
    }
    if(a<12 && b=="PM"){
        int ab = a+12;
        s.replace(0,2, to_string(ab));
    }
    s.erase(8,2);
    
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
