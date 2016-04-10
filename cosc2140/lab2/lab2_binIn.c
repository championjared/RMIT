#include <iostream>

int main(int argc, char **argv)
{

  //read in cmd arguments
  for(int i = 1; i < argc; ++i)
  {
    //cast as string so can use string sub-functions
    std::string s = argv[i];

    //if difference is 0, str are identical
    //_-- On flag match, init task
    if(s.compare("-f") == 0)
    {
      std::cout << "Input File: " << argv[i + 1] << "\n";
    }
  }

  return 0;
}
