
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0;
int person = 0;




///Name: Bonna Akter
///ID: 191-15-2585
void land()
{


}
void house()
{




}

void kup()
{



}


///Name: Fazley Atif Maruf
/// ID: 191-15-2349

//road
void road()
{


}


///hill
void hill()
{


}
void tree()
{




}

/// Name: Rashiduzzaman Shakil
/// ID: 191-15-2655

int rad,x,y,a,b,h;
bool SE,E;
void sun()
{



}




//night
void night_effect()
{


}
//star
void star()
{

}
//mon
void moon()
{




}



///Name: Md Parvez
///ID: 191-15-2468

///river



void river()
{




}
void boat()
{





}


void draw_object()
{
    if(person==0)
    {
        land();
        kup();
        hill();
        road();

        tree();
        river();
        house();

        sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
    else if(person==1)
    {
        land();
        house();

    }

    else if(person==2)
    {
        land();
        house();
        kup();

        road();

        hill();
        tree();


    }
    else if(person==3)
    {
        land();
        road();
        hill();
        tree();
        house();
        kup();


        sun();

    }

    else if(person==4)
    {
        land();
        hill();
        road();
        kup();

        tree();
        river();
        house();

        sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }

    else if(person==5)
    {
        land();
        hill();
        road();
        tree();
        house();
        kup();


        sun();


    }


    else if(person==6)
    {


        night_effect();
        land();
        road();
        hill();
        kup();
        tree();
        house();


        //sun();

        moon();
        star();



    }
    else if(person==7)
    {

        land();
        hill();
        road();

        kup();

        tree();
        river();
        house();

        sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();


    }
    else if(person==8)
    {

        night_effect();
        land();
        road();
        star();
        hill();
        kup();

        tree();
        river();
        house();
        //sun();
        moon();

        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();


    }
    else if(person==9)
    {


        land();
        kup();
        house();


    }



}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{

	case '1':
        person=1;
        display();
        break;
     case '2':
        person=2;
        display();
        break;
    case '3':
        person=3;
        display();
        break;
    case '4':
        person=4;
        display();
        break;

    case 'd':
        person=5;
        display();
        break;
	case 'n':
        person=6;
        display();
        break;
    case 'D':
        person=7;
        display();
        break;
	case 'N':
        person=8;
        display();
        break;
    case 'k':
        person=9;
        display();
        break;



	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}
void init(void)
{

glClearColor(0.0,1.0, 0.9,0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}

