
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
 glColor3f(1.0 ,1.0 ,1.0);
    glBegin(GL_POLYGON);

    glVertex3i(620, 495, 0);
    glVertex3i(1200, 495, 0);
    glVertex3i(1200, 545, 0);
    glVertex3i(620, 545, 0);

glEnd();

    glColor3f(1.0 ,1.0 ,1.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 250, 0);
    glVertex3i(630, 250, 0);
    glVertex3i(630, 545, 0);
    glVertex3i(600, 545, 0);


glEnd();

 glColor3f(1.0 ,1.0 ,1.0);
    glBegin(GL_POLYGON);

    glVertex3i(300, 250, 0);
    glVertex3i(620, 250, 0);
    glVertex3i(620, 300, 0);
    glVertex3i(300, 300, 0);


glEnd();


 glColor3f(1.0 ,1.0 ,1.0);
    glBegin(GL_POLYGON);

    glVertex3i(285, 250, 0);
    glVertex3i(320, 250, 0);
    glVertex3i(320, 320, 0);
    glVertex3i(285, 320, 0);


glEnd();

}


///hill
void hill()
{
	
	 glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);

glEnd();


}
void tree()
{



///4
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+800, 350+130, 0);
    glVertex3i(70+800, 350+130, 0);


    glVertex3i(70+800, 500+130, 0);
    glVertex3i(50+800, 500+130, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+800, 500+130, 0);
    glVertex3i(110+800, 500+130, 0);


    glVertex3i(60+800, 600+130, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+800, 550+130, 0);
    glVertex3i(105+800, 550+130, 0);


    glVertex3i(60+800, 650+130, 0);



glEnd();

///6
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+600, 350+130, 0);
    glVertex3i(70+600, 350+130, 0);


    glVertex3i(70+600, 500+130, 0);
    glVertex3i(50+600, 500+130, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+600, 500+130, 0);
    glVertex3i(110+600, 500+130, 0);


    glVertex3i(60+600, 600+130, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+600, 550+130, 0);
    glVertex3i(105+600, 550+130, 0);


    glVertex3i(60+600, 650+130, 0);



glEnd();
///2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+130, 0);
    glVertex3i(70+1000, 350+130, 0);


    glVertex3i(70+1000, 500+130, 0);
    glVertex3i(50+1000, 500+130, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+130, 0);
    glVertex3i(110+1000, 500+130, 0);


    glVertex3i(60+1000, 600+130, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+130, 0);
    glVertex3i(105+1000, 550+130, 0);


    glVertex3i(60+1000, 650+130, 0);



glEnd();

///1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



glEnd();
///3

glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

glEnd();


///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+700, 350+200, 0);
    glVertex3i(70+700, 350+200, 0);


    glVertex3i(70+700, 500+200, 0);
    glVertex3i(50+700, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+700, 500+200, 0);
    glVertex3i(110+700, 500+200, 0);


    glVertex3i(60+700, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+700, 550+200, 0);
    glVertex3i(105+700, 550+200, 0);


    glVertex3i(60+700, 650+200, 0);

glEnd();


}

/// Name: Rashiduzzaman Shakil
/// ID: 191-15-2655

int rad,x,y,a,b,h;
bool SE,E;
void sun()
{
glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();


}




//night
void night_effect()
{
glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}
//star
void star()
{
//star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//mon
void moon()
{



glColor3f(1,1,1);


a=600;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;

glVertex3i(x+a,y+b,0);


glBegin(GL_POLYGON);

glVertex3i(x+a,y+b,0);

if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }




}




glEnd();

glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}



///Name: Md Parvez
///ID: 191-15-2468

///river



void river()
{

 glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 200, 0);
    glVertex3i(0, 200, 0);


glEnd();


}
void boat()
{



  glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,100,0);
    glVertex3i(150+50,100,0);
    glVertex3i(120+50,50,0);
    glVertex3i(30,50,0);
    glEnd();
  glColor3f(1.0, 0.3, 1.0);
    glBegin(GL_POLYGON);


    glVertex3i(50,100,0);
    glVertex3i(150,100,0);
    glVertex3i(150,150,0);
    glVertex3i(50,150,0);
    glEnd();



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

