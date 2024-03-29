/* Leetcode Problem no: 20 (Easy) */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack <char> s;
        int len = str.length();

        for(int i=0; i<len; i++){
            if(str[i] == '(' || str[i] == '{' || str[i] == '['){
                s.push(str[i]);
            }
            else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
                if(s.empty())
                    return false;
                else if(str[i] == ')' && s.top() != '(')
                    return false;
                else if(str[i] == '}' && s.top() != '{')
                    return false;
                else if(str[i] == ']' && s.top() != '[')
                    return false;
                else
                    s.pop();
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};

int main() {
    Solution sol;
    string input = "{[()]}";

    if(sol.isValid(input)){
        cout << input << " is valid" << endl;
    }else{
        cout << input << " is not valid" << endl;
    }

    return 0;
}
