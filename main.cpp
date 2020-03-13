#include <iostream>
#include <vector>

using namespace std;

int modpower(int base, int exponent, int number)
{
    int temp;
    if (exponent == 0)


        return 1;
    else if (exponent == 1)
    {
        temp = base % number;
        return temp;
    }
    for (int index = 1; index < power; index * 2)
    {
        if (exponent % 2 != 0) {

        }
    }
    return
}

int main()
{
    int base, power, mod;
    cout << "Enter the base: ";
    cin >> base;
    do
    {
        cout << "Enter a base larger than 0." << endl;
        cout << "Enter the base: ";
        cin >> base;
    } while (base < 0);
    cout << "Enter the power: ";
    cin >> power;
    cout << "Enter the mod: ";
    cin >> mod;
    modpower(base, power, mod);



    return 0;
}

/*
function mpmod(base, exponent, modulus) {
  if ((base < 1) || (exponent < 0) || (modulus < 1)) {
    return("invalid");
  }
  result = 1;
  while (exponent > 0) {
    if ((exponent % 2) == 1) {
      result = (result * base) % modulus;
    }
    base = (base * base) % modulus;
    exponent = Math.floor(exponent / 2);
  }
return (result);
}

function eulerphi(x) {
  result = 0;
  for (i = 1; i < x; i++) {
    if (isunit(i,x)) {
      result++;
    }
  }
  return (result);
}
*/
