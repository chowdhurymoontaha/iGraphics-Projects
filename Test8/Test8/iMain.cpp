#include "iGraphics.h"

#define frameWidth 1000
#define frameHeight 500
#define backgroundSpeed 10


int x = 0;
int y = 0;
char imagePath[5][50] = { "images\\b1.bmp", "images\\b2.bmp", "images\\b3.bmp", "images\\b4.bmp","images\\b5.bmp" };

int pos[5];
int slice = 5;
int width = 200;
/*
struct Background
{
	int bgX;
	int bgY;
};
Background bg[10];
*/


//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	/*
	for (int i = 0; i < 5; i++){
		iShowBMP(bg[i].bgX, bg[i].bgY, imagePath[i]);
	}*/
	
	for (int i = 0; i < 5; i++){
		iShowBMP(pos[i], 0, imagePath[i]);
	}
	for (int i = 0; i < 5; i++){
		pos[i] -= width;
	}
	
	for (int i = 0; i < 5; i++){
		
		if (pos[i]<0){
			//pos[i] = (slice*width)-width;
			pos[i] = frameWidth;

		}
	}
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	
	

}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	
}
/*
void setAll()
{
	int sum = 0;
	for (int i = 0; i < 5; i++){
		bg[i].bgX = sum;
		bg[i].bgY = 0;
		sum += 200;
	}
}

void change(){
	for (int i = 0; i < 5; i++){
		bg[i].bgX -= 200;
		
		if (bg[i].bgX<0){
			bg[i].bgX = frameWidth-200;
		}
	}
}*/


void setAll()
{
	int i,j;
	for (i = 0, j=0; i <slice; i++){
		pos[i] = j;
		j += width;
	}
}
int main()
{
	///srand((unsigned)time(NULL));
	setAll();
	

	iInitialize(frameWidth, frameHeight, "Ball");

	///updated see the documentations
	iStart();
	return 0;
}