// Practice session: GCD, power and more.

// // find the gcd of two numbers
#include <iostream>
using namespace std;

// int main(){
//     int n1,n2,temp; cin>>n1>>n2;
//     while(n2 != 0){
//     temp = n1 % n2;
//     n1 = n2;
//     n2 = temp;
//     }
//     cout<<n1;
// }

// int power(int base, int exp){
//     if(exp == 0)
//         return 1;
//     else
//         return base * power(base, exp - 1);
// }
int Power(int base, int power)
{
    if (power == 0)
        return 1;
    else if (power % 2 == 0)
        return Power(base, power / 2) * Power(base, power / 2);
    else
        return base * Power(base, power / 2) * Power(base, power / 2);
}
int main()
{
    int base, power;
    cin >> base >> power;
    cout << Power(base, power);
}