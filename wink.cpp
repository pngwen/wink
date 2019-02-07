//Draw an animated winky emoticon
#include "termmanip.h"
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    bool first = true; //alternate frames

    cout << clearScreen << cursorOff;
    cout.flush();

    while(true)
    {
        cout << cursorPosition(1,1);
        cout.flush();
        if(first) {
            cout << blue << "^" << normal << "_" << blue << "^";
            first = false;
        } else {
            cout << blue << "-" << normal << "_" << blue << "^";
            first = true;
        }
        cout.flush();

        usleep(500000);
    }
}
