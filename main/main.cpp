#include "../lib/simpleEntry.h"
#include <cstdlib>   // system()

#include <iostream>

using namespace std;

int main () {
   system("clear");
   char option;
   cout << "#  Welcome  #\n"
        << "#############\n" << endl;
   do {
      cout << "..START MENU..\n"
           << "0.- [E]xit\n"
           << "1.- [D]emo Mode\n"
           << "2.- [S]tats Mode\n" << endl;
      try{
         setSimpleKey();                  // Coming from simpleEntry.h
         cin >> option;
         setDoubleKey();                  // Coming from simpleEntry.h
         system("clear");

         switch (option) {
            case 'E':
            case 'e':
            case '0':
               system("clear");
               cout << "..Bye bye.." << endl;
               return 0;
            case 'D':
            case 'd':
            case '1':
               cout << "You pressed Demo Mode" << endl;
               cout << "Enter to continue..";
               cin.ignore();
               break;
            case 'S':
            case 's':
            case '2':
               cout << "You pressed Stats Mode" << endl;
               cout << "Enter to continue..";
               cin.ignore();
               break;
            default: throw 1;
         }
      }
      catch (int e) {
         cin.sync();                      // Clean buffer
         if (e == 1) {                    // Wrong option from Start menu
            cout << "Oops! Wrong key. Press Enter key to continue" << endl;
            cin.ignore();
         }
      }
      system("clear");                    // If here, program will continue looping
   } while (true);                        // Loop until user set option = "exit"
}
