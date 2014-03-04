#ifndef _MATRIX2_H
#define _MATRIX2_H

#include "rglMath_t.h"


GLint rglMatrix2Init(rglMat2_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3);
GLint rglMatrix2Identity(rglMat2_t dest);
GLint rglMatrix2Copy(rglMat2_t dest, rglMat2_t src) ;
GLfloat rglMatrix2Det(rglMat2_t src);
GLint rglMatrix2Transpose(rglMat2_t src) ;
GLint rglMatrix2Multiply(rglMat2_t m1, rglMat2_t m2);

#endif
