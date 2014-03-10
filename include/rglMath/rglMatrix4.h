#ifndef _MAT4_H
#define _MAT4_H

#include "rglMath_t.h"


 //matrix4
GLint rglMatrix4dInitd(rglMat4d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8,GLdouble m9,GLdouble m10,GLdouble m11,GLdouble m12,GLdouble m13,GLdouble m14,GLdouble m15);
GLint rglMatrix4fInitf(rglMat4f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15);

GLint rglMatrix4dCopy(rglMat4d_t dest, rglMat4d_t src) ;
GLint rglMatrix4fCopy(rglMat4f_t dest, rglMat4f_t src) ;

GLint rglMatrix4dIdentity(rglMat4d_t dest);
GLint rglMatrix4fIdentity(rglMat4f_t dest);

GLint rglMatrix4dInitZero(rglMat4d_t dest);
GLint rglMatrix4fInitZero(rglMat4f_t dest);

GLint rglMatrix4dto3d(rglMat3d_t dest, rglMat4d_t src);
GLint rglMatrix4fto3f(rglMat3f_t dest, rglMat4f_t src);

GLint rglMatrix4dMulInt(rglMat4d_t src, GLint d);
GLint rglMatrix4fMulInt(rglMat4f_t src, GLint d);

GLint rglMatrix4dMulFloat(rglMat4d_t src, GLdouble f);
GLint rglMatrix4fMulFloat(rglMat4f_t src, GLfloat f);

GLint rglMatrix4dTranspose(rglMat4d_t src) ;
GLint rglMatrix4fTranspose(rglMat4f_t src) ;

GLint rglMatrix4dMultiply(rglMat4d_t m1, rglMat4d_t m2);
GLint rglMatrix4fMultiply(rglMat4f_t m1, rglMat4f_t m2);

GLint rglMatrix4dMinor(rglMat3d_t dest,rglMat4d_t src, GLint n); 
GLint rglMatrix4fMinor(rglMat3f_t dest,rglMat4f_t src, GLint n); 

GLdouble rglMatrix4dMinord(rglMat4d_t src, GLint n);
GLfloat rglMatrix4fMinorf(rglMat4f_t src, GLint n);

GLdouble rglMatrix4dDet(rglMat4d_t src);
GLfloat rglMatrix4fDet(rglMat4f_t src);

GLint rglMatrix4dAdjoin(rglMat4d_t dest, rglMat4d_t src);
GLint rglMatrix4fAdjoin(rglMat4f_t dest, rglMat4f_t src);

GLint rglMatrix4dInverse(rglMat4d_t src);
GLint rglMatrix4fInverse(rglMat4f_t src);

GLint rglMatrix4dMulVector4d(const rglMat4d_t m, rglVec4d_t *v);
GLint rglMatrix4fMulVector4f(const rglMat4f_t m, rglVec4f_t *v);

GLint rglMatrix4dMulVector3d(const rglMat4d_t m, rglVec3d_t *v);
GLint rglMatrix4fMulVector3f(const rglMat4f_t m, rglVec3f_t *v);

GLint rglMatrix4dPrint(rglMat4d_t m,const char *header);
GLint rglMatrix4fPrint(rglMat4f_t m,const char *header);
#endif
