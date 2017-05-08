#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
static int girox = 0;
static int giroy = 0;
//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;
GLfloat scale2=1.0f;
void init(void)
{
	GLfloat light_position[] = { -1.0, 0.0, -1.38, 0.0 };
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); //Activamos las luces en 0
    glDepthFunc(GL_LESS); //comparación de profundidad
    glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
    glLightfv(GL_LIGHT0,GL_POSITION,light_position);
// Queremos que se dibujen las caras frontales
// y con un color solido de relleno.
    glPolygonMode(GL_FRONT, GL_FILL);

}
//funcion que controla los matariales 
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
	
void reshape(int w, int h)
{
    glViewport(0, 0,  (GLsizei) w, (GLsizei) h);
// Activamos la matriz de proyeccion.
    glMatrixMode(GL_PROJECTION);
// "limpiamos" esta con la matriz identidad.
    glLoadIdentity();
// Usamos proyeccion ortogonal
    glOrtho(-500, 500, -500, 500, -500, 500);
// Activamos la matriz de modelado/visionado.
    glMatrixMode(GL_MODELVIEW);
// "Limpiamos" la matriz
    glLoadIdentity();
}


void display(void)
{
	GLfloat position[] = { 0.0, 0.0, 1.5, 1.0 };
	 //glShadeModel(GL_SMOOTH);
    glClearColor(0,1,0,0.0);
// "Limpiamos" el frame buffer con el color de "Clear", en este
// caso negro.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );
    glLoadIdentity();
    
// Rotacion de 30 grados en torno al eje x
    glRotated(30.0, 1.0, 0.0, 0.0);
// Rotacion de -50 grados en torno al eje y
    glRotated(-50.0, 0.0, 1.0, 0.0);


	//BASE
	glPushMatrix();
    glTranslatef(17.5,-220.0,30.0);
    color(10.15f, 0.1, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,1.0,0.0);
    glScalef(2.5, 0.2, 2.5);
    glutSolidCube (120.0);
    glPopMatrix();
    //BASE FIN
     
	//IZQUIERDA
	glPushMatrix();
    glTranslatef(-145.0,08.0,30.0);
	color(2.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.2, 4.0, 2.5);
    glutSolidCube (120.0);
    glPopMatrix();
    //IZQUIERDA FIN
    
    
    	//ARRIBA
	glPushMatrix();
    glTranslatef(-0.5,5.0,-132.5);
    color(3.05f, 0.0, 0.0f,0.5f, 0.5f, 0.4f,0.7f, 0.04f, 0.04f,0.078125f);
    glColor3f(1.0,1.0,0.0);
    glScalef(2.7, 4.0, 0.2);
    glutSolidCube (120.0);
    glPopMatrix();
    //ARRIBA FIN
    
    
    	//MESA
	glPushMatrix();
    glTranslatef(-42.5,-100.0,-30.0);
    color(1.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(1.5, 0.1, 1.5);
    glutSolidCube (120.0);
    glPopMatrix();
    //MESA FIN
    
    	//PATA
	glPushMatrix();
    glTranslatef(-72.5,-125.0,90.0);
    color(1.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.1, 0.9, 0.1);
    glutSolidCube (120.0);
    glPopMatrix();
    //PATA FIN
    
    
     	//FRENTE
	glPushMatrix();
    glTranslatef(80.5,-125.0,85.0);
    color(1.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.1, 0.9, 0.1);
    glutSolidCube (120.0);
    glPopMatrix();
    //FRENTE FIN
    
    
      	//FRENTE
	glPushMatrix();
    glTranslatef(80.5,-125.0,-65.0);
    color(1.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.1, 0.9, 0.1);
    glutSolidCube (120.0);
    glPopMatrix();
    //FRENTE FIN
        
           	//FRENTE
	glPushMatrix();
    glTranslatef(80.5,-75.0,60.0);
    color(1.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.1, 0.3, 0.1);
    glutSolidCube (120.0);
    glPopMatrix();
    //FRENTE FIN
    
    
    glPushMatrix();
    glTranslatef(80.5,0.0,60.0);
    color(20.0f, 0.0, 0.0f,0.5f, 0.5f, 0.0f,0.6f, 0.6f, 0.5f,0.25f);
    glColor3f(1.0,1.0,0.0);
    glScalef(0.2, 0.3, 0.2);
    glutSolidTeapot (120.0);
    glPopMatrix();
     
     
	glFlush();
	 glutSwapBuffers();
}

int main(int argc, char **argv)
{
	// Inicializo OpenGL
    glutInit(&argc, argv);
	// Activamos buffer simple y colores del tipo RGB
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	// Definimos una ventana de medidas 800 x 600 como ventana
	// de visualizacion en pixels	
    glutInitWindowSize (1000, 800);
	// Posicionamos la ventana en la esquina superior izquierda de
	// la pantalla.
    glutInitWindowPosition (10, 0);
	// Creamos literalmente la ventana y le adjudicamos el nombre que se
	// observara en su barra de titulo.
    glutCreateWindow ("Grua Mecanica");
	// Inicializamos el sistema
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
  //  glutSpecialFunc(specialKeys);
    glutMainLoop();
    return 0;
}
