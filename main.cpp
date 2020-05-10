
//----------------------------- CG PROJETO FINAL 2019 - SHOPPING -----------------------------

//Trabalho Realizado Por:
//							André Leite,
//							Sara Inácio, 2015240471

//--------------------------------------------------------------------------------------------


#define GLUT_DISABLE_ATEXIT_HACK
#define STB_IMAGE_IMPLEMENTATION
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GL\glut.h>
#include <GL\gl.h>
#include <GL\glaux.h>
#include "stb_image.h"
#include "RgbImage.h"
#define   PI 3.14159265359
#define RandomFactor 2.0	//cannot be variable, because it is only use in InitFountain(),

//---------- CORES ----------
#define AZUL     0.0, 0.0, 1.0, 1.0
#define VERMELHO 1.0, 0.0, 0.0, 1.0
#define AMARELO  1.0, 1.0, 0.0, 1.0
#define VERDE    0.0, 1.0, 0.0, 1.0
#define LARANJA  0.8, 0.6, 0.1, 1.0
#define WHITE    1.0, 1.0, 1.0, 1.0
#define BLACK    0.0, 0.0, 0.0, 1.0
#define GRAY1    0.2, 0.2, 0.2, 1.0
#define GRAY2    0.2, 0.9, 0.9, 0.2
#define GRAY3    0.9, 0.9, 0.9, 1.0
#define PRETO    0.0, 0.0, 0.0, 1.0
#define UMVERDE  0.38, 0.27, 0.25, 1.0

//----------  VARIÁVEIS ----------
int width, height, nrChannels;
unsigned char *data = stbi_load("container.jpg", &width, &height, &nrChannels, 0);


//----------  VARIÁVEIS FONTE ----------
//LADO DIREITO
float sx1 = 0.0, sy1 = 0.0;
float x2 = 0.0, y2 = 0.0;
float x3 = 0.0, y3 = 0.0;
float x4 = 0.0, y4 = 0.0;
float x5 = 0.0, y5 = 0.0;
float x6 = 0.0, y6 = 0.0;
float x7 = 0.0, y7 = 0.0;
float x8 = 0.0, y8 = 0.0;
float x9 = 0.0, y9 = 0.0;
float x10 = 0.0, y10 = 0.0;

float x11 = 0.0, y11 = 0.0;
float x12 = 0.0, y12 = 0.0;
float x13 = 0.0, y13 = 0.0;
float x14 = 0.0, y14 = 0.0;
float x15 = 0.0, y15 = 0.0;
float x16 = 0.0, y16 = 0.0;
float x17 = 0.0, y17 = 0.0;
float x18 = 0.0, y18 = 0.0;
float x19 = 0.0, y19 = 0.0;
float x20 = 0.0, y20 = 0.0;

//LADO ESQUERDO
float x21 = 0.0, y21 = 0.0;
float x22 = 0.0, y22 = 0.0;
float x23 = 0.0, y23 = 0.0;
float x24 = 0.0, y24 = 0.0;
float x25 = 0.0, y25 = 0.0;
float x26 = 0.0, y26 = 0.0;
float x27 = 0.0, y27 = 0.0;
float x28 = 0.0, y28 = 0.0;
float x29 = 0.0, y29 = 0.0;
float x30 = 0.0, y30 = 0.0;

float x31 = 0.0, y31 = 0.0;
float x32 = 0.0, y32 = 0.0;
float x33 = 0.0, y33 = 0.0;
float x34 = 0.0, y34 = 0.0;
float x35 = 0.0, y35 = 0.0;
float x36 = 0.0, y36 = 0.0;
float x37 = 0.0, y37 = 0.0;
float x38 = 0.0, y38 = 0.0;
float x39 = 0.0, y39 = 0.0;
float x40 = 0.0, y40 = 0.0;

//CIMA
float x41 = 0.0, y41 = 0.0;
float x42 = 0.0, y42 = 0.0;
float x43 = 0.0, y43 = 0.0;
float x44 = 0.0, y44 = 0.0;
float x45 = 0.0, y45 = 0.0;
float x46 = 0.0, y46 = 0.0;
float x47 = 0.0, y47 = 0.0;
float x48 = 0.0, y48 = 0.0;
float x49 = 0.0, y49 = 0.0;
float x50 = 0.0, y50 = 0.0;

float x51 = 0.0, y51 = 0.0;
float x52 = 0.0, y52 = 0.0;
float x53 = 0.0, y53 = 0.0;
float x54 = 0.0, y54 = 0.0;
float x55 = 0.0, y55 = 0.0;
float x56 = 0.0, y56 = 0.0;
float x57 = 0.0, y57 = 0.0;
float x58 = 0.0, y58 = 0.0;
float x59 = 0.0, y59 = 0.0;
float x60 = 0.0, y60 = 0.0;

//CIMA 2
float x61 = 0.0, y61 = 0.0;
float x62 = 0.0, y62 = 0.0;
float x63 = 0.0, y63 = 0.0;
float x64 = 0.0, y64 = 0.0;
float x65 = 0.0, y65 = 0.0;
float x66 = 0.0, y66 = 0.0;
float x67 = 0.0, y67 = 0.0;
float x68 = 0.0, y68 = 0.0;
float x69 = 0.0, y69 = 0.0;
float x70 = 0.0, y70 = 0.0;

float x71 = 0.0, y71 = 0.0;
float x72 = 0.0, y72 = 0.0;
float x73 = 0.0, y73 = 0.0;
float x74 = 0.0, y74 = 0.0;
float x75 = 0.0, y75 = 0.0;
float x76 = 0.0, y76 = 0.0;
float x77 = 0.0, y77 = 0.0;
float x78 = 0.0, y78 = 0.0;
float x79 = 0.0, y79 = 0.0;
float x80 = 0.0, y80 = 0.0;

//----------  COORDENADAS ----------
GLfloat  xC=40.0, zC=20.0;
GLint    wScreen=1600, hScreen=920;
GLint    msec     = 100;

//----------  OBSERVADOR ----------
GLfloat  rVisao = 3.0, aVisao=0.5*PI, incVisao=0.1;
GLfloat  angPersp = 90.0;
GLfloat  obsPini[] = {0, 00, zC};
GLfloat  obsPfin[] = {obsPini[0]-rVisao*cos(aVisao), obsPini[1], obsPini[2]-rVisao*sin(aVisao)};
GLint xpos, ypos;

//----------  SKYBOX ----------
GLUquadricObj*  bola = gluNewQuadric ( );
GLuint   texture[15];
RgbImage imag;

//---------- LUZ ----------
GLfloat localPos[4]   = {0.0, 40.0, 15.0, 0.8};   // no teto
GLfloat localCorAmb[4]= { 0.7, 0.7, 0.9, 1.0};
GLfloat localCorDif[4]= { 0.8, 0.8, 0.8, 1.0};
GLfloat localCorEsp[4]= { 0.8, 0.8, 0.8, 1.0};
GLfloat focoDir[4]= { 0.7, 0.8, 0.0, 1.0};
float  CYAN     []= {0.8, 0.8, 0.8, 1.0 };
GLint  ligaLuz = 1;
GLfloat matAmbiente[] = {0.7, 0.7, 0.8, 1.0};
GLfloat matDifusa[]   = {0.6, 0.6, 0.6, 1.0};
GLfloat matEspecular[]= {0.2, 0.2, 0.2, 1.0};
GLint   especMaterial = 10;

