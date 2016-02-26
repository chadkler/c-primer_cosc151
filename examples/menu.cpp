#include <iostream>
using namespace std;

char menu();

int main()
{
    bool done = false;
    while(!done)
    {
        auto selection = menu();

        switch(selection)
        {
        case 'A':
           cout << "You selected " << selection << endl;
           break;
        case 'B':
           cout << "You selected " << selection << endl;
           break;
        case 'Q':
           cout << "Good bye!";
           done = true;
           break;
        default:
           cout << "You selected " << selection << endl;
        }
    }
    
    return 0;
}

char menu()
{
    do
    {
        cout << "Please choose from the following options:\n"
             << "  1. Option 1\n"
             << "  2. Option 2\n"
             << "  3. Option 3\n"
             << "  A. Option A\n"
             << "  B. Option B\n"
             << "  Q. Quit\n";

        char c;
        cin >> c;
        
        if(c == '1' || c == '2' || c == '3' || c == 'A' || c == 'B' || c == 'Q')
        {
            return c;
        }
        else
        {
            cout << "\nThat was an invalid selection...\n\n";
        }
        
    } while(true);
}