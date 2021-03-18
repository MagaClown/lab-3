#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
  float result;
  int n;

  cout << "Input variable: ";
  cin >> n;

  switch (n){
    case 1:{
      double a = 0.8, b = 1.1, x = 0.05, z;

      while (x <= 0.5) {
      	z = log (b * pow(x, 3));
      

        if (x < a)
        
        {
          result = 2.8 * pow(sin(a * x), 2) - b * pow(x,3) * z ;
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((a <= x) && (x <= pow(b,2)))
        {
          result = z * cos(pow((a * x + b),2)) + log(z);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if (x > pow(b,2))
        {
          result = exp (2.5 * a *x) + z * a * b *x;
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
        x += 0.05;
      }

      cout << "Completed" << endl;
      break;
    }
    case 2: {
      double a = 2.2, b = 1.3, z, x = 1;

      do{
        z = log(b*x);

        if (x < a)
        {
          result = 2.8 * pow(sin(a * x), 2) - b * pow(x,3) * z ;
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((a <= x) && (x <= pow(b,2)))
        {
          result = z * cos (pow((a * x + b),2)) + log(z);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if (x > pow(b,2))
        {
          result = exp (2.5 * a *x) + z * a * b *x;
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
        x += 0.2;
      } while (x <= 3);

      cout << "Completed" << endl;
      break;
    }
    case 3: {
      double a = 3.2, b = 1.5, z, x;

      for (x = 3.6; x <= 10; x += 0.4) {
        z = log (b * pow(x, 3));
        if (x < a)
        {
          result = 2.8 * pow(sin(a * x), 2) - b * pow(x,3) * z;
          cout << "X: " << x << " If Number: 1, and result: " << result << endl;
        }
        else if ((a <= x) && (x <= pow(b,2)))
        {
          result = z * cos (pow((a * x + b),2)) + log(z);
          cout << "X: " << x << " If Number: 2, and result: " << result << endl;
        }
        else if ((x > pow(b,2)))
        {
          result = exp (2.5 * a *x) + z * a * b *x;
          cout << "X: " << x << " If Number: 3, and result: " << result << endl;
        }
      }

      cout << "Completed" << endl;
      break;
    }
    default:
      cout << "Not supported variable, try more.";
      break;
  }
  return 0;
}
