#include <iostream>
using namespace std;

int binary_to_decimal(string str);

int main()
{
    cout<<binary_to_decimal("10001000")<<endl;
    return 0;
}

int binary_to_decimal(string str)
{
    int resultFinal = 0, result = 1, counter = 0;
    counter = str.length()-1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            for (int j = 0; j < counter; j++)
            {
                result = result * 2;
            }
            resultFinal += result;
            result = 1;
        }
        counter--;
    }

    return resultFinal;
}