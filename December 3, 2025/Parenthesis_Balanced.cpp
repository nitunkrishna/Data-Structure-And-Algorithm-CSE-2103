// Check wheather the parenthesis is balanted or not

#include<iostream>
#include<stack>

using namespace std;

bool balance(string s)
{
    stack<char> st;

    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(c=='('||c=='{'||c=='[')
            st.push(c);
        else if(c==')'||c=='}'||c==']')
        {
            if(st.empty())
                return false;
            char top=st.top();
            st.pop();
            if((c==')' && top != '(') || (c =='}' && top!='{') ||  (c==']' && top!='['))
                return false;
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;

    if(balance(s))
        cout << "Balanced"<<endl;
    else
        cout << "Not Balanced"<<endl;

    return 0;
}