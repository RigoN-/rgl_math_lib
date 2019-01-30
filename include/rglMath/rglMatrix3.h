#ifndef _MAT3_H
#define _MAT3_H

#include "rglMath_t.h"


 //matrix3
GLint rglMatrixInit3d(rglMat3d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8);
GLint rglMatrixInit3f(rglMat3f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8);
GLint rglMatrixInitZero3d(rglMat3d_t dest);
GLint rglMatrixInitZero3f(rglMat3f_t dest);
GLint rglMatrixCopy3d(rglMat3d_t dest, rglMat3d_t src); 
GLint rglMatrixCopy3f(rglMat3f_t dest, rglMat3f_t src); 
GLint rglMatrixIdentity3d(rglMat3d_t dest);
GLint rglMatrixIdentity3f(rglMat3f_t dest);
GLint rglMatrixMultInt3d(rglMat3d_t src, GLint d);
GLint rglMatrixMultInt3f(rglMat3f_t src, GLint d);
GLint rglMatrixMultFloat3d(rglMat3d_t src, GLdouble f);
GLint rglMatrixMultFloat3f(rglMat3f_t src, GLfloat f);
GLint rglMatrixMultiply3d(rglMat3d_t m1, rglMat3d_t m2);
GLint rglMatrixMultiply3f(rglMat3f_t m1, rglMat3f_t m2);
GLint rglMatrixTranspose3d(rglMat3d_t src); 
GLint rglMatrixTranspose3f(rglMat3f_t src); 
GLdouble rglMatrixDet3d(rglMat3d_t m);
GLfloat rglMatrixDet3f(rglMat3f_t m);
GLint rglMatrixMinor3d(rglMat2d_t dest,rglMat3d_t src, GLint n); 
GLint rglMatrixMinor3f(rglMat2f_t dest,rglMat3f_t src, GLint n); 
GLdouble rglMatrixMinord3d(rglMat3d_t src, GLint n); 
GLdouble rglMatrixMinorf3f(rglMat3f_t src, GLint n); 
GLint rglMatrixAdjoin3d(rglMat3d_t dest,rglMat3d_t src); 
GLint rglMatrixAdjoin3f(rglMat3f_t dest,rglMat3f_t src); 
GLint rglMatrixInverse3d(rglMat3d_t src);
GLint rglMatrixInverse3f(rglMat3f_t src);
GLint rglMatrixMulVector3d(const rglMat3d_t m, rglVec3d_t *v);
GLint rglMatrixfMulVector3f(const rglMat3d_t m, rglVec3d_t *v);
GLint MatrixCmp3d(rglMat3d_t m1, rglMat3d_t m2);
GLint MatrixCmp3f(rglMat3f_t m1, rglMat3f_t m2);
GLint rglMatrixPrint3d(rglMat3d_t m, const char * header);
GLint rglMatrixPrint3f(rglMat3f_t m, const char * header);

//--------------------------------------
//GLint rglMatrix3Inverse(rglMat3f_t dest,rglMat3f_t src);

#endif
