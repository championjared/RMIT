#include <iostream>

int main(int argc, char ** argv)
{
  for(int i = 1; i < argc; ++i)
  {
    // pointer is created to pass to strtol() [why]?
    char * ptr;
    std::string s = argv[i];
    std::cout << s << "\n";

    //convert string as binary to integer
    long l = strtol(argv[i], &ptr, 2);
    std::cout << "Int: " << l << "\n";
  }

 return EXIT_SUCCESS;
}
