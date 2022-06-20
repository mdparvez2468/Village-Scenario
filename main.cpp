
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0;
int person = 0;




///Name: Bonna Akter
///ID: 191-15-2585
void land()
{

	glColor3f(0.0 ,0.9 ,0.0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 200, 0);
    glVertex3i(1200, 200, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
void house()
{



glColor3f(0.5, 0.5, 0.8);

glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(480, 350, 0);
    glVertex3i(480, 500, 0);
    glVertex3i(220, 500, 0);


glEnd();

glColor3f(1.0, 0.3, 1.0);
glBegin(GL_POLYGON);

    glVertex3i(200, 500, 0);
    glVertex3i(500, 500, 0);
    glVertex3i(350, 700, 0);



glEnd();


glColor3f(0.5, 0.4, 0.2);
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(330, 350, 0);
    glVertex3i(330, 460, 0);
    glVertex3i(280, 460, 0);


glEnd();

glColor3f(0.5, 0.4, 0.2);
glBegin(GL_POLYGON);

    glVertex3i(280, 470, 0);
    glVertex3i(330, 470, 0);
    glVertex3i(330, 480, 0);
    glVertex3i(280, 480, 0);


glEnd();

glColor3f(1,0,0);
glBegin(GL_POLYGON);

    glVertex3i(380, 465, 0);
    glVertex3i(450, 465, 0);
    glVertex3i(450, 485, 0);
    glVertex3i(380, 485, 0);


glEnd();

glColor3f(1,0,0);
glBegin(GL_POLYGON);

    glVertex3i(380, 370, 0);
    glVertex3i(450, 370, 0);
    glVertex3i(450, 450, 0);
    glVertex3i(380, 450, 0);


glEnd();

glColor3f(0.3,0.3,0.3);
glBegin(GL_POLYGON);

    glVertex3i(210, 330, 0);
    glVertex3i(490, 330, 0);
    glVertex3i(490, 350, 0);
    glVertex3i(210, 350, 0);


glEnd();

glColor3f(0.7,0.7,0.7);
glBegin(GL_POLYGON);

    glVertex3i(275, 335, 0);
    glVertex3i(335, 335, 0);
    glVertex3i(335, 350, 0);
    glVertex3i(275, 350, 0);


glEnd();

glColor3f(0.1,0.1,0.1);
glBegin(GL_POLYGON);

    glVertex3i(270, 320, 0);
    glVertex3i(340, 320, 0);
    glVertex3i(340, 335, 0);
    glVertex3i(270, 335, 0);


glEnd();



}

void kup()
{


 glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(90,380,0);
    glVertex3i(130,380,0);
    glVertex3i(130,260,0);
    glVertex3i(90,260,0);
    glEnd();


    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(75,360,0);
    glVertex3i(90,380,0);
    glVertex3i(90,300,0);
    glVertex3i(75,280,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(130,380,0);
    glVertex3i(145,360,0);
    glVertex3i(145,280,0);
    glVertex3i(130,300,0);
    glEnd();

    glColor3f(0.8,0.8,0.8);
    glBegin(GL_POLYGON);
    glVertex3i(90,375,0);
    glVertex3i(125,375,0);
    glVertex3i(125,350,0);
    glVertex3i(90,350,0);
    glEnd();


    glColor3f(0.8,0.8,0.8);
    glBegin(GL_POLYGON);
    glVertex3i(125,375,0);
    glVertex3i(135,360,0);
    glVertex3i(135,360,0);
    glVertex3i(125,350,0);
    glEnd();


    glColor3f(0.8,0.8,0.8);
    glBegin(GL_POLYGON);
    glVertex3i(80,360,0);
    glVertex3i(90,375,0);
    glVertex3i(90,350,0);
    glVertex3i(80,355,0);
    glEnd();



    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(130,260,0);
    glVertex3i(130,310,0);
    glVertex3i(145,280,0);
    glVertex3i(145,280,0);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex3i(90,260,0);
    glVertex3i(90,310,0);
    glVertex3i(75,280,0);
    glVertex3i(75,280,0);
    glEnd();



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

