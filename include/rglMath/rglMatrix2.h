#ifndef _MATRIX2_H
#define _MATRIX2_H

#include "rglMath_t.h"

GLint rglMatrixInit2d(rglMat2d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3);
GLint rglMatrixInit2f(rglMat2f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3);
GLint rglMatrixInitZero2d(rglMat2d_t dest);
GLint rglMatrixInitZero2f(rglMat2f_t dest);

GLint rglMatrixIdentity2d(rglMat2d_t dest);
GLint rglMatrixIdentity2f(rglMat2f_t dest);
GLint rglMatrixCopy2d(rglMat2d_t dest, rglMat2d_t src); 
GLint rglMatrixCopy2f(rglMat2f_t dest, rglMat2f_t src); 
GLdouble rglMatrixDet2d(rglMat2d_t src);
GLfloat rglMatrixDet2f(rglMat2f_t src);
GLint rglMatrixTranspose2d(rglMat2d_t src); 
GLint rglMatrixTranspose2f(rglMat2f_t src); 
GLint rglMatrixMultiply2d(rglMat2d_t m1, rglMat2d_t m2);
GLint rglMatrixMultiply2f(rglMat2f_t m1, rglMat2f_t m2);

GLint MatrixCmp2d(rglMat2d_t m1, rglMat2d_t m2);
GLint MatrixCmp2f(rglMat2f_t m1, rglMat2f_t m2);

GLint rglMatrixPrint2d(rglMat2d_t m, const char * header);
GLint rglMatrixPrint2f(rglMat2f_t m, const char * header);

#endif
