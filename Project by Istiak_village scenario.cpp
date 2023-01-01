#include<GL/gl.h>
#include<math.h>
#include<iostream>
#include <GL/glut.h>
int posx=0,posy=0,posz=0;
int day = 1;        //1 for day ,0 for night


void drawCircle(float r, float x, float y) {
        float i = 0.0f;
        
        glBegin(GL_TRIANGLE_FAN);
        
        glVertex2f(x, y); // Center
        for(i = 0.0f; i <= 360; i++)
                glVertex2f(r*cos(M_PI * i / 180.0) + x, r*sin(M_PI * i / 180.0) + y);
        
        glEnd();
}
///tree

void tree()
{
///tree1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);


    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



glEnd();

///tree2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+100, 350+50, 0);
    glVertex3i(70+100, 350+50, 0);


    glVertex3i(70+100, 500+50, 0);
    glVertex3i(50+100, 500+50, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+100, 500+50, 0);
    glVertex3i(110+100, 500+50, 0);


    glVertex3i(60+100, 600+50, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+100, 550+50, 0);
    glVertex3i(105+100, 550+50, 0);


    glVertex3i(60+100, 650+50, 0);



glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



glEnd();
///tree4
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
///tree5
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


}
///river
void river()
{
    glColor3f(0, 0.1, 1);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
void road()
{
    glColor3d(0.4,0.4,0.4);
glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

//road stripe bottom
glColor3d(1,1,1);
glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 310, 0);
    glVertex3i(0, 310, 0);


    glEnd();
//road stripe top

    glColor3d(1,1,1);
    glBegin(GL_POLYGON);

    glVertex3i(0, 600, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(1200, 590, 0);
    glVertex3i(0, 590, 0);


    glEnd();

    //road stripe middle 

    for (int i = 0;i <= 1200;i += 100) {
        glColor3d(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3i(i, 445, 0);
        glVertex3i(i+50, 445, 0);
        glVertex3i(i+50, 455, 0);
        glVertex3i(i, 455, 0);
        glEnd();
        

    }





}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}


///house

void building()
{

    ///building1
    //building 1 main body
    glBegin(GL_POLYGON);
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glVertex3i(0, 600, 0);
    glVertex3i(200, 600, 0);
    glVertex3i(200, 1100, 0);
    glVertex3i(0, 1100, 0);


    glEnd();
    //b1door
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    glVertex3i(90, 600, 0);
    glVertex3i(110, 600, 0);
    glVertex3i(110, 650, 0);
    glVertex3i(90, 650, 0);


    glEnd();
    
    //b1window1
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(25,1000 , 0);
    glVertex3i(75,1000, 0);
    glVertex3i(75,950, 0);
    glVertex3i(25, 950, 0);


    glEnd();
    //b1window2
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(125,1000 , 0);
    glVertex3i(175,1000, 0);
    glVertex3i(175,950, 0);
    glVertex3i(125, 950, 0);


    glEnd();


    //b1window3
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(25,900 , 0);
    glVertex3i(75,900, 0);
    glVertex3i(75,850, 0);
    glVertex3i(25, 850, 0);


    glEnd();
    //b1window4
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(125,900 , 0);
    glVertex3i(175,900, 0);
    glVertex3i(175,850, 0);
    glVertex3i(125, 850, 0);


    glEnd();

    //b1window5
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(25,800 , 0);
    glVertex3i(75,800, 0);
    glVertex3i(75,750, 0);
    glVertex3i(25, 750, 0);


    glEnd();


    
    //b1window6
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(125,800 , 0);
    glVertex3i(175,800, 0);
    glVertex3i(175,750, 0);
    glVertex3i(125, 750, 0);


    glEnd();
    
    //b1window7
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(25,700 , 0);
    glVertex3i(75,700, 0);
    glVertex3i(75,650, 0);
    glVertex3i(25, 650, 0);


    glEnd();


    
    //b1window8
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(125,700 , 0);
    glVertex3i(175,700, 0);
    glVertex3i(175,650, 0);
    glVertex3i(125, 650, 0);


    glEnd();



    
    //building2
    //building 2 main body
    glBegin(GL_POLYGON);
    glColor3f(0, 0.5, 0);

    glVertex3i(200, 600, 0);
    glVertex3i(400, 600, 0);
    glVertex3i(400, 1000, 0);
    glVertex3i(200, 1000, 0);


    glEnd();
    //b2door
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    glVertex3i(290, 600, 0);
    glVertex3i(310, 600, 0);
    glVertex3i(310, 650, 0);
    glVertex3i(290, 650, 0);


    glEnd();

    //b2window1
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(225,900 , 0);
    glVertex3i(275,900, 0);
    glVertex3i(275,850, 0);
    glVertex3i(225, 850, 0);


    glEnd();
    //b1window2
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(325,900 , 0);
    glVertex3i(375,900, 0);
    glVertex3i(375,850, 0);
    glVertex3i(325, 850, 0);


    glEnd();

    //b2window3
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(225,800 , 0);
    glVertex3i(275,800, 0);
    glVertex3i(275,750, 0);
    glVertex3i(225, 750, 0);


    glEnd();


    
    //b2window4
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(325,800 , 0);
    glVertex3i(375,800, 0);
    glVertex3i(375,750, 0);
    glVertex3i(325, 750, 0);


    glEnd();
    
    //b2window5
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(225,700 , 0);
    glVertex3i(275,700, 0);
    glVertex3i(275,650, 0);
    glVertex3i(225, 650, 0);


    glEnd();


    
    //b2window6
        glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(325,700 , 0);
    glVertex3i(375,700, 0);
    glVertex3i(375,650, 0);
    glVertex3i(325, 650, 0);


    glEnd();

    //building3 
    //building 3 main body
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0, 0);

    glVertex3i(400, 600, 0);
    glVertex3i(600, 600, 0);
    glVertex3i(600, 1100, 0);
    glVertex3i(400, 1100, 0);


    glEnd();

    //b3door
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);

    glVertex3i(490, 600, 0);
    glVertex3i(510, 600, 0);
    glVertex3i(510, 650, 0);
    glVertex3i(490, 650, 0);


    glEnd();

    //b3window1
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(425,1000 , 0);
    glVertex3i(475,1000, 0);
    glVertex3i(475,950, 0);
    glVertex3i(425, 950, 0);


    glEnd();
    //b1window2
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(525,1000 , 0);
    glVertex3i(575,1000, 0);
    glVertex3i(575,950, 0);
    glVertex3i(525, 950, 0);


    glEnd();


    //b3window3
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(425,900 , 0);
    glVertex3i(475,900, 0);
    glVertex3i(475,850, 0);
    glVertex3i(425, 850, 0);


    glEnd();
    //b1window4
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(525,900 , 0);
    glVertex3i(575,900, 0);
    glVertex3i(575,850, 0);
    glVertex3i(525, 850, 0);


    glEnd();

    //b3window5
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(425,800 , 0);
    glVertex3i(475,800, 0);
    glVertex3i(475,750, 0);
    glVertex3i(425, 750, 0);


    glEnd();


    
    //b3window6
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(525,800 , 0);
    glVertex3i(575,800, 0);
    glVertex3i(575,750, 0);
    glVertex3i(525, 750, 0);


    glEnd();
    
    //b3window7
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(425,700 , 0);
    glVertex3i(475,700, 0);
    glVertex3i(475,650, 0);
    glVertex3i(425, 650, 0);


    glEnd();


    
    //b3window8
    glBegin(GL_POLYGON);
    glColor3f(0.5,1,1);

    glVertex3i(525,700 , 0);
    glVertex3i(575,700, 0);
    glVertex3i(575,650, 0);
    glVertex3i(525, 650, 0);


    glEnd();



    

}



