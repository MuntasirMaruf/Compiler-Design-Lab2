#include <iostream>
#include <sstream>
using namespace std;

bool isNumericConstant(string s)
{
    if((s[0] == '-' || s[0] == '+' || s[0] == '.') && s.length() == 1)
    {
        return false;
    }
    else
    {
        for(int i= 0; i<s.length(); i++)
        {
            if(s[i] == '-' || s[i] == '+' || s[i] == '.')
            {
                i++;
            }
            if(!isdigit(s[i]))
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    while(1)
    {
        string s;
        cout << "Enter a value to check it is numeric or not: ";
        cin>>s;
        if(isNumericConstant(s))
        {
            cout<< "Numeric Constant"<<endl<<endl;
        }
        else
        {
            cout<< "Not Numeric"<<endl<<endl;
        }
    }

    return 0;
}

