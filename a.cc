#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >>t;
    for (int case_num = 1; case_num<=t; case_num ++){
        int N , K; 
        cin >>N>>K;
        string s;
        cin >> s;
    int cur_score = 0;
    for (int i = 0; i < N/2; i++)
    {
        cur_score += (s[i]!=s[N-1-i]);
    }
    cout << "Case #" << case_num <<": " << abs(cur_score-K)<< endl;   
    }
    return 0;
}