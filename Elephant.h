#include <string>
class Elephant {
public:
  //Got to have a name
  std::string name_;
  //Weight could be huge, so we'll make it a long int
  long int weight_;
  //I'm pretty sure elephants like bananas
  long int bananas_eaten_;
  //Disallow default construction
  Elephant();
  //Constructor
  Elephant(const std::string& name, long int weight, long int bananas_eaten) {
    name_ = name;
    weight_ = weight;
    bananas_eaten_ = bananas_eaten;
  }
};


