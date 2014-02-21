#include <iostream>
#include <map>

int main ()
{
  std::map<char,int> my_map;
  std::map<char,int>::iterator it;

  // insert some values:
  my_map['a']=10;
  my_map['b']=20;
  my_map['c']=30;
  my_map['d']=40;
  my_map['e']=50;
  my_map['f']=60;

  it=my_map.find('b');
  my_map.erase (it);                   // erasing by iterator

  my_map.erase ('c');                  // erasing by key

  it=my_map.find ('e');
  my_map.erase ( it, my_map.end() );    // erasing by range

  // show content:
  for (it=my_map.begin(); it!=my_map.end(); ++it)
    std::cout << it->first << " => " << it->second << std::endl;

  return 0;
}
