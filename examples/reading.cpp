#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<double> numbers;

    cout << "Enter numbers, separated by spaces, then ENTER. (or CTRL+D to stop):" << endl;
    
    // This loop creates a double d, reads it from stanrd input
    // and pushes it back into the vector.  Will stop when the 
    // user hits CTRL+D, or when it reaches something in the
    // input stream it cannot convert to a double (like an 'f')
    for(double d = 0; cin >> d; numbers.push_back(d));

    cout << "You entered: ";
    // Range based-for loop prints out the values
    for(auto v : numbers)
    {
        cout << v << " ";
    }
    
    cout << endl;
    
    return 0;
}