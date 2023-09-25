#include <iostream>
using namespace std;
int main()
{
     int Age;
     cout << "Enter the Age  :--> ";
     cin >> Age;
     if(Age > 18)
     {
          cout << "The person is eligible for driving license ";
     }
     else
     {
          cout << "The person is not eligible for driving license";
     }
     return 0;
}
