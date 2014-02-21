#include <iostream>
#include <vector>
#include <memory>

#include "Elephant.h"

int main() {
  //We're starting a circus so we need a lot of Elephants
  std::vector<Elephant> circus;

  //let's put some elephants into the circus
  circus.push_back(Elephant("Dumbo",10000,10000));
  circus.push_back(Elephant("Monique",5000,3000));
  circus.push_back(Elephant("Sasha",7000,3500));
  circus.push_back(Elephant("Joel",999999,888888));

  //What happens when we clone the vector?
  std::vector<Elephant> different_circus = circus;

  //We just made coppies of all four Elephants! Oh no!
  //What if our circuses shared the exact same Elephants?
  std::vector<std::shared_ptr<Elephant>> original_circus,second_circus;

  original_circus.push_back(std::shared_ptr<Elephant>(new Elephant("Dumbo",10000,10000)));
  original_circus.push_back(std::shared_ptr<Elephant>(new Elephant("Monique",5000,3000)));
  original_circus.push_back(std::shared_ptr<Elephant>(new Elephant("Sasha",7000,3500)));
  original_circus.push_back(std::shared_ptr<Elephant>(new Elephant("Joel",999999,888888)));

  //What actually gets cloned here? The elephants or the pointers?
  second_circus = original_circus;

  //The pointers! No more cloning elephants! Yay!
  (original_circus[0])->weight_ = 10001;
  std::cout<<"Dumbo's new weight: "<<(second_circus[0])->weight_<<std::endl;

  return 0;
}
