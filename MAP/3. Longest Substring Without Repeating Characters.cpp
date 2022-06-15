#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Brute-Force


// Leetcode Solutions.
int LongestSubstring(string s)
{
	int ans = 0, cnt = 0, prev = 0;
        map<char,int> m;
    
        for(int i = 0; i < s.size(); i++){
            if( m[s[i]] == 0 ) cnt++;
            else {
                ans = max(ans,cnt);
                prev = max(prev, m[s[i]]);
                cnt = (i+1) - prev;
            }
            m[s[i]] = i+1;
        }
        ans = max(ans,cnt);
        
        return ans;
}

int main()
{
	string str = "abcabcbb";
	cout<<LongestSubstring(str);
	
	return 0;
}
