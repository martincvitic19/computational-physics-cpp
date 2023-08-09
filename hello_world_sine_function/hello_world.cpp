#include <cstdlib>  
#include <iostream> 
#include <cmath>
using namespace std;
int main (int argc, char* argv[])
{

  double r = atof(argv[1]);  
  if (r < 0 || r > 1)
  {
  	cout << "Error: Invalid input - input should be x = [0, 1]; x e Z" << endl;
  }
  else
  {
    	double s = sin(r);
    	cout << "Hello, World! sin(" << r << ") = " << s << endl;
  }

  return 0;           
}

