//
//  UIC CS 474
//  PaintingManager
//
//  Created by Ken Liu on 11/16/15.
//  Copyright (c) 2015 Ken Liu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    char c;
    int theID;
    
    cout <<"Please input your command: ";
    cin >> c;
    
    if(isdigit(c))
    {
        theID = c - '0';
        cout << theID << endl;
    }
    
    switch(c)
    {
        case 'l':
            cout << "List all Painting." << endl;
            break;
        case 't':
            cout << "Change the title of current painting." << endl;
            break;
        case 'a':
            cout << "Change the name of author." << endl;
            break;
        case 's':
            cout << "Save all painting." << endl;
            break;
        case 'q':
            cout << "Quits the painting manager" << endl;
            break;
    }
    
    return 0;
}
