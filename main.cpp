/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Katelyn Mercene <kmercene@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* This is a program designed to animate different shapes.
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "point.h"
#include "shapes.h"

int main(){
	/**
* A function to draw the `Shape*`s in the given vector in a terminal.
*
* Arguments:
* - `v`: A vector containing pointers to each `Shape` to draw.
*/
	void draw(const vector<Shape*> & v) {
		const float columns = 80;
		const float lines = 25;
		const float width = 1;
		const float height 1.9;

		for (){
		}
	}
	const int numOfFrames = 30;
    const int frameSleep = 50;
    
    vector<Shape*> shapes = { &r, &s, };
        
    draw(shapes);

    std::this_thread::sleep_for(std::chrono::milliseconds(frameSleep)); //from project directions
      
	return 0;		//success
}
