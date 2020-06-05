// Example program
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char IP[16];
  bool res = true;
  cin >> IP;
  char *dot = strtok(IP,".");
  while (dot != NULL) {
      if ( atoi(dot) >255) {
      res = false;
break; }
if (atoi(dot) < 0) {
 res = false;
break; }

dot = strtok(NULL,".");
  }
  cout << res;
  return 0;
      
}
