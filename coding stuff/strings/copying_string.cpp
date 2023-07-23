#include <iostream>
using namespace std;

void copyCharArray(const char* source, char* destination, int length) {
  for (int i = 0; i < length; ++i) {
    destination[i] = source[i];
  }
}

int main() {
  char source[] = {'a', 'b', '\0'};
  int length = sizeof(source) / sizeof(source[0]);
  char destination[length];

  cout << "length : " << length << endl; 

  copyCharArray(source, destination, length);

  cout << "Source: ";
  for (int i = 0; i < length; ++i) {
    cout << source[i] << " ";
  }
  cout << endl;

  cout << "Destination: ";
  for (int i = 0; i < length; ++i) {
    cout << destination[i] << " ";
  }
  cout << endl;



  return 0;
}
