#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> my_vector;
  int sum (0);
  my_vector.push_back (100);
  my_vector.push_back (200);
  my_vector.push_back (300);

  while (!my_vector.empty())
  {
    sum+=my_vector.back();
    my_vector.pop_back();
  }

  std::cout << "The elements of my_vector add up to " << sum << std::endl;

  return 0;
}
