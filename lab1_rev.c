#include <cstring>
#include <iostream>
#include <algorithm>

//int argc :: integer number of supplied arguments
//char **argv :: pointer to array of pointers to arguments
int main(int argc, char ** argv)
{
  // *Nix system argv[0] is prog name
  for(int i = 1; i < argc; ++i)
  {
    std::string s = argv[i];
    fprintf(stdout, argv[i]);
    fprintf(stdout, "\n");
    std::reverse(s.begin(), s.end());
    std::cout << s << "\n";
 }

  return EXIT_SUCCESS;
}
