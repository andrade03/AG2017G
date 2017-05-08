#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
static int girox = 0;
static int giroy = 85%90;
//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;



GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;
GLfloat scale2=1.0f;
GLfloat numero=-1.65f,inicialy=-0.2f,i=0,nm=-0.3,cont=1;
GLint i1=1,id=1,pos=0;

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
    GLfloat light_position[] = { -10.0, 10.0, 1.0, 0.0 };
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_NORMALIZE);
    
    

	glLightfv(GL_LIGHT0,GL_POSITION,light_position);
// Queremos que se dibujen las caras frontales
// y con un color solido de relleno.
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	glLoadIdentity();

}
void color(float a1, float a2, float a3, float d1, float d2, float d3, float s1, float s2, float s3, float a4)
	{
		GLfloat mat_ambient[] = { a1, a2, a3, a4 };
		GLfloat mat_diffuse[] = { d1, d2, d3, a4 };
		GLfloat mat_specular[] = { s1, s2, s3, a4 };
		GLfloat shine[] = {27.8974f};

		glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
		glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialfv(GL_FRONT, GL_SHININESS, shine);

	}
	
	
void cuadro(void){
	
	glPushMatrix();
    glTranslatef(0.0,2.8,1.05);
	glRotated(30.0, 0.0, 0.0, 1.0);
	color(1.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,0.0,1.0);
    glutSolidCube (1.5);
    glPopMatrix();
	
	}

void cono(void){
	
	glPushMatrix();
	glScalef(0.6,0.6,0.6);
    glTranslatef(-4.2,4.8,3.0);
	color(1.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,0.0,1.0);
	glutSolidCone (2.0, -3.0,5.0,0.0);
    glPopMatrix();
	}
	
void circulo(void){
	
	glPushMatrix();
	glScalef(0.5,0.5,0.5);
    glTranslatef(4.2,2.5,1.05);
	color(1.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,0.0,1.0);
	glutSolidSphere (1.5,20,20);
    glPopMatrix();

	}
	

	

	

