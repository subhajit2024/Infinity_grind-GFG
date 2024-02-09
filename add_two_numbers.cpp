#include<iostream>
using namespace std;


bool isPowerOfTwo(int n) {
        switch (n) {
            case 0:
            case 1:
                return n == 1;
            case -1:
                return false;
            default:
                return (n % 2 == 0) && isPowerOfTwo(n / 2);
        }
}

int main()
{
    int  num;
    cin>>num;
    if (isPowerOfTwo(num))
        cout << "Yes";
    else
        cout << "No";
  	return 0;
}