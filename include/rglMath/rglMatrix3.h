#ifndef _MAT3_H
#define _MAT3_H

#include "rglMath_t.h"


 //matrix3
GLint rglMatrix3dInitd(rglMat3d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8);
GLint rglMatrix3fInitf(rglMat3f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8);

GLint rglMatrix3dCopy(rglMat3d_t dest, rglMat3d_t src);
GLint rglMatrix3fCopy(rglMat3f_t dest, rglMat3f_t src);

GLint rglMatrix3dIdentity(rglMat3d_t dest);
GLint rglMatrix3fIdentity(rglMat3f_t dest);

GLint rglMatrix3dMulInt(rglMat3d_t src, GLint d);
GLint rglMatrix3fMulInt(rglMat3f_t src, GLint d);

GLint rglMatrix3dMulFloat(rglMat3d_t src, GLdouble f);
GLint rglMatrix3fMulFloat(rglMat3f_t src, GLfloat f);

GLint rglMatrix3dMultiply(rglMat3d_t m1, rglMat3d_t m2);
GLint rglMatrix3fMultiply(rglMat3f_t m1, rglMat3f_t m2);

GLint rglMatrix3dTranspose(rglMat3d_t src);
GLint rglMatrix3fTranspose(rglMat3f_t src);

GLdouble rglMatrix3dDet(rglMat3d_t m);
GLfloat rglMatrix3fDet(rglMat3f_t m);

GLint rglMatrix3dMinor(rglMat2d_t dest,rglMat3d_t src, GLint n);
GLint rglMatrix3fMinor(rglMat2f_t dest,rglMat3f_t src, GLint n);

GLdouble rglMatrix3dMinord(rglMat3d_t src, GLint n) ;
GLdouble rglMatrix3fMinorf(rglMat3f_t src, GLint n) ;

GLint rglMatrix3dAdjoin(rglMat3d_t dest,rglMat3d_t src);
GLint rglMatrix3fAdjoin(rglMat3f_t dest,rglMat3f_t src);

GLint rglMatrix3dInverse(rglMat3d_t src);
GLint rglMatrix3fInverse(rglMat3f_t src);


//rglVec2_t rglMatrix3MulVector2(const rglMat3_t m, rglVec2_t v3);
//rglVec3_t rglMatrix3MulVector3(const rglMat3_t m, rglVec3_t v3);
GLint rglMatrix3dMulVector3d(const rglMat3d_t m, rglVec3d_t *v);
GLint rglMatrix3fMulVector3f(const rglMat3d_t m, rglVec3d_t *v);

GLint rglMatrix3dPrint(rglMat3d_t m, const char * header);
GLint rglMatrix3fPrint(rglMat3f_t m, const char * header);


//--------------------------------------
//GLint rglMatrix3Inverse(rglMat3f_t dest,rglMat3f_t src);

#endif
