#include <string>
#include <iostream>

void function_takes_a_copy(std::string s)
{
	s = "I've changed MY string.";
	std::cout << "function takes a copy: " << s << '\n';
}

void function_takes_a_reference(std::string& s)
{
	s = "I've changed the original!";
	std::cout << "function takes a reference: " << s << '\n';
}

void function_takes_a_const_reference(const std::string& s)
{
   std::cout << "function takes a const reference: " << s << '\n';
}

int main()
{
   std::string s = "The original string.";

   function_takes_a_copy(s);
   function_takes_a_reference(s);
   function_takes_a_const_reference(s);

   return 0;	
}

