#if 1
#include <iostream>
using namespace std;

int main()
{
int arr[5] = { 1, 2, 3, 4, 5 };
int *ptr = arr;
int (*ptr2)[5] = &arr;
int (&ptr3)[5] = arr;

cout << "sizeof(ptr) = "<< sizeof(ptr) << ", sizeof(*ptr) = " << sizeof(*ptr) << endl;
cout << "sizeof(ptr2) = "<< sizeof(ptr2) << ", sizeof(*ptr2) = " << sizeof(*ptr2) << endl;

cout <<"\n"<< ptr << endl;
cout << ptr[0] << endl;
cout << ptr[1] << endl;

cout << "++++++++++++" << endl;
cout << (*ptr2)[0] << endl;
cout << (*ptr2)[1] << endl;

cout << "++++++++++++" << endl;
cout << ptr3[0] << endl;
cout << ptr3[1] << endl;
return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;

int a = 1;
int b = 2;
int c = 3;

int main(){

  auto& arr1 = (int (&)[3])a;
  int (&arr2)[3] = (int(&)[3])a;

  for (int i =0; i<3; i++){
    cout << arr1[i] << endl;
    cout << arr2[i] << endl;
  }
}
#endif
