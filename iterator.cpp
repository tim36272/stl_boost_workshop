#include <iostream>
#include <vector>

int main ()
{
  std::vector<int> my_vector;
  int sum (0);
  my_vector.push_back (100);
  my_vector.push_back (200);
  my_vector.push_back (300);

  std::vector<int>::iterator my_vector_it = my_vector.begin();

  while (my_vector_it != my_vector.end())
  {
    sum += *my_vector_it;
  }

  std::cout << "The elements of my_vector add up to " << sum << std::endl;

  return 0;
}