void base(void)
{
	
	glBegin(GL_LINES);	
	glColor3f(1.0, 1.0, 1.0);		
	glVertex3f(  30.9, 0.0, 0.0 );      // V1 Blanco
	glVertex3f(  -30.9, 0.0, 0.0 );      // V1 Blanco
	glEnd();	

	glBegin(GL_LINES);			
	 glColor3f(1.0, 0.0, 0.0);
	glVertex3f(  0.0, -30.9, 0.0 );      // V1 Blanco
	glVertex3f(  0.0, 30.9, 0.0 );      // V1 Blanco
	glEnd();	

	glBegin(GL_LINES);		
	 glColor3f(1.0, 0.0, 1.0);	
	  //  glColor3f(1.0,1.0,0.0);
	glVertex3f(  0.0, 0.0, -2.9 );      // V1 Blanco
	glVertex3f(  0.0, 0.0, 2.9 );      // V1 Blanco
	glEnd();
	
	
    color(10.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
for(i1;i1<=6;i1++){
	if(pos==0){
for(id;id<=16;id++){
	
	if((id%2)==0){
	glPushMatrix();
	glTranslatef(numero,inicialy,0.0);
	glBegin(GL_POLYGON);			
	glColor3f(1.0, 1.0, 1.0);//
	glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
    glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
    glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
	glEnd();	
	glPopMatrix();	
	numero+=0.22;
	
}
	else{
	glPushMatrix();
	glTranslatef(numero,inicialy,0.0);
	glBegin(GL_POLYGON);			
	glColor3f(1.0, 1.0, 1.0);//
	glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
    glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
    glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
	glEnd();	
	glPopMatrix();	
	numero+=0.22;
	
	}
	
}


}

	else{
	
for(id;id<=16;id++){
		
	if((id%2)!=0){
	glPushMatrix();
	glTranslatef(numero,inicialy,0.0);
	glBegin(GL_POLYGON);			
	glColor3f(1.0, 1.0, 1.0);//
	glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
    glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
    glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
	glEnd();	
	glPopMatrix();	
	numero+=0.22;
}
else{
	glPushMatrix();
	glTranslatef(numero,inicialy,0.0);
	glBegin(GL_POLYGON);			
	glColor3f(1.0, 1.0, 1.0);//
	glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
    glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
    glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
	glEnd();	
	glPopMatrix();	
	numero+=0.22;
	
	}

}

}


	inicialy-=0.22;
	id=1;
	numero=-1.65;
	
	if((i1%2)==0){
		
		pos=0;
		
		}
		else{
			pos=1;
			}
	
}
}
void atras2(void){
	
	for(cont;cont<=4;cont++){
	//1
	glPushMatrix();
glTranslatef(1.645,-0.2,nm);
color(1.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.105,0.3,-0.2);
glVertex3d(0.085,0.2,0.00);
glVertex3d(-0.12,0.2,-0.1);
glVertex3d(-0.1,0.3,-0.3);
glEnd();
glPopMatrix();
//2
glPushMatrix();
glTranslatef(1.42,-0.2,nm);
color(1.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.3);
glVertex3d(0.08,0.2,-0.1);
glVertex3d(-0.1,0.2,0.00);
glVertex3d(-0.085,0.3,-0.2);
glEnd();
glPopMatrix();
//3
glPushMatrix();
glTranslatef(1.2,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.115,0.3,-0.2);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.09,0.2,0.1);
glVertex3d(-0.075,0.3,-0.1);
glEnd();
glPopMatrix();
//4

glPushMatrix();
glTranslatef(0.985,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.12,0.3,-0.1);
glVertex3d(0.105,0.2,0.1);
glVertex3d(-0.105,0.2,0.00);
glVertex3d(-0.095,0.3,-0.2);
glEnd();
glPopMatrix();
	//5
glPushMatrix();
glTranslatef(0.77,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.11,0.3,-0.2);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,-0.1);
glVertex3d(-0.105,0.3,-0.3);
glEnd();
glPopMatrix();

//6

glPushMatrix();
glTranslatef(0.555,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.3);
glVertex3d(0.08,0.2,-0.1);
glVertex3d(-0.11,0.2,-0.2);
glVertex3d(-0.105,0.3,-0.4);
glEnd();
glPopMatrix();


//7

glPushMatrix();
glTranslatef(0.34,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.4);
glVertex3d(0.085,0.2,-0.2);
glVertex3d(-0.11,0.2,-0.3);
glVertex3d(-0.11,0.3,-0.5);
glEnd();
glPopMatrix();
//8
glPushMatrix();
glTranslatef(0.105,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.5);
glVertex3d(0.095,0.2,-0.3);
glVertex3d(-0.11,0.2,-0.2);
glVertex3d(-0.11,0.3,-0.4);
glEnd();
glPopMatrix();

//9
glPushMatrix();
glTranslatef(-0.11,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.4);
glVertex3d(0.09,0.2,-0.2);
glVertex3d(-0.105,0.2,-0.1);
glVertex3d(-0.105,0.3,-0.3);
glEnd();
glPopMatrix();

//10

glPushMatrix();
glTranslatef(-0.338,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.095,0.3,-0.3);
glVertex3d(0.095,0.2,-0.1);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.105,0.3,-0.2);
glEnd();
glPopMatrix();

//11

glPushMatrix();
glTranslatef(-0.558,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.095,0.3,-0.2);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.09,0.2,-0.1);
glVertex3d(-0.10,0.3,-0.3);
glEnd();
glPopMatrix();


//12
glPushMatrix();
glTranslatef(-0.78,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.095,0.3,-0.3);
glVertex3d(0.1,0.2,-0.1);
glVertex3d(-0.08,0.2,-0.2);
glVertex3d(-0.09,0.3,-0.4);
glEnd();
glPopMatrix();


//13

glPushMatrix();
glTranslatef(-1.0,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.11,0.3,-0.4);
glVertex3d(0.12,0.2,-0.2);
glVertex3d(-0.07,0.2,-0.3);
glVertex3d(-0.08,0.3,-0.5);
glEnd();
glPopMatrix();



//14


glPushMatrix();
glTranslatef(-1.215,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.125,0.3,-0.5);
glVertex3d(0.135,0.2,-0.3);
glVertex3d(-0.04,0.2,-0.4);
glVertex3d(-0.055,0.3,-0.6);
glEnd();
glPopMatrix();


//15

glPushMatrix();
glTranslatef(-1.44,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.14,0.3,-0.6);
glVertex3d(0.15,0.2,-0.4);
glVertex3d(-0.045,0.2,-0.3);
glVertex3d(-0.065,0.3,-0.5);
glEnd();
glPopMatrix();



//16

