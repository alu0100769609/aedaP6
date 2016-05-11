#include <iostream>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

using namespace std;
struct termios t;

//cout << "ATENCIÓN, para el buen uso de este programa es necesario llamar al método \"quitar1tecla\" ";
//cout << "inmediatamente después de utilizar \"poner1tecla\" para establecer todo como estaba." << endl << endl;
void setSimpleKey () {
   /* Get terminal configuration */
       tcgetattr(0, &t);
   /* Turn off "ICANON" bit */
       t.c_lflag &= ~ICANON;
   /* Set new terminal configuration */
       tcsetattr(0, TCSANOW, &t);
}

void setDoubleKey () {
   /* We must set everything like it was before run setSimpleKey() */
   t.c_lflag |= ICANON;
	tcsetattr(0, TCSANOW, &t);
}
