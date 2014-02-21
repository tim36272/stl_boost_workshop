#include <boost/smart_ptr/shared_ptr.hpp>

struct C { int a; int b; };

int main () {
  boost::shared_ptr<C> foo;
  boost::shared_ptr<C> bar (new C);

  foo = bar;

  foo->a = 10;
  bar->b = 20;

  if (foo) std::cout << "foo: " << foo->a << ' ' << foo->b << '\n';
  if (bar) std::cout << "bar: " << bar->a << ' ' << bar->b << '\n';

  return 0;
}


