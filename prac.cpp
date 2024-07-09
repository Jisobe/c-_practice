#include <iostream>
using namespace std;

int main() {
   int* cucumbersOrdered = nullptr;
   int numBarrels;
   int i;

   cin >> numBarrels;


   cucumbersOrdered = new int[numBarrels];

  cout << cucumbersOrdered;
   
  //  for(i=0; i<numBarrels; i++){
  //     cin >> cucumbersOrdered[i];
  //  }
   
   delete[] cucumbersOrdered;

   return 0;
}