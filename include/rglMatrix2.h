#ifndef _MATRIX2_H
#define _MATRIX2_H

#include "rglMath_t.h"
#include "rglMath3D.h"




GLint rglMatrix2Init(rglMat2 dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3);
GLint rglMatrix2Identity(rglMat2 dest);
GLint rglMatrix2Copy(rglMat2 dest, rglMat2 src) ;
GLfloat rglMatrix2Det(rglMat2 src);
GLint rglMatrix2Transpose(rglMat2 src) ;
GLint rglMatrix2Multiply(rglMat2 m1, rglMat2 m2);

#endif
