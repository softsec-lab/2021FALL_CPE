#include "Entry.h"
#include "Directory.h"
#include "File.h"

#include <sstream>
#include <string>

//This function finds directory with the given name(2nd argument) from the given path(1st argument)
//For example below finds "world" directory from the root directory
//find_directory(&root, "world");
Entry* find_directory(Directory* root, const std::string& path)
{
    //Implement your code here.
    //Leverage find member function.
    //...
}

void exec_cmd(Directory* root,std::string cmd)
{
  //*****Do NOT MODIFY START*****
  std::istringstream iss1(cmd),iss2(cmd);
  std::string token;
  std::getline(iss2,token,' ');
  std::getline(iss1,token,' ');
  //*****DO NOT MODIFY END*****

  //Implement your code here
  //...
}


int main()
{
  //*****Do NOT MODIFY START*****
    Directory root("root");
    root.add(new Directory("hello"));
    std::cout << root << std::endl; //this prints all the directories and files in root directory. (the result of tree command)

    std::string inputBuffer;
    while(1){
      std::getline(std::cin,inputBuffer);
      if(inputBuffer.compare("quit")==0) break;
      exec_cmd(&root,inputBuffer);
    }
  //*****DO NOT MODIFY END*****

}
