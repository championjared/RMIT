#include <iostream>

int rBinMap(std::string filename)
{
  std::cout << "Input File: " << filename << "\n";

  return 0;
}


//Main Init Function
int main(int argc, char **argv)
{

  //read in cmd arguments
  for(int i = 1; i < argc; ++i)
  {
    std::string s = argv[i];
    if(s.compare("-f") == 0)
    {
      rBinMap(argv[i+1]);
    }
  }


  return 0;
}
