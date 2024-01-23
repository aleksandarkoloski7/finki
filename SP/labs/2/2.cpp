/* Да се провери дали одреден внесен шестцифрен број е симетричен. Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со претпоследната… 
ример за симетрични броеви: 123321, 805508, 999999. Да се испечати 1 ако е симетричен, 0 ако не е симетричен.
Check if a specific inputted six-digit number is symmetric. This means that the first digit of the number should be the same as the last digit, the second digit should be the same as the second-to-last digit, and so on. 
For example, symmetric numbers are 123321, 805508, and 999999. If the number is symmetric, print 1, and if it's not symmetric print 0.
For example:
Input	Result
103301
1 
*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%10 == n/100000 && n/10%10 == n/10000%10 && n/1000%10 == n/100%10 )
  cout<<1;
  else
  cout<<0;
  return 0;
}