//----------  VÉRTICES E DEFINIÇÕES ----------
int verticesESC= 3*53;
static GLuint poligono_0[] = {1,1,1,1};
static GLuint poligono_1[] = {1,1,1,1};
static GLuint poligono_2[] = {1,1,1,1};
static GLuint entrance[] = {1,1,1,1};
static GLuint second_floor_1[] = {1,1,1,1};
static GLuint second_floor_2[] = {1,1,1,1};
static GLfloat vertices_entrance[] = {

0.0, 0.30, -0.64,
0.1, 0.30, -0.64,
0.1, 0.0, -0.64,
0.5, 0.0, -0.64,
0.5, 0.60, -0.64,
0.0, 0.60, -0.64

};
static GLfloat vertices_floor[]={

-15, 1.12, -4,
15, 1.12, -4,
15, 1.12, -3.20,
-15, 1.12, -3.20

};
static GLfloat corrimao[]={

-0.42, 0.0, -0.64, //
-0.42, 0.45, -0.64,  //    hand wall
-0.42, 1.40, -3.20, //
-0.42, 0.0, -3.20,  //

-0.42, 0.45, -0.64, //
-0.46, 0.45, -0.64,  //    top deck
-0.46, 1.40, -3.20, //
-0.42, 1.40, -3.20,  //

-0.46, 0.0, -0.64, //
-0.46, 0.45, -0.64,  //    hand wall
-0.46, 1.40, -3.20, //
-0.46, 0.0, -3.20,  //

-0.42, 0.00, -0.64, //
-0.46, 0.00, -0.64,  //    top deck
-0.46, 0.45, -0.64, //
-0.42, 0.45, -0.64,  //

};
static GLfloat corrimaoR[]={

0.42, 0.0, -0.64, //
0.42, 0.45, -0.64,  //    hand wall
0.42, 1.40, -3.20, //
0.42, 0.0, -3.20,  //

0.42, 0.45, -0.64, //
0.46, 0.45, -0.64,  //    top deck
0.46, 1.40, -3.20, //
0.42, 1.40, -3.20,  //

0.46, 0.0, -0.64, //
0.46, 0.45, -0.64,  //    hand wall
0.46, 1.40, -3.20, //
0.46, 0.0, -3.20,  //

0.42, 0.00, -0.64, //
0.46, 0.00, -0.64,  //    top deck
0.46, 0.45, -0.64, //
0.42, 0.45, -0.64,  //

};
static GLfloat vertices[]={

-0.5, 0.0, -0.64, //
0.5, 0.0, -0.64,  //    COBERTOR
0.5, 0.0, -0.96,  //
-0.5, 0.0, -0.96, //

-0.5, 0.0, -0.96, //
0.5, 0.0, -0.96,  //    ESPELHO
0.5, 0.16, -0.96, //
-0.5, 0.16, -0.96,//

-0.5, 0.16, -1.28,
0.5, 0.16, -1.28,
0.5, 0.16, -0.96,
-0.5, 0.16, -0.96,

-0.5, 0.16, -1.28,
0.5, 0.16, -1.28,
0.5, 0.32, -1.28,
-0.5, 0.32, -1.28,

-0.5, 0.32, -1.6,
0.5, 0.32, -1.6,
0.5, 0.32, -1.28,
-0.5, 0.32, -1.28,

-0.5, 0.32, -1.6,
0.5, 0.32, -1.6,
0.5, 0.48, -1.6,
-0.5, 0.48, -1.6,

-0.5, 0.48, -1.92,
0.5, 0.48, -1.92,
0.5, 0.48, -1.6,
-0.5, 0.48, -1.6,

-0.5, 0.48, -1.92,
0.5, 0.48, -1.92,
0.5, 0.64, -1.92,
-0.5, 0.64, -1.92,

-0.5, 0.64, -2.24,
0.5, 0.64, -2.24,
0.5, 0.64, -1.92,
-0.5, 0.64, -1.92,

-0.5, 0.64, -2.24,
0.5, 0.64, -2.24,
0.5, 0.8, -2.24,
-0.5, 0.8, -2.24,

-0.5, 0.8, -2.56,
0.5, 0.8, -2.56,
0.5, 0.8, -2.24,
-0.5, 0.8, -2.24,

-0.5, 0.8, -2.56,
0.5, 0.8, -2.56,
0.5, 0.96, -2.56,
-0.5, 0.96, -2.56,

-0.5, 0.96, -2.88,
0.5, 0.96, -2.88,
0.5, 0.96, -2.56,
-0.5, 0.96, -2.56,

-0.5, 0.96, -2.88,
0.5, 0.96, -2.88,
0.5, 1.12, -2.88,
-0.5, 1.12, -2.88,

-0.5, 1.12, -3.20,
0.5, 1.12, -3.20,
0.5, 1.12, -2.88,
-0.5, 1.12, -2.88,

-0.5, 1.12, -3.20,
0.5, 1.12, -3.20,
0.5, 1.12, -2.88,
-0.5, 1.12, -2.88

};
static GLfloat normais[] = {
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,

0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,
0.000000, 1.000000, 0.000000,

0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000,
0.000000, 0.000000, 1.000000


};
static GLfloat cores[]={

0.35, 0.44, 0.68,
0.35, 0.44, 0.68,
0.54, 0.54, 0.54,
0.54, 0.54, 0.54,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

0.54, 0.54, 0.54,
0.54, 0.54, 0.54,
0.35, 0.44, 0.68,
0.35, 0.44, 0.68,

};
static GLfloat arrayTexture[]={
0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0,

1,1, 0,
1, 0,0,
1,0, 1,
1, 0,1,

0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0,

1,1, 0,
1, 0,0,
1,0, 1,
1, 0,1,

0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0,

1,1, 0,
1, 0,0,
1,0, 1,
1, 0,1,

0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0,

1,1, 0,
1, 0,0,
1,0, 1,
1, 0,1,

0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0,

1,1, 0,
1, 0,0,
1,0, 1,
1, 0,1,

0,0, 1,
0, 1,1,
0,1, 0,
0, 1,0

};
static GLfloat cylinder[]={
        128, 128, 128, 255,
        255, 0, 0, 255,
        0, 255, 0, 255,
        0, 0, 255, 255,
};


//--------------------------------------------------------------

GLfloat xRotated, yRotated, zRotated;
GLdouble radius=5;
GLfloat qaBlack[] = {0.0, 0.0, 0.0, 1.0}; //Black Color
GLfloat qaGreen[] = {1.0, 0.0, 0.0, 1.0}; //Green Color
GLfloat qaWhite[] = {1.0, 1.0, 1.0, 1.0}; //White Color
GLfloat qaRed[] = {1.0, 0.0, 0.0, 1.0}; //Red Color

    // Set lighting intensity and color
GLfloat qaAmbientLight[]    = {0.1, 0.1, 0.1, 1.0};
GLfloat qaDiffuseLight[]    = {1, 1, 1, 1.0};
GLfloat qaSpecularLight[]    = {0.6, 0.6, 0.6, 1.0};
GLfloat emitLight[] = {0.9, 0.9, 0.9, 0.4};
GLfloat Noemit[] = {0.0, 0.0, 0.0, 1.0};
    // Light source position
