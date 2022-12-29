#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//the fastest Prime_Check
bool Prime(int n)
{
     if (n == 2)
          return true;
     if (n < 2 || n % 2 == 0)
          return false;
     for (int i = 3; i <= sqrt(n); i += 2)
     {
          if (n % i == 0)
          {
               return false;
               break;
          }
     }
     return true;
}

// main
int main(int argc, char const *argv[])
{
     /*code*/
     return 0;
}