#include <iostream>
#include <fstream>
#include <cstdlib>

using std::ifstream;
using std::ofstream;
using std::cout;

int main(){
  ifstream fin;
  ofstream fout;

  fin.open("input.txt");
  if (fin.fail()){
    cout << "Input file opening failed.\n";
    exit(1);
  }

  fout.open("output.txt");
  if(fout.fail()){
    cout << "Ouput file opening failed\n";
    exit(1);
  }

  std::string a,b,c;
  fin >> a >> b >> c;
  fout << a << "," << b << "," << c << std::endl;

  fin.close();
  fout.close();

  return 0;
}