GLfloat qaLightPosition[]    = {0, -10, 0, 1};
GLfloat qaLightDirection[]    = {0, 0, -1};
GLfloat dirVector0[]={ 0.0, 0.0, 1.0, 0.0};
GLfloat dirVector1[]={ 0.0, 0.0, 1.0, 0.0};
GLfloat dirVector2[]={ 0.0, 1.0, 1.0, 0.0};
GLfloat dirVector3[]={ 0.0, 0.0, 0.0, 0.0};
GLfloat qaLightPosition1[]    = {0, -5, 0, 1};
GLfloat qaLightPosition2[]    = {0, -9, -15, 1};
GLfloat qaLightPosition3[]    = {0, 15, 5, 1};


//-------------------------------------------------------------





//---------- INICIALIZAÇÃO LUZ ----------
void initLights(void)
{
    glEnable(GL_LIGHTING);

     // Set lighting intensity and color
    glLightfv(GL_LIGHT0, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT0, GL_POSITION, qaLightPosition);
    glLightfv(GL_LIGHT0, GL_SPECULAR, qaSpecularLight);
    ////////////////////////////////////////////////


     glLightf(GL_LIGHT0, GL_SPOT_CUTOFF, 60.0);// set cutoff angle
     glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dirVector0);
     glLightf(GL_LIGHT0, GL_SPOT_EXPONENT, 1); // set focusing strength

     // Set lighting intensity and color
    glLightfv(GL_LIGHT1, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT1, GL_POSITION, qaLightPosition);
    glLightfv(GL_LIGHT1, GL_SPECULAR, qaSpecularLight);
    ////////////////////////////////////////////////


     glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 30.0);// set cutoff angle
     glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, dirVector0);
     glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 1); // set focusing strength

     // Set lighting intensity and color
    glLightfv(GL_LIGHT2, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT2, GL_POSITION, qaLightPosition);
    glLightfv(GL_LIGHT2, GL_SPECULAR, qaSpecularLight);
    ////////////////////////////////////////////////


     glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, 30.0);// set cutoff angle
     glLightfv(GL_LIGHT2, GL_SPOT_DIRECTION, dirVector0);
     glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, 1); // set focusing strength


     // Set lighting intensity and color
    glLightfv(GL_LIGHT3, GL_AMBIENT, qaAmbientLight);
    glLightfv(GL_LIGHT3, GL_DIFFUSE, qaDiffuseLight);
    glLightfv(GL_LIGHT3, GL_POSITION, qaLightPosition2);
    glLightfv(GL_LIGHT3, GL_SPECULAR, qaSpecularLight);
    ////////////////////////////////////////////////


     glLightf(GL_LIGHT3, GL_SPOT_CUTOFF, 30.0);// set cutoff angle
     glLightfv(GL_LIGHT3, GL_SPOT_DIRECTION, dirVector2);
     glLightf(GL_LIGHT3, GL_SPOT_EXPONENT, 1); // set focusing strength
}

//---------- LUZES MATERIAIS ----------
void initMaterials(void)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,   qaWhite  );
	glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,   qaWhite );
	glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,  qaWhite);
	glMaterialf (GL_FRONT_AND_BACK,GL_SHININESS, 120);
}

//----------  OBJETOS ----------
//POSTER
void spzone()
{
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[11]);
    initMaterials();		// branco

    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(VERDE);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC+0.4,  20, 10 );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( -xC+0.4,  20,  -5 );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( -xC+0.4,  30, -5);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC+0.4,  30, 10);
        glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}

//PORTA
void door()
{
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[9]);
    initMaterials();		// branco

    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(VERDE);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC/4,  0, xC-0.02 );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC/4,  0,  xC-0.02 );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC/4,  11, xC-0.02);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC/4,  11, xC-0.02);
        glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}

//SINAL SAÍDA
void exit_sign()
{
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[10]);
    initMaterials();
    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glScalef(-1.0,1.0,1.0);
        glColor4f(VERDE);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC/7,  12, xC-0.02 );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC/7,  12,  xC-0.02 );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC/7,  15, xC-0.02);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC/7,  15, xC-0.02);
        glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}

//VIDRO

void draw_glass(){

    glPushMatrix();
        glTranslatef ( 0, -4.0, -1.0);
        glScalef(1.0,6.0,5.0);
        glBegin(GL_QUADS);
            glColor3f(0.88, 0.2, 0.1);     // verde

            glTexCoord2f(0.0f,0.0f);  glVertex3f(-xC, 8, -zC);
            glTexCoord2f(0.5f, 0.0f); glVertex3f(xC, 8, -zC);
            glTexCoord2f(0.5f, 1.0f); glVertex3f(xC, 8,  zC);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-xC, 8,  zC);
        glEnd();
    glPopMatrix();

}


//CORRIMÃO ESCADAS
void drawCorrimao()
{
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[12]);
    initMaterials();
    glVertexPointer(3, GL_FLOAT, 0, corrimao);
	glEnableClientState(GL_VERTEX_ARRAY);

    /*----------------------------- NEAR LEFT STAIRS ---------------------*/


    glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( -16.8, -4.0, -1.0);
        glScalef( 12, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();

    glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( -10.8, -4.0, -1.0);
        glScalef( 12, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();

    /*----------------------------- NEAR RIGHT STAIRS ---------------------*/

    glVertexPointer(3, GL_FLOAT, 0, corrimaoR);
	glEnableClientState(GL_VERTEX_ARRAY);

    glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( 16.0, -4.0, -1.0);
        glScalef( 12, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();

    glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( 10.0, -4.0, -1.0);
        glScalef( 12, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);


    /*----------------------------- CENTER STAIRS ---------------------*/
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[13]);
    initMaterials();
     glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( -23, -4.0, -1.0);
        glScalef( 30.6, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();

    glPushMatrix();
        glColor4f(VERDE);
        glTranslatef ( -3, -4.0, -1.0);
        glScalef( 30.6, 6 ,5);
        for( int p = 0; p < 4; p++ ){
            poligono_0[0]= p*4+0;
            poligono_0[1]= p*4+1 ;
            poligono_0[2]= p*4+2 ;
            poligono_0[3]= p*4+3 ;
            glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_0);
        }
    glPopMatrix();

    glVertexPointer(3, GL_FLOAT, 0, vertices);
	glEnableClientState(GL_VERTEX_ARRAY);
    glDisable(GL_TEXTURE_2D);

}

//CHÃO
void drawChao()
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Chao y=0
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[0]);
    initMaterials();

	glPushMatrix();
		glColor4f(UMVERDE);
		glTranslatef(0,-4.1,0);
		glBegin(GL_QUADS);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC,  0, -xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( -xC,  0,  xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i(  xC,  0,  xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i(  xC,  0, -xC);
		glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor4f(UMVERDE);
		glTranslatef(0,-4.1,0);
		glBegin(GL_TRIANGLES);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( xC,  0, -xC );
			glTexCoord2f(0.0f, 1.0f); 	 glVertex3i( xC*2,  0,  xC/4 );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  0,  xC);
		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

//ESCADAS 1
void drawEscada()
{
	//------------------------- ESCADA
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[3]);
    initMaterials();		// branco
	glPushMatrix();


        glPushMatrix();
        glTranslatef ( -19.3, -4.0, -1.0);
        glScalef( 6, 6 , 5);
        for( int p = 0; p < 16; p++ ){
			poligono_2[0]= p*4+0;
			poligono_2[1]= p*4+1 ;
			poligono_2[2]= p*4+2 ;
			poligono_2[3]= p*4+3 ;
			glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_2);
		}
        glPopMatrix();
        glDisable(GL_TEXTURE_2D);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[5]);
    initMaterials();		// branco
        glPushMatrix();
            glTranslatef ( 0, -4.0, -1.0);
            glScalef( 20, 6 ,5);
            for( int p = 0; p < 16; p++ ){
                poligono_1[0]= p*4+0;
                poligono_1[1]= p*4+1 ;
                poligono_1[2]= p*4+2 ;
                poligono_1[3]= p*4+3 ;
                glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_1);
            }
        glPopMatrix();
        glDisable(GL_TEXTURE_2D);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[3]);
    initMaterials();		// branco
		glPushMatrix();
		glTranslatef ( 18.5, -4.0, -1.0);
        glScalef( 6, 6 , 5);
        for( int p = 0; p < 15; p++ ){
			poligono_2[0]= p*4+0;
			poligono_2[1]= p*4+1 ;
			poligono_2[2]= p*4+2 ;
			poligono_2[3]= p*4+3 ;
			glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_INT, poligono_2);
		}
        glPopMatrix();
        glDisable(GL_TEXTURE_2D);

	 glPopMatrix();

}

