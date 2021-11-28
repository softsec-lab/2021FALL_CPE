#include <iostream>
#include <vector>
using namespace std;

int main(){ 

  vector<char> container;
  container.push_back('A');
  container.push_back('B');
  container.push_back('C');
  container.push_back('D');

  for (auto it = container.begin(); it != container.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << "Print in a reverse order\n";
  // What happens with the below line?
 // for (auto it = container.end(); it != container.begin(); it--)
  for (vector<char>::reverse_iterator it = container.rbegin(); it != container.rend(); it++)
  for (auto it = container.rbegin(); it != container.rend(); it++)
    cout << *it << " ";
  cout << endl;

  return 0;

}
