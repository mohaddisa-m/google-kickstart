#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cout << "Case #" << i << ": ";
        int z = 0;
        cin >> z;

        string s ;
        cin >> s;
        int ans = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]>s[i-1])
            {
                ans++;
            } else {
                ans = 1;
            }
            cout<< ans << " ";
        }
        cout << "\n";
    }
}