//ESCADAS 2
void drawSecond()
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[4]);
	//------------------------- segundo
    glPushMatrix();

        glTranslatef ( 0, -4.0, -1.0);
        glScalef(1.0,6.0,5.0);
        glBegin(GL_QUADS);
            glColor3f(0.38, 0.1, 0.25);     // verde
            glTexCoord2f(0.0f,0.0f);  glVertex3f(-xC, 1.12, -10);
            glTexCoord2f(0.5f, 0.0f); glVertex3f(xC, 1.12, -10);
            glTexCoord2f(0.5f, 1.0f); glVertex3f(xC, 1.12,  -3.20);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(-xC, 1.12,  -3.20);
        glEnd();


        glBegin(GL_QUADS);
            glColor3f(0.38, 0.1, 0.25);     // verde
            glTexCoord2f(0.0f,0.0f);           glVertex3f(-xC, 0.00, -3.20);
			glTexCoord2f(1.5f, 0.0f);          glVertex3f(xC, 0.00, -3.20);
			glTexCoord2f(1.5f, 0.3f);          glVertex3f(xC, 1.12,  -3.20);
			glTexCoord2f(0.0f, 0.3f);          glVertex3f(-xC, 1.12,  -3.20);

        glEnd();


    glPopMatrix();

    	//------------------------- segundo

    glPushMatrix();

        glBegin(GL_TRIANGLES);
            glColor3f(0.38, 0.1, 0.25);     // verde
            glVertex3f(xC, 2.7, -xC);
            glVertex3f(xC*2, 2.7, xC/4);
            glVertex3f(xC, 2.7,  -xC/2.36);
        glEnd();

        glBegin(GL_QUADS);
            glColor3f(0.38, 0.1, 0.25);     // verde
            glTexCoord2f(0.0f,0.0f); glVertex3f(xC, -4.0, -xC/2.36);
            glTexCoord2f(0.5f, 0.0f); glVertex3f(xC, 2.7, -xC/2.36);
            glTexCoord2f(0.5f, 1.0f); glVertex3f(xC*2, 2.7, xC/4);
            glTexCoord2f(0.0f, 1.0f); glVertex3f(xC*2, -4.0, xC/4);
        glEnd();


    glPopMatrix();
    glDisable(GL_TEXTURE_2D);


}

//ENTRADA
void drawEntrance()
{
    glVertexPointer(3, GL_FLOAT, 0, vertices_entrance);
	glEnableClientState(GL_VERTEX_ARRAY);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[4]);
    initMaterials();		// branco
    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(GRAY2);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC,  0, xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC,  0, xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  40, xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC,  40, xC);
        glEnd();
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
    glDisableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
	glEnableClientState(GL_VERTEX_ARRAY);

};

//PAREDES
void drawWalls()
{
	//------------------------- segundo
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[4]);
    initMaterials();		// branco

    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(VERDE);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC,  0, -xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( -xC,  0,  xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( -xC,  40, xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC,  40, -xC);
        glEnd();
    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[7]);
    initMaterials();		// branco

    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(VERMELHO);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC,  0, -xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC,  0,  -xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  40, -xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( -xC,  40, -xC);
        glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[8]);
    initMaterials();		// branco

     glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(VERDE);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( xC*2,  0, xC/4);
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC,  0,  xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  40, xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( xC*2,  40, xC/4);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        glTranslatef ( 0, -5.0, 0);
        glColor4f(AZUL);
        glBegin(GL_QUADS);
            glTexCoord2f(0.0f,0.0f);  	 glVertex3i( xC*2,  0, xC/4);
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC,  0,  -xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  40, -xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i( xC*2,  40, xC/4);
        glEnd();
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

}

//TETO
void drawTeto()
{
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Chao y=0
    glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D,texture[2]);
	glPushMatrix();

		glColor4f(GRAY3);
		glTranslatef(0,-5,0);
		glBegin(GL_QUADS);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC,  40, -xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( -xC,  40,  xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i(  -xC/4,  40,  xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i(  -xC/4,  40, -xC);
		glEnd();
	glPopMatrix();

	glPushMatrix();
		glColor4f(GRAY3);
		glTranslatef(0,-5,0);
		glBegin(GL_QUADS);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( xC,  40, -xC );
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( xC,  40,  xC );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i(  xC/4,  40,  xC);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i(  xC/4,  40, -xC);
		glEnd();
	glPopMatrix();

    glPushMatrix();
    glColor4f(UMVERDE);
		glBegin(GL_TRIANGLES);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( xC,  35, -xC );
			glTexCoord2f(0.0f, 1.0f); 	 glVertex3i( xC*2, 35,  xC/4 );
			glTexCoord2f(1.0f, 1.0f);    glVertex3i( xC,  35,  xC);
		glEnd();
	glPopMatrix();

    glDisable(GL_TEXTURE_2D);

}

//CÉU
void drawSky()
{
	glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[1]);
	glPushMatrix();
		glColor4f(AZUL);
		glTranslatef(0,0,0);
		glBegin(GL_QUADS);
			glTexCoord2f(0.0f,0.0f);  	 glVertex3i( -xC*2,  56, -xC*2);
			glTexCoord2f(1.0f, 0.0f); 	 glVertex3i( -xC*2,  56,  xC*2);
            glTexCoord2f(1.0f, 1.0f);    glVertex3i(  xC*2,  56,  xC*2);
			glTexCoord2f(0.0f, 1.0f);    glVertex3i(  xC*2,  56, -xC*2);
		glEnd();
	glPopMatrix();

	glDisable(GL_TEXTURE_2D);
}

//PILARES
void drawPilar()
{
    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[6]);
    gluQuadricDrawStyle ( quadratic, GLU_FILL   );
    gluQuadricNormals   ( quadratic, GLU_SMOOTH );
    gluQuadricTexture   ( quadratic, GL_TRUE    );
    glPushMatrix();
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glTranslatef(35.5f, 20.0f, -50.0f);
    gluCylinder(quadratic,1.0f,6.0f,80.0f,32,32);

    glTranslatef(1.0f, 13.0f, 1.0f);
    gluCylinder(quadratic,6.0f,1.0f,80.0f,32,32);
    glPopMatrix();

    glPushMatrix();
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glTranslatef(-35.5f, 20.0f, -50.0f);
    gluCylinder(quadratic,1.0f,6.0f,80.0f,32,32);

    glTranslatef(1.0f, 13.0f, 1.0f);
    gluCylinder(quadratic,6.0f,1.0f,80.0f,32,32);
    glPopMatrix();
	glDisable(GL_TEXTURE_2D);

}

