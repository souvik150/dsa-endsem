#include<bits/stdc++.h>
using namespace std;

bool checkRedundantBrackets(string expression) {

    stack<char> st;
    int count=0;

    for(int i=0;i<expression.size();i++){

        if(expression[i]==')'){
            count=0;

            while(st.top()!='('){
                count++;
                st.pop();
            }

            st.pop();
            if(count<2) return true;
        }
        else
            st.push(expression[i]);
    }
    return false;
}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}
