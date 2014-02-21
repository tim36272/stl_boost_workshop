#include <iostream>
#include <list>

int main ()
{
  std::list<int> my_list;
  int sum (0);
  my_list.push_back (100);
  my_list.push_back (200);
  my_list.push_back (300);

  while (!my_list.empty())
  {
    sum+=my_list.back();
    my_list.pop_back();
  }

  std::cout << "The elements of my_list summed " << sum << std::endl;

  return 0;
}