void sun()
{


    glPushMatrix();
	   glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
	   drawCircle(50, 1000, 1000);
    glPopMatrix();


glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}


void car1()
{
    //car 1
        glPushMatrix();
        ///LBody///
        glBegin(GL_POLYGON);
        glColor3d(0.5, 0.5, 0.8);
        glVertex3i(100,500,0);
        glVertex3i(100+100,500,0);
        glVertex3i(100+100,500+50,0);
        glVertex3i(100,500+50,0);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
        glColor3d(1, 0.5, 0.8);
        glVertex3i(130,550,0);
        glVertex3i(130+40,550,0);
        glVertex3i(130+40,550+30,0);
        glVertex3i(130,550+30,0);
	glEnd();
    //backwheal
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.95, -0.40f, 0.0f);
	   drawCircle(10, 125, 500);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.75, -0.40f, 0.0f);
	   drawCircle(10, 175, 500);
    glPopMatrix();
    glPopMatrix();

    




}

//car2
void car2()
{
    //car 1
        glPushMatrix();
        ///LBody///
        glBegin(GL_POLYGON);
        glColor3d(0.5, 0.5, 0.8);
        glVertex3i(800,400,0);
        glVertex3i(800+100,400,0);
        glVertex3i(800+100,400+50,0);
        glVertex3i(800,400+50,0);
	glEnd();
	glBegin(GL_POLYGON);
	///UBody///
        glColor3d(1, 0.5, 0.8);
        glVertex3i(830,450,0);
        glVertex3i(830+40,450,0);
        glVertex3i(830+40,450+30,0);
        glVertex3i(830,450+30,0);
	glEnd();
    //backwheal
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.95, -0.40f, 0.0f);
	   drawCircle(10, 825, 400);
    glPopMatrix();
    ///FWheal///
    glPushMatrix();
	   glColor3d(0.0,0,0);
	   glTranslatef (-0.75, -0.40f, 0.0f);
	   drawCircle(10, 875, 400);
    glPopMatrix();
    glPopMatrix();
}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,150,0);
    glVertex3i(150+50,150,0);
    glVertex3i(120+50,100,0);
    glVertex3i(30,100,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(50,220,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+200,150+50,0);
    glVertex3i(150+200,150+50,0);
    glVertex3i(50+200,220+50,0);
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



    glPushMatrix();
        glColor3f(1, 1, 1);
	   drawCircle(50, 900, 1000);
    glPopMatrix();


glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}



///clouds
void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        road();
        
        glPushMatrix();
        glTranslatef(posx,0,0);
        car1();
        glTranslatef(posy,0,0);
        car2();
        glPopMatrix();
        
        building();

         sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

    }
    else
    {

        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        road();
        glPushMatrix();
        glTranslatef(posx,0,0);
        car1();
        glTranslatef(posy, 0, 0);
        car2();
        glPopMatrix();
        
        building();
        //sun();
        moon();
        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

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
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}

}
void update(int value) {

    posy = 1200;
    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    
    if (posy <= 50)
    {
        posy=900;
    }
    else{
        posy--;
    }

    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}

void init(void)
{

glClearColor(0.17f, 0.65f, 0.92f, 0.0f);

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
glutCreateWindow("Istiak Ahmed Khan");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}