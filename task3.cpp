#include<iostream>
using namespace std;

bool isSingleLine(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(c == '/')
        {
            if(s[i+1] == '/')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool isMultiLine(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(c == '/')
        {
            if(s[i+1] == '*')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

bool isComplete(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        if(s[i-1] != '/' && c == '*')
        {
            if(s[i+1] == '/')
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
int main()
{
    while(1)
    {
        string s;
        cout<< "Enter a line: ";
        cin>>s;

        if(isSingleLine(s))
        {
            cout<< "Single line comment"<<endl<<endl;
        }
        else if(isMultiLine(s))
        {
            if(isComplete(s))
            {
                cout<< "Multiline comment"<<endl<<endl;
            }
            else
            {
                cout<< "Multiline comment without end"<<endl<<endl;
            }
        }
        else
        {
            cout<< "Invalid comment"<<endl<<endl;
        }
    }
    return 0;
}

