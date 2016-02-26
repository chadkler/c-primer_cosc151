#include <iostream>
#include <string>

// This is a template function
// The compiler will generate "real" versions
// of this function for each type that it
// is called with

template <class T>
T greater(T x, T y)
{
   if(x > y)
      return x;

   return y;
}

int main()
{
   // Generates greater<std::string>
   auto s = greater(std::string{"Foo"}, std::string{"Goo"});

   // Generates greater<int>
   std::cout << greater(1, 3) << std::endl;

   // Generates greater<double>
   std::cout << greater(1.1, 1.4) << std::endl;
}


