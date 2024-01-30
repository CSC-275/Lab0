#include<iostream>

using namespace std;

int GCF(int a, int b);

int main()
{
    int a, b;

    cout <<" Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;
    cout << "\n\n The greatest common factor of " << a  <<" and " << b << " is " << GCF(a,b)<< endl;

}
