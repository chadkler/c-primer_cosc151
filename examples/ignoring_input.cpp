#include <iostream>

int main()
{
    std::string s0, s1;
    int i0 = 0, i1 = 0;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, s0);

    std::cout << "Enter a number: ";
    std::cin >> i0;
    
    // the cin >> i0 above leaves a newline character
    // in the buffer.  Trying to read in with getline()
    // below, without the ignore will cause the getline()
    // to consume the first newline character (Still in the buffer)
    // and NOT the next string entered.
    // if this is happening to you, add the ignore line below
    std::cin.ignore();
    
    
    std::cout << "Enter another string: ";
    std::getline(std::cin, s0);
    
    std::cout << "Enter another number: ";
    std::cin >> i1;
    
    std::cout << std::endl;
}