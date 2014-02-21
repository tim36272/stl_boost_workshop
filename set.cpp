#include <iostream>
#include <set>

int main ()
{
  std::set<int> my_set;
  std::set<int>::iterator it;
  std::pair<std::set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; ++i) my_set.insert(i*10);    // set: 10 20 30 40 50

  ret = my_set.insert(20);               // no new element inserted

  if (ret.second==false) {
    it=ret.first;  // "it" now points to element 20
  } else {
    it=my_set.begin();
  }


  my_set.insert (it,25);                 // max efficiency inserting
  my_set.insert (it,24);                 // max efficiency inserting
  my_set.insert (it,26);                 // no max efficiency inserting

  std::cout << "my_set contains:";
  for (it=my_set.begin(); it!=my_set.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  return 0;
}
