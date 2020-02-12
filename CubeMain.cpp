#include <Cube.h>
#include <iostream.h>
#include <conio.h>



int main(){

	clrscr();
	Cube c;

	c.setLength(3.48);
	double volume = c.getVolume();
	std::cout << "Volume: " << volume << std::endl;

	return 0;
	getch();
}
