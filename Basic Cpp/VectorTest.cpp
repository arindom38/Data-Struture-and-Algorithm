#include <bits\stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cin >> str;
    s.push(str[0]);
    for (int i = 1; i < str.size(); i++)
    {
        if((s.top() == '(' && str[i] == ')') || (s.top() == '{' && str[i] == '}') || (s.top() == '[' && str[i] == ']') )
        {
            s.pop();
            cout<<"Hello "<<endl;
        }
        else
            s.push(str[i]);
    }

    if (s.empty())
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;

    return 0;
}
