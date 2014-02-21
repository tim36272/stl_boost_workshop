#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

void myfunction (int i) {  // function:
  std::cout << ' ' << i;
}

struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}
} myobject;

int main () {
  std::vector<int> my_vector;
  my_vector.push_back(10);
  my_vector.push_back(20);
  my_vector.push_back(30);

  std::cout << "my_vector contains:";
  for_each (my_vector.begin(), my_vector.end(), myfunction);
  std::cout << std::endl;

  // or:
  std::cout << "my_vector contains:";
  for_each (my_vector.begin(), my_vector.end(), myobject);
  std::cout << std::endl;

  return 0;
}
