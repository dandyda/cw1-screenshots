/*
A simple example of using the gfx library.
CSE 20211
9/7/2011
by Prof. Thain; Modifed by D.Dan 01/2019 CSC250
*/

#include <stdio.h>
/*#include directive finds the named file and "includes" all the text file
 right at this location in my program, BEFFORE the compiler actual builds
 prgm. Cmds starting with # are called preprocessor compiler directives*/
#include "gfx2.h" //Custom programmer defined header

//Prototype function for drawing square graphic
void drawSquare(double xCenter, double yCenter, double side)
{
    // calculate x,y coordinates of all corners...ulx means upper left x, etc
    double ulx = xCenter - side/2;
    double uly = yCenter - side/2;
    double llx = xCenter - side/2;
    double lly = yCenter + side/2;
    double urx = xCenter + side/2;
    double ury = yCenter - side/2;
    double lrx = xCenter + side/2;
    double lry = yCenter + side/2;
    
    //drawing a line from (x,y coords to x,y coords)
    gfx_line(ulx,uly,llx,lly);
    gfx_line(urx,ury,lrx,lry);
    gfx_line(llx,lly,lrx,lry);
    gfx_line(ulx,uly,urx,ury);
}

int main()
{
    //sets screen size 300 x 300
	int ysize = 300;
	int xsize = 300;

	char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to red
	gfx_color(200,0,0);
    // Draw lines on the screen	
    gfx_line(100,200,100,100);
    gfx_line(200,200,100,200);	
    gfx_line(200,100,200,200);
    gfx_line(100,100,200,100);
    gfx_line(150,150,0,0);
    gfx_line(150,150,150,0);
    gfx_line(150,150,300,0);
    gfx_line(150,150,300,150);
    gfx_line(150,150,300,300);
    gfx_line(150,150,150,300);
    gfx_line(150,150,0,300);
    gfx_line(150,150,0,150);

    //Set drawing color to purple
    gfx_color(200,0,200);
    //draw squares on the screen
    drawSquare(150,150,512);
    drawSquare(150,150,256);
    drawSquare(150,150,128);
    drawSquare(150,150, 64);
    drawSquare(150,150,32);
    drawSquare(150,150,16);
    drawSquare(150,150,8);
    drawSquare(150,150,4);
    drawSquare(150,150,2);
    drawSquare(150,150,1);
    
    
    //indefinite loop setting terminating keystroke 'q'
	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}//end while

	return 0;
}//end main function