glPushMatrix();
glTranslatef(-1.655,-0.2,nm);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.135,0.3,-0.5);
glVertex3d(0.15,0.2,-0.3);
glVertex3d(-0.055,0.2,-0.2);
glVertex3d(-0.075,0.3,-0.4);
glEnd();
glPopMatrix();

nm-=0.3;
}
	}

void atras1(void){
	//1
glPushMatrix();
glTranslatef(1.70,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.105,0.3,-0.2);
glVertex3d(0.085,0.2,0.00);
glVertex3d(-0.1,0.2,0.00);
glVertex3d(-0.1,0.3,-0.3);
glEnd();
glPopMatrix();
//2
glPushMatrix();
glTranslatef(1.475,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.3);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.1,0.2,0.00);
glVertex3d(-0.085,0.3,-0.2);
glEnd();
glPopMatrix();
//3
glPushMatrix();
glTranslatef(1.25,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.12,0.3,-0.2);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.085,0.3,-0.1);
glEnd();
glPopMatrix();
//4

glPushMatrix();
glTranslatef(1.025,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.12,0.3,-0.1);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.095,0.3,-0.2);
glEnd();
glPopMatrix();

//5
glPushMatrix();
glTranslatef(0.8,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.11,0.3,-0.2);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.11,0.3,-0.3);
glEnd();
glPopMatrix();
//6

glPushMatrix();
glTranslatef(0.575,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.3);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.115,0.3,-0.4);
glEnd();
glPopMatrix();
//7

glPushMatrix();
glTranslatef(0.345,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.4);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.115,0.3,-0.5);
glEnd();
glPopMatrix();
//8
glPushMatrix();
glTranslatef(0.115,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.5);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.11,0.2,0.00);
glVertex3d(-0.105,0.3,-0.4);
glEnd();
glPopMatrix();

//9
glPushMatrix();
glTranslatef(-0.113,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.09,0.3,-0.4);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.105,0.2,0.00);
glVertex3d(-0.105,0.3,-0.3);
glEnd();
glPopMatrix();

//10

glPushMatrix();
glTranslatef(-0.343,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.3);
glVertex3d(0.095,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.105,0.3,-0.2);
glEnd();
glPopMatrix();

//11

glPushMatrix();
glTranslatef(-0.573,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.2);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.10,0.3,-0.3);
glEnd();
glPopMatrix();


//12
glPushMatrix();
glTranslatef(-0.803,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.1,0.3,-0.3);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.09,0.3,-0.4);
glEnd();
glPopMatrix();
//13

glPushMatrix();
glTranslatef(-1.033,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.11,0.3,-0.4);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.08,0.3,-0.5);
glEnd();
glPopMatrix();
//14


glPushMatrix();
glTranslatef(-1.26,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.125,0.3,-0.5);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.055,0.3,-0.6);
glEnd();
glPopMatrix();

//15

glPushMatrix();
glTranslatef(-1.485,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.14,0.3,-0.6);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.065,0.3,-0.5);
glEnd();
glPopMatrix();
//16

glPushMatrix();
glTranslatef(-1.71,-0.2,0.0);
color(10.329412f, 0.223529f, 0.027451f,0.780392f, 0.568627f, 0.113725f,0.992157f, 0.941176f, 0.807843f,1.0f);
glBegin(GL_POLYGON);			
glColor3f(0.0, 0.0, 0.0);//
glBegin(GL_QUADS);
glColor3f(1.0, 0.0, 1.0);
glVertex3d(0.135,0.3,-0.5);
glVertex3d(0.1,0.2,0.00);
glVertex3d(-0.10,0.2,0.00);
glVertex3d(-0.075,0.3,-0.4);
glEnd();
glPopMatrix();





	
	}
	


void display(void)
{
    	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glScalef(9.0,9.0,9.0);
	base();
	atras1();
	atras2();
	cuadro();
	cono();
	circulo();
	
	glFlush();
}


void reshape(int w, int h)
{
    glClearColor(0,0,0.2,0.1);
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80.0f, (GLfloat)w/(GLfloat)h, 0.0f, 1.0f);

			 
		gluLookAt(0.0,-24.0,-10.0
			     ,0.0,3.0,-1.0
			 ,0.0,1.0,0.0);	
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 900);//tamaño de la ventana
    glutInitWindowPosition (300, 100);//posicion de la ventana en la pantalla
    glutCreateWindow ("Tablero");//nombre de la ventana
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
