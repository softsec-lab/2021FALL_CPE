#include <iostream>
using namespace std;

template<class T>
void swapValues( T& var1, T& var2 )
{
  cout << "swapValues template" << endl;
  T temp = var1;
  var1 = var2;
  var2 = temp;
}

//template<class T, class N>
template<class T, int N>
              //int(&var) [5];
void swapValues( T (&var1)[N], T (&var2)[N] )
{
  cout << "swapValues template for arrays" << endl;
  for(int i=0; i<N; i++) {
    T temp = var1[i];
    var1[i] = var2[i];
    var2[i] = temp;
  }
}

int main(){
  int arr1[3] = {1,2,3};
  int arr2[3] = {5,6,7};

  swapValues(arr1,arr2);

  for(int i =0; i<3; i++){
    cout << "arr1: " << arr1[i] << ", arr2: " << arr2[i] << endl;
  }

  double arrd1[3] = {1.1,2.2,3.5};
  double arrd2[3] = {5.5,6.6,7.7};

  swapValues(arrd1,arrd2);

  for(int i =0; i<3; i++){
    cout << "arrd1: " << arrd1[i] << ", arrd2: " << arrd2[i] << endl;
  }

  return 0;
}