//FONTE
void update()
{
	//-------------------- LADO DIREITO --------------------

	//BALL 1
    sx1 += 0.0064;
    sy1 += 0.0092;

  if(sx1 > 0.5 || sy1 > 1)
    {
        sx1 = 0.0;
        sy1 = 0.0;
    }

    //BALL 2
    x2 += 0.0067;
    y2 += 0.0062;

    if(x2 > 0.5 || y2 > 1)
    {
        x2 = 0.0;
        y2 = 0.0;
    }

    //BALL 3
    x3 += 0.005;
    y3 += 0.008;

    if(x3 > 0.5 || y3 > 1)
    {
        x3 = 0.0;
        y3 = 0.0;
    }

    //BALL 4
    x4 += 0.0082;
    y4 += 0.0076;

    if(x4 > 0.5 || y4 > 1)
    {
        x4 = 0.0;
        y4 = 0.0;
    }

    //BALL 5
    x5 += 0.0087;
    y5 += 0.007;

    if(x5 > 0.5 || y5 > 1)
    {
        x5 = 0.0;
        y5 = 0.0;
    }

    //BALL 6
    x6 += 0.0081;
    y6 += 0.0077;

    if(x6 > 0.5 || y6 > 1)
    {
        x6 = 0.0;
        y6 = 0.0;
    }

    //BALL 7
    x7 += 0.0045;
    y7 += 0.008;

    if(x7 > 0.5 || y7 > 1)
    {
        x7 = 0.0;
        y7 = 0.0;
    }

    //BALL 8
    x8 += 0.0035;
    y8 += 0.007;

    if(x8 > 0.5 || y8 > 1)
    {
        x8 = 0.0;
        y8 = 0.0;
    }

    //BALL 9
    x9 += 0.0064;
    y9 += 0.009;

    if(x9 > 0.5 || y9 > 1)
    {
        x9 = 0.0;
        y9 = 0.0;
    }

    //BALL 10
    x10 += 0.0074;
    y10 += 0.0095;

    if(x10 > 0.5 || y10 > 1)
    {
        x10 = 0.0;
        y10 = 0.0;
    }

    //BALL 11
    x11 += 0.0058;
    y11 += 0.0034;

    if(x11 > 0.5 || y11 > 1)
    {
        x11 = 0.0;
        y11 = 0.0;
    }

    //BALL 12
    x12 += 0.0034;
    y12 += 0.0034;

    if(x12 > 0.5 || y12 > 1)
    {
        x12 = 0.0;
        y12 = 0.0;
    }

    //BALL 13
    x13 += 0.0048;
    y13 += 0.0034;

    if(x13 > 0.5 || y13 > 1)
    {
        x13 = 0.0;
        y13 = 0.0;
    }

    //BALL 14
    x14 += 0.0083;
    y14 += 0.0034;

    if(x14 > 0.5 || y14 > 1)
    {
        x14 = 0.0;
        y14 = 0.0;
    }

    //BALL 15
    x15 += 0.0056;
    y15 += 0.0034;

    if(x15 > 0.5 || y15 > 1)
    {
        x15 = 0.0;
        y15 = 0.0;
    }

    //BALL 16
    x16 += 0.0036;
    y16 += 0.0091;

    if(x16 > 0.5 || y16 > 1)
    {
        x16 = 0.0;
        y16 = 0.0;
    }

    //BALL 17
    x17 += 0.007;
    y17 += 0.0034;

    if(x17 > 0.5 || y17 > 1)
    {
        x17 = 0.0;
        y17 = 0.0;
    }

    //BALL 18
    x18 += 0.0038;
    y18 += 0.0034;

    if(x18 > 0.5 || y18 > 1)
    {
        x18 = 0.0;
        y18 = 0.0;
    }

    //BALL 19
    x19 += 0.0082;
    y19 += 0.0034;

    if(x19 > 0.5 || y19 > 1)
    {
        x19 = 0.0;
        y19 = 0.0;
    }

    //BALL 20
    x20 += 0.0087;
    y20 += 0.0034;

    if(x20 > 0.5 || y20 > 1)
    {
        x20 = 0.0;
        y20 = 0.0;
    }

    //-------------------- LADO ESQUERDO --------------------

    //BALL 21
    x21 -= 0.0064;
    y21 += 0.0092;

    if(x21 < -0.5 || y21 > 1)
    {
        x21 = 0.0;
        y21 = 0.0;
    }

    //BALL 22
    x22 -= 0.0067;
    y22 += 0.0062;

    if(x22 < -0.5 || y22 > 1)
    {
        x22 = 0.0;
        y22 = 0.0;
    }

    //BALL 23
    x23 -= 0.005;
    y23 += 0.008;

    if(x23 < -0.5 || y23 > 1)
    {
        x23 = 0.0;
        y23 = 0.0;
    }

    //BALL 24
    x24 -= 0.0082;
    y24 += 0.0076;

    if(x24 < -0.5 || y24 > 1)
    {
        x24 = 0.0;
        y24 = 0.0;
    }

    //BALL 25
    x25 -= 0.0087;
    y25 += 0.007;

    if(x25 < -0.5 || y25 > 1)
    {
        x25 = 0.0;
        y25 = 0.0;
    }

    //BALL 26
    x26 -= 0.0081;
    y26 += 0.0077;

    if(x26 < -0.5 || y26 > 1)
    {
        x26 = 0.0;
        y26 = 0.0;
    }

    //BALL 27
    x27 -= 0.0045;
    y27 += 0.008;

    if(x27 < -0.5 || y27 > 1)
    {
        x27 = 0.0;
        y27 = 0.0;
    }

    //BALL 28
    x28 -= 0.0035;
    y28 += 0.007;

    if(x28 < -0.5 || y28 > 1)
    {
        x28 = 0.0;
        y28 = 0.0;
    }

    //BALL 29
    x29 -= 0.0064;
    y29 += 0.009;

    if(x29 < -0.5 || y29 > 1)
    {
        x29 = 0.0;
        y29 = 0.0;
    }

    //BALL 30
    x30 -= 0.0074;
    y30 += 0.0095;

    if(x30 < -0.5 || y30 > 1)
    {
        x30 = 0.0;
        y30 = 0.0;
    }

    //BALL 31
    x31 -= 0.0058;
    y31 += 0.0034;

    if(x31 < -0.5 || y31 > 1)
    {
        x31 = 0.0;
        y31 = 0.0;
    }

    //BALL 32
    x32 -= 0.0034;
    y32 += 0.0034;

    if(x32 < -0.5 || y32 > 1)
    {
        x32 = 0.0;
        y32 = 0.0;
    }

    //BALL 33
    x33 -= 0.0048;
    y33 += 0.0034;

    if(x33 < -0.5 || y33 > 1)
    {
        x33 = 0.0;
        y33 = 0.0;
    }

    //BALL 34
    x34 -= 0.0083;
    y34 += 0.0034;

    if(x34 < -0.5 || y34 > 1)
    {
        x34 = 0.0;
        y34 = 0.0;
    }

    //BALL 35
    x35 -= 0.0056;
    y35 += 0.0034;

    if(x35 < -0.5 || y35 > 1)
    {
        x35 = 0.0;
        y35 = 0.0;
    }

    //BALL 36
    x36 -= 0.0036;
    y36 += 0.0091;

    if(x36 < -0.5 || y36 > 1)
    {
        x36 = 0.0;
        y36 = 0.0;
    }

    //BALL 37
    x37 -= 0.007;
    y37 += 0.0034;

    if(x37 < -0.5 || y37 > 1)
    {
        x37 = 0.0;
        y37 = 0.0;
    }

    //BALL 38
    x38 -= 0.0038;
    y38 += 0.0034;

    if(x38 < -0.5 || y38 > 1)
    {
        x38 = 0.0;
        y38 = 0.0;
    }

    //BALL 39
    x39 -= 0.0082;
    y39 += 0.0034;

    if(x39 < -0.5 || y39 > 1)
    {
        x39 = 0.0;
        y39 = 0.0;
    }

    //BALL 40
    x40 -= 0.0087;
    y40 += 0.0034;

    if(x40 < -0.5 || y40 > 1)
    {
        x40 = 0.0;
        y40 = 0.0;
    }

    //-------------------- CIMA --------------------

    //BALL 41
    x41 += 0.0005;
    y41 += 0.0089;

    if(x41 > 0.25 || y41 > 1.25)
    {
        x41 = 0.0;
        y41 = 0.0;
    }

    //BALL 42
    x42 += 0.0003;
    y42 += 0.0067;

    if(x42 > 0.25 || y42 > 1.25)
    {
        x42 = 0.0;
        y42 = 0.0;
    }

    //BALL 43
    x43 += 1.0009;
    y43 += 0.008;

    if(x43 > 0.25 || y43 > 1.25)
    {
		x49 = 0.0;
        y49 = 0.0;
    }

    //BALL 50
    x50 += 0.0008;
    y50 += 0.0085;

    if(x50 > 0.25 || y50 > 1.25)
    {
        x50 = 0.0;
        y50 = 0.0;
    }

    //BALL 51
    x51 += 0.0005;
    y51 += 0.0088;

    if(x51 > 0.25 || y51 > 1.25)
    {
        x51 = 0.0;
        y51 = 0.0;
    }

    //BALL 52
    x52 += 0.0003;
    y52 += 0.0079;

    if(x52 > 0.25 || y52 > 1.25)
    {
        x52 = 0.0;
        y52 = 0.0;
    }

    //BALL 53
    x53 += 0.0009;
    y53 += 0.006;

    if(x53 > 0.25 || y53 > 1.25)
    {
        x53 = 0.0;
        y53 = 0.0;
    }

    //BALL 54
    x54 += 0.0006;
    y54 += 0.0081;

    if(x54 > 0.25 || y54 > 1.25)
    {
        x54 = 0.0;
        y54 = 0.0;
    }

    //BALL 55
    x55 += 0.0005;
    y55 += 0.0098;

    if(x55 > 0.25 || y55 > 1.25)
    {
        x55 = 0.0;
        y55 = 0.0;
    }

    //BALL 56
    x56 += 0.0008;
    y56 += 0.0085;

    if(x56 > 0.25 || y56 > 1.25)
    {
        x56 = 0.0;
        y56 = 0.0;
    }

    //BALL 57
    x57 += 0.0006;
    y57 += 0.007;

    if(x57 > 0.25 || y57 > 1.25)
    {
        x57 = 0.0;
        y57 = 0.0;
    }

    //BALL 58
    x58 += 0.0007;
    y58 += 0.008;

    if(x58 > 0.25 || y58 > 1.25)
    {
        x58 = 0.0;
        y58 = 0.0;
    }

    //BALL 59
    x59 += 0.0004;
    y59 += 0.009;

    if(x59 > 0.25 || y59 > 1.25)
    {
        x59 = 0.0;
        y59 = 0.0;
    }

    //BALL 60
    x60 += 0.0008;
    y60 += 0.0095;

    if(x60 > 0.25 || y60 > 1.25)
    {
        x60 = 0.0;
        y60 = 0.0;
    }

    //-------------------- CIMA 2 --------------------

    //BALL 61
    x61 -= 0.0005;
    y61 += 0.0043;

    if(x61 < -0.25 || y61 > 1.25)
    {
        x61 = 0.0;
        y61 = 0.0;
    }

    //BALL 62
    x62 -= 0.0003;
    y62 += 0.0077;

    if(x62 < -0.25 || y62 > 1.25)
    {
        x62 = 0.0;
        y62 = 0.0;
    }

    //BALL 63
    x63 -= 0.0009;
    y63 += 0.0058;

    if(x63 < -0.25 || y63 > 1.25)
    {
        x63 = 0.0;
        y63 = 0.0;
    }

    //BALL 64
    x64 -= 0.0006;
    y64 += 0.0036;

    if(x64 < -0.25 || y64 > 1.25)
    {
        x64 = 0.0;
        y64 = 0.0;
    }

    //BALL 65
    x65 -= 0.0005;
    y65 += 0.0027;

    if(x65 < -0.25 || y65 > 1.25)
    {
        x65 = 0.0;
        y65 = 0.0;
    }

    //BALL 66
    x66 -= 0.0008;
    y66 += 0.0063;

    if(x66 < -0.25 || y66 > 1.25)
    {
        x66 = 0.0;
        y66 = 0.0;
    }

    //BALL 67
    x67 -= 0.0006;
    y67 += 0.0038;

    if(x67 < -0.25 || y67 > 1.25)
    {
        x67 = 0.0;
        y67 = 0.0;
    }

    //BALL 68
    x68 -= 0.0007;
    y68 += 0.0051;

    if(x68 < -0.25 || y68 > 1.25)
    {
        x68 = 0.0;
        y68 = 0.0;
    }

    //BALL 69
    x69 -= 0.0004;
    y69 += 0.0047;

    if(x69 < -0.25 || y69 > 1.25)
    {
        x69 = 0.0;
        y69 = 0.0;
    }

    //BALL 70
    x70 -= 0.0008;
    y70 += 0.0082;

    if(x70 < -0.25 || y70 > 1.25)
    {
        x70 = 0.0;
        y70 = 0.0;
    }

    //BALL 71
    x71 -= 0.0005;
    y71 += 0.005;

    if(x71 < -0.25 || y71 > 1.25)
    {
        x71 = 0.0;
        y71 = 0.0;
    }

    //BALL 72
    x72 -= 0.0003;
    y72 += 0.0054;

    if(x72 < -0.25 || y72 > 1.25)
    {
        x72 = 0.0;
        y72 = 0.0;
    }

    //BALL 73
    x73 -= 0.0009;
    y73 += 0.0043;

    if(x73 < -0.25 || y73 > 1.25)
    {
        x73 = 0.0;
        y73 = 0.0;
    }

    //BALL 74
    x74 -= 0.0006;
    y74 += 0.0022;

    if(x74 < -0.25 || y74 > 1.25)
    {
        x74 = 0.0;
        y74 = 0.0;
    }

    //BALL 75
    x75 -= 0.0005;
    y75 += 0.0098;

    if(x75 < -0.25 || y75 > 1.25)
    {
        x75 = 0.0;
        y75 = 0.0;
    }

    //BALL 76
    x76 -= 0.0008;
    y76 += 0.0052;

    if(x76 < -0.25 || y76 > 1.25)
    {
        x76 = 0.0;
        y76 = 0.0;
    }

    //BALL 77
    x77 -= 0.0006;
    y77 += 0.0053;

    if(x77 < -0.25 || y77 > 1.25)
    {
        x77 = 0.0;
        y77 = 0.0;
    }

    //BALL 78
    x78 -= 0.0007;
    y78 += 0.0066;

    if(x78 < -0.25 || y78 > 1.25)
    {
        x78 = 0.0;
        y78 = 0.0;
    }

    //BALL 79
    x79 -= 0.0004;
    y79 += 0.0049;

    if(x79 < -0.25 || y79 > 1.25)
    {
        x79 = 0.0;
        y79 = 0.0;
    }

    //BALL 80
    x80 -= 0.0008;
    y80 += 0.0055;

    if(x80 < -0.25 || y80 > 1.25)
    {
        x80 = 0.0;
        y80 = 0.0;
    }
}

