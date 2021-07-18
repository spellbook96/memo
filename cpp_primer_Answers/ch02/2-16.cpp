#include <iostream>

int main(void)
{
  using namespace std;

  int i =0;
  int &r1 = i;

  double d =0;
  double &r2=d;

  i = r2;
  cout << i << endl;

  r2 = r1;
  cout << r2 << endl;

  return 0;
}