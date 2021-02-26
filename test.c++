#include <iostream>
using namespace std;

int main()
{
    int i,n;
    int Prime = true;
    cout << "Enter A Positive Number : ";
    cin >> n;
    if(n==0 || n==1)
    {
        Prime = false;
    }
    for(i=2; i<n/2; i++)
    {
        if(n % i == 0)
        {
            Prime = false;
            break;
        }
    }
    if(Prime)
    {
        cout << n << " Is A Prime Number" << endl;
    }
    else{
        cout << n << " Is Not A Prime Number" << endl;
    }
}