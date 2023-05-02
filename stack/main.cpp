#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  Stack s;

  s.push(11);
  s.push(22);
  s.push(33);
  s.push(44);
  s.push(55);

  s.printElements();

  cout << "Top Element : " << s.top() << endl;

  cout << "Popped Element : " << s.pop() << endl;

  s.printElements();

  return 0;
}