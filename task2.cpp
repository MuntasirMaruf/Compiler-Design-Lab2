#include<iostream>
using namespace std;

void showOperators(string s)
{
    int j =1;
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(c == '+' || c == '-' || c== '*' || c == '%' || c == '=')
        {
            cout<< "Operator " << j++<< ": " << c<<endl;
        }
    }
    if(j==1)
    {
        cout<< "No operators"<< endl;
    }
}

int main()
{
    while(1)
    {
        string s;
        cout<< "Enter an equation: ";
        cin>>s;
        showOperators(s);
        cout<<endl;
    }

    return 0;
}
