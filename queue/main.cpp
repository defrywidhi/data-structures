#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
  Queue q;

  q.enqueue(11);
  q.enqueue(22);
  q.enqueue(33);
  q.enqueue(44);
  q.enqueue(55);

  q.printElements();

  cout << "Front Element : " << q.front() << endl;

  cout << "Dequeued Element : " << q.dequeue() << endl;

  q.printElements();

  return 0;
}