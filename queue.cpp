#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue

int main ()
{
  std::queue<int> my_queue;

  my_queue.push(100);
  my_queue.push(200);
  my_queue.push(300);

  std::cout << "my_queue contains: ";
  while (!my_queue.empty())
  {
    std::cout << ' ' << my_queue.front();
    my_queue.pop();
  }
  std::cout << std::endl;

  return 0;
}
