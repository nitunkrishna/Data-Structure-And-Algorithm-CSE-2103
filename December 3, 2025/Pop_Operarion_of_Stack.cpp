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
    cout << st.top() << endl;
    cout << st.size() << endl;
    while(!st.empty())
    {
        cout << "Removing " << st.top() << endl;;
        st.pop();
    }
    return 0;
}