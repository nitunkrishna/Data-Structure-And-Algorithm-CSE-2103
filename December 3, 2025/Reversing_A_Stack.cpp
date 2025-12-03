#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string>st;
    st.push("Rahim");
    st.push("Karim");
    st.push("Shyam");
    st.push("Jodu");
    stack<string>temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }
    return 0;
}