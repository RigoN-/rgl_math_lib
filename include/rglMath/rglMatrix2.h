#ifndef _MATRIX2_H
#define _MATRIX2_H

#include "rglMath_t.h"


GLint rglMatrix2dInitd(rglMat2d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3);
GLint rglMatrix2fInitf(rglMat2f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3);

GLint rglMatrix2dIdentity(rglMat2d_t dest);
GLint rglMatrix2fIdentity(rglMat2f_t dest);

GLint rglMatrix2dCopy(rglMat2d_t dest, rglMat2d_t src);
GLint rglMatrix2fCopy(rglMat2f_t dest, rglMat2f_t src);

GLdouble rglMatrix2dDet(rglMat2d_t src);
GLfloat rglMatrix2fDet(rglMat2f_t src);

GLint rglMatrix2dTranspose(rglMat2d_t src);
GLint rglMatrix2fTranspose(rglMat2f_t src);

GLint rglMatrix2dMultiply(rglMat2d_t m1, rglMat2d_t m2);
GLint rglMatrix2fMultiply(rglMat2f_t m1, rglMat2f_t m2);

#endif