void makeFountain()
{


	glPushMatrix();
		glTranslatef(0.0, -0.5 , 12.5);
	    glScalef(2, 0.1, 2);	//Escala
		glutSolidCube(1);				//Cria o paralelipípedo
	glPopMatrix();

    GLUquadricObj *quadratic;
    quadratic = gluNewQuadric();
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D,texture[14]);
    gluQuadricDrawStyle ( quadratic, GLU_FILL   );
    gluQuadricNormals   ( quadratic, GLU_SMOOTH );
    gluQuadricTexture   ( quadratic, GL_TRUE    );

    glPushMatrix();

    glTranslatef(0.0f, -0.5f, 12.5f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    gluCylinder(quadratic,1.0f,8.0f,40.0f,32,32);

    glPopMatrix();

	glDisable(GL_TEXTURE_2D);


}

void makeBubbles()
{

	makeFountain();
    glTranslatef(0.0, -0.5 , 17.5);

    //-------------------- LADO DIREITO --------------------

	//BALL 1
    glPushMatrix();
    	glTranslatef(sx1,sy1,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 2
    glPushMatrix();
    	glTranslatef(x2,y2,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 3
    glPushMatrix();
    	glTranslatef(x3,y3,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 4
    glPushMatrix();
    	glTranslatef(x4,y4,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 5
    glPushMatrix();
    	glTranslatef(x5,y5,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 6
    glPushMatrix();
    	glTranslatef(x6,y6,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 7
    glPushMatrix();
    	glTranslatef(x7,y7,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 8
    glPushMatrix();
    	glTranslatef(x8,y8,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 9
    glPushMatrix();
    	glTranslatef(x9,y9,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 10
    glPushMatrix();
    	glTranslatef(x10,y10,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 11
    glPushMatrix();
    	glTranslatef(x11,y11,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 12
    glPushMatrix();
    	glTranslatef(x12,y12,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 13
    glPushMatrix();
    	glTranslatef(x13,y13,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 14
    glPushMatrix();
    	glTranslatef(x14,y14,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 15
    glPushMatrix();
    	glTranslatef(x15,y15,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 16
    glPushMatrix();
    	glTranslatef(x16,y16,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 17
    glPushMatrix();
    	glTranslatef(x17,y17,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 18
    glPushMatrix();
    	glTranslatef(x18,y18,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 19
    glPushMatrix();
    	glTranslatef(x19,y19,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 20
    glPushMatrix();
    	glTranslatef(x20,y20,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //-------------------- LADO ESQUERDO --------------------

    //BALL 21
    glPushMatrix();
    	glTranslatef(x21,y21,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 22
    glPushMatrix();
    	glTranslatef(x22,y22,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 23
    glPushMatrix();
    	glTranslatef(x23,y23,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 24
    glPushMatrix();
    	glTranslatef(x24,y24,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 25
    glPushMatrix();
    	glTranslatef(x25,y25,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 26
    glPushMatrix();
    	glTranslatef(x26,y26,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 27
    glPushMatrix();
    	glTranslatef(x27,y27,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 28
    glPushMatrix();
    	glTranslatef(x28,y28,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 29
    glPushMatrix();
    	glTranslatef(x29,y29,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 30
    glPushMatrix();
    	glTranslatef(x30,y30,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 31
    glPushMatrix();
    	glTranslatef(x31,y31,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 32
    glPushMatrix();
    	glTranslatef(x32,y32,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 33
    glPushMatrix();
    	glTranslatef(x33,y33,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 34
    glPushMatrix();
    	glTranslatef(x34,y34,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 35
    glPushMatrix();
    	glTranslatef(x35,y35,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 36
    glPushMatrix();
    	glTranslatef(x36,y36,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 37
    glPushMatrix();
    	glTranslatef(x37,y37,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 38
    glPushMatrix();
    	glTranslatef(x38,y38,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 39
    glPushMatrix();
    	glTranslatef(x39,y39,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 40
    glPushMatrix();
    	glTranslatef(x40,y40,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //-------------------- CIMA --------------------

    //BALL 41
    glPushMatrix();
    	glTranslatef(x41,y41,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 42
    glPushMatrix();
    	glTranslatef(x42,y42,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 43
    glPushMatrix();
    	glTranslatef(x43,y43,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 44
    glPushMatrix();
    	glTranslatef(x44,y44,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 45
    glPushMatrix();
    	glTranslatef(x45,y45,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 46
    glPushMatrix();
    	glTranslatef(x46,y46,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 47
    glPushMatrix();
    	glTranslatef(x47,y47,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 48
    glPushMatrix();
    	glTranslatef(x48,y48,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 49
    glPushMatrix();
    	glTranslatef(x49,y49,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 50
    glPushMatrix();
    	glTranslatef(x50,y50,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 51
    glPushMatrix();
    	glTranslatef(x51,y51,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 52
    glPushMatrix();
    	glTranslatef(x52,y52,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 53
    glPushMatrix();
    	glTranslatef(x53,y53,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 54
    glPushMatrix();
    	glTranslatef(x54,y54,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 55
    glPushMatrix();
    	glTranslatef(x55,y55,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 56
    glPushMatrix();
    	glTranslatef(x56,y56,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 57
    glPushMatrix();
    	glTranslatef(x57,y57,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 58
    glPushMatrix();
    	glTranslatef(x58,y58,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 59
    glPushMatrix();
    	glTranslatef(x59,y59,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 60
    glPushMatrix();
    	glTranslatef(x60,y60,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //-------------------- CIMA 2 --------------------

    //BALL 61
    glPushMatrix();
    	glTranslatef(x61,y61,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 62
    glPushMatrix();
    	glTranslatef(x62,y62,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 63
    glPushMatrix();
    	glTranslatef(x63,y63,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 64
    glPushMatrix();
    	glTranslatef(x64,y64,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 65
    glPushMatrix();
    	glTranslatef(x65,y65,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 66
    glPushMatrix();
    	glTranslatef(x66,y66,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 67
    glPushMatrix();
    	glTranslatef(x67,y67,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 68
    glPushMatrix();
    	glTranslatef(x68,y68,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 69
    glPushMatrix();
    	glTranslatef(x69,y69,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 70
    glPushMatrix();
    	glTranslatef(x70,y70,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 71
    glPushMatrix();
    	glTranslatef(x71,y71,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 72
    glPushMatrix();
    	glTranslatef(x72,y72,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 73
    glPushMatrix();
    	glTranslatef(x73,y73,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 74
    glPushMatrix();
    	glTranslatef(x74,y74,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 75
    glPushMatrix();
    	glTranslatef(x75,y75,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 76
    glPushMatrix();
    	glTranslatef(x76,y76,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 77
    glPushMatrix();
    	glTranslatef(x77,y77,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 78
    glPushMatrix();
    	glTranslatef(x78,y78,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

	//BALL 79
    glPushMatrix();
    	glTranslatef(x79,y79,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();

    //BALL 80
    glPushMatrix();
    	glTranslatef(x80,y80,-5.0);
    	glutSolidSphere(0.0075,20,20);
    glPopMatrix();


    update();
}

//---------- TEXTURAS ----------
void initTexturas(){

    glGenTextures(1, &texture[0]);
	glBindTexture(GL_TEXTURE_2D, texture[0]);
	imag.LoadBmpFile("mamore.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());


    glGenTextures(1, &texture[1]);
	glBindTexture(GL_TEXTURE_2D, texture[1]);
	imag.LoadBmpFile("sky.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[2]);
	glBindTexture(GL_TEXTURE_2D, texture[2]);
	imag.LoadBmpFile("noise.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[3]);
	glBindTexture(GL_TEXTURE_2D, texture[3]);
	imag.LoadBmpFile("step1.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_LUMINANCE, GL_UNSIGNED_BYTE,
		imag.ImageData());


    glGenTextures(1, &texture[4]);
	glBindTexture(GL_TEXTURE_2D, texture[4]);
	imag.LoadBmpFile("noise.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[5]);
	glBindTexture(GL_TEXTURE_2D, texture[5]);
	imag.LoadBmpFile("stone1.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[6]);
	glBindTexture(GL_TEXTURE_2D, texture[6]);
	imag.LoadBmpFile("pilar2.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[7]);
	glBindTexture(GL_TEXTURE_2D, texture[7]);
	imag.LoadBmpFile("mall1.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[8]);
	glBindTexture(GL_TEXTURE_2D, texture[8]);
	imag.LoadBmpFile("janelaDef.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[9]);
	glBindTexture(GL_TEXTURE_2D, texture[9]);
	imag.LoadBmpFile("door.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[10]);
	glBindTexture(GL_TEXTURE_2D, texture[10]);
	imag.LoadBmpFile("exit1.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());


    glGenTextures(1, &texture[11]);
	glBindTexture(GL_TEXTURE_2D, texture[11]);
	imag.LoadBmpFile("sportzone.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());


    glGenTextures(1, &texture[12]);
	glBindTexture(GL_TEXTURE_2D, texture[12]);
	imag.LoadBmpFile("corrimao.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

    glGenTextures(1, &texture[13]);
	glBindTexture(GL_TEXTURE_2D, texture[13]);
	imag.LoadBmpFile("corrimao2.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

     glGenTextures(1, &texture[14]);
	glBindTexture(GL_TEXTURE_2D, texture[14]);
	imag.LoadBmpFile("columns.bmp");
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexImage2D(GL_TEXTURE_2D, 0, 3,
		imag.GetNumCols(),
		imag.GetNumRows(), 0, GL_RGB, GL_UNSIGNED_BYTE,
		imag.ImageData());

}

//---------- INICIALIZAÇÃO PROGRAMA ----------
void init(void) {

	glClearColor(WHITE);
	glShadeModel(GL_SMOOTH);
	glEnable(GL_DEPTH_TEST);

	glVertexPointer(3, GL_FLOAT, 0, vertices);
	glEnableClientState(GL_VERTEX_ARRAY);
	glNormalPointer(GL_FLOAT, 0, normais);
    glEnableClientState(GL_NORMAL_ARRAY);
	glColorPointer(3, GL_FLOAT, 0, cores);
    glEnableClientState(GL_COLOR_ARRAY);
    glTexCoordPointer(2, GL_FLOAT, 0, arrayTexture);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	initTexturas();
	initLights();
	initMaterials();
}

//---------- RESIZE JANELA ----------
GLvoid resize(GLsizei width, GLsizei height){
	wScreen=width;
	hScreen=height;
	glViewport( 0, 0, wScreen,hScreen );
	glutPostRedisplay();
}

void drawOrientacao(){

	glDisable(GL_TEXTURE_2D);
	//----------------------- OBSERVADOR
	glPushMatrix();
		glColor4f(VERDE);
		glTranslatef (obsPini[0],obsPini[1],obsPini[2]);
		glutSolidCube(1);
	glPopMatrix();
	glPushMatrix();
		glColor4f(VERMELHO);
		glTranslatef (obsPfin[0],obsPfin[1],obsPfin[2]);
		glutSolidCube(1.0);
	glPopMatrix();

	//----------------------- EIXOS
	glColor4f(VERMELHO);
	glBegin(GL_LINES);
		glVertex3i(0,0,-xC);
		glVertex3i(0,0, xC);
	glEnd();
	glColor4f(VERDE);
	glBegin(GL_LINES);
		glVertex3i(0,-xC,0);
		glVertex3i(0, xC,0);
	glEnd();
	glColor4f(AZUL);
	glBegin(GL_LINES);
		glVertex3i(-xC,0,0);
		glVertex3i( xC,0,0);
	glEnd();
	glEnable(GL_TEXTURE_2D);

}

//---------- DISPLAY ----------
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glViewport (wScreen/5, 0, 0.75*wScreen, hScreen);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(angPersp, (float)wScreen/hScreen, 0.1, 500.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(obsPini[0], obsPini[1], obsPini[2], obsPfin[0], obsPfin[1], obsPfin[2], 0, 1, 0);

	initLights();
	initMaterials();
    draw_glass();
	drawChao();
	drawEscada();
	drawSecond();
	drawWalls();
	drawTeto();
	drawSky();
	drawCorrimao();
	drawEntrance();
	drawPilar();
    door();
    spzone();
    exit_sign();
    makeBubbles();



	glutSwapBuffers();
}

//---------- OBSERVADOR ----------
void updateVisao(){

	obsPfin[0] =obsPini[0]+rVisao*cos(aVisao);
	obsPfin[2] =obsPini[2]-rVisao*sin(aVisao);
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y){
 switch (key) {
	case 27:
		exit(0);
		break;
	case 69:
		glEnable(GL_LIGHT0);
        glEnable(GL_LIGHT1);
		glEnable(GL_LIGHT2);
		glEnable(GL_LIGHT3);
		printf("ON");
		break;
    case 81:
		glDisable(GL_LIGHT0);
        glDisable(GL_LIGHT1);
		glDisable(GL_LIGHT2);
		glDisable(GL_LIGHT3);
		printf("Off");
		break;
    break;

  }

}

void teclasNotAscii(int key, int x, int y){
    if(key == GLUT_KEY_UP) {
		obsPini[0]=obsPini[0]+incVisao*cos(aVisao);
		obsPini[2]=obsPini[2]-incVisao*sin(aVisao);
	}
	if(key == GLUT_KEY_DOWN) {
		obsPini[0]=obsPini[0]-incVisao*cos(aVisao);
		obsPini[2]=obsPini[2]+incVisao*sin(aVisao);
	}
	if(key == GLUT_KEY_LEFT)
		aVisao = (aVisao + 0.4) ;
	if(key == GLUT_KEY_RIGHT)
		aVisao = (aVisao - 0.4) ;

    printf("X: %.2f | Y: %.2f | Z: %.2f\n",obsPini[0],obsPini[1],obsPini[2]);
	updateVisao();
}

//---------- MAIN ----------
int main(int argc, char** argv){


    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
    glutInitWindowSize (wScreen, hScreen);
    glutInitWindowPosition (263, 63);
    glutCreateWindow ("----- CG SHOPPING -----			Move Camera: UP, DOWN, RIGHT, LEFT   Luzes: Q , E");

     init();

	glutDisplayFunc(display);
    glutReshapeFunc(resize);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(teclasNotAscii);
    glutIdleFunc(display);
    glutMainLoop();

  return 0;
}

