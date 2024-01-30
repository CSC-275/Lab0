#include<iostream>
using namespace std;


int main()
{
    int a, b;

    cout <<"Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;
    cout << "\nThe greatest common factor of " << a  <<" and " << b << " is " << gcf(a,b)<< endl;

}
