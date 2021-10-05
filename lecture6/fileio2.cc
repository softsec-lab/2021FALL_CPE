#include <iostream>
#include <fstream>
#include <cstdlib>

using std::ifstream;
using std::ofstream;
using std::cout;

int main(){
  ifstream fin;
  ofstream fout;

  fin.open("story.txt");
  if (fin.fail()){
    cout << "Input file opening failed.\n";
    exit(1);
  }

  fout.open("numstory.txt");
  if(fout.fail()){
    cout << "Ouput file opening failed\n";
    exit(1);
  }

  char next;
  int n = 1;

  fin.get(next);
  fout << n << " ";

  while(!fin.eof()){
    fout << next;
    if(next == '\n'){
      n++;
      fout << n << ' ';
    }
    fin.get(next);
  }

  fin.close();
  fout.close();

  return 0;
}
