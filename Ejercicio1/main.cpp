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
GLfloat numero=-10.0f,inicialy=0.7f,i=0;
GLint i1=1,id=1,pos=0;


void Tablero(void)
{
for(i1;i1<=8;i1++){
	if(pos==0){
for(id;id<=8;id++){
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
		numero+=0.2;
	}
	else{
		glPushMatrix();
		glTranslatef(numero,inicialy,0.0);
		glBegin(GL_POLYGON);			
		glColor3f(0.0, 0.0, 0.0);//
		glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
		glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
		glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
		glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
		glEnd();	
		glPopMatrix();	
		numero+=0.2;
	
		}
	}
}

	else{
for(id;id<=8;id++){
	
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
	numero+=0.2;
}
	else{
	glPushMatrix();
	glTranslatef(numero,inicialy,0.0);
	glBegin(GL_POLYGON);			
	glColor3f(0.0, 0.0, 0.0);//
	glVertex3f(  0.1, -0.1, 0.0 );      // V1 Blanco
    glVertex3f(  0.1,  0.1, 0.0 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, 0.0 );      // V3 es azul
    glVertex3f( -0.1, -0.1, 0.0 );      // V4 rojo
	glEnd();	
	glPopMatrix();	
	numero+=0.2;
	}
}

}


	inicialy-=0.2;
	id=1;
	numero=-0.7;
	if((i1%2)==0){
		pos=0;
		
		}
		else{
			pos=1;
			}

}
}

void display(void)
{
    	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glScalef(15.0,15.0,15.0);
	Tablero();
	glFlush();
}

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void reshape(int w, int h)
{
    glClearColor(0,0,0.2,0.1);
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(80.0f, (GLfloat)w/(GLfloat)h, 0.0f, 1.0f);
	
	gluLookAt(0.0,-0.9,-20.0
			 ,0.0,3.0,-1.0
			 ,0.0,1.0,0.0);	
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);//tamaño de la ventana
    glutInitWindowPosition (300, 100);//posicion de la ventana en la pantalla
    glutCreateWindow ("Tablero");//nombre de la ventana
    init ();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
