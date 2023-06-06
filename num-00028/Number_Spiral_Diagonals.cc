#include <iostream>
using namespace std;

// defining the series
unsigned series( unsigned &L ) {

  unsigned M = 1;
  if ( L < 3 ) 
    return M;

  for( unsigned k=3; k <= L; k+=2 )
    for( unsigned i=1; i < 5; i++ )
      M += (k-1) * i + (k-2)*(k-2);
  
  return M;
}

// main function
int main() {
  unsigned L = 1001;
  cout << series( L ) << endl;
}
