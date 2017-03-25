#include <iostream>
#include <sstream>
using namespace std;

string toString(int num)
{
    stringstream ss;
    ss << num;
    return ss.str();
}

int main()
{
    string num1, num2, tempString;
    int n1, n2, length, counter, i, j, temp, l1, l2, t, carry;
    while(cin >> num1 >> num2)
    {
        if (num1[0] == '0' && num2[0] == '0') break;

        l1 = num1.length();
        l2 = num2.length();

        if (l1 > l2) length = l1;
        else length = l2;

        for(counter = t = carry = 0, i = l1 - 1, j = l2 - 1; t < length; i--,j--, t++)
        {
            if (i < 0) temp = 0 + (num2[j] - '0') + carry;

            else if (j  < 0) temp = (num1[i] - '0') + 0 + carry;

            else temp = (num1[i] - '0') + (num2[j] - '0') + carry;

            if (temp > 9)
            {
                counter++;
                tempString = toString(temp);
                carry = tempString[0] - '0';
            }

            else carry = 0;
        }

        if (counter == 0) cout << "No carry operation.\n";
        else if (counter == 1) cout << counter << " carry operation.\n";
        else cout << counter << " carry operations.\n";
    }
    return 0;
}
