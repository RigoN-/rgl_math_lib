#ifndef _MAT3_H
#define _MAT3_H

#include "rglMathType.h"
#include "rglMath3D.h"


 //matrix3
GLint rglMatrix3Initf(rglMat3 dest,GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8);
GLint rglMatrix3Identity(rglMat3 dest);
GLint rglMatrix3MulInt(rglMat3 src, int d);
GLint rglMatrix3MulFloat(rglMat3 src, GLfloat f);
GLfloat rglMatrix3Det(rglMat3 m);
GLint rglMatrix3Copy(rglMat3 dest, rglMat3 src) ;
rglVec2 rglMatrix3MulVector2(const rglMat3 m, rglVec2 v3);
rglVec3 rglMatrix3MulVector3(const rglMat3 m, rglVec3 v3);
GLint rglMatrix3Inverse(rglMat3 src);
GLint rglMatrix3Transpose(rglMat3 src) ;
GLint rglMatrix3Print(rglMat3 m);
GLint rglMatrix3Multiply(rglMat3 m1, rglMat3 m2);
GLint rglMatrix3Minor(rglMat2 dest,rglMat3 src, int n);
GLfloat rglMatrix3Minorf(rglMat3 src, int n); 
GLint rglMatrix3Adjoin(rglMat3 dest,rglMat3 src);

#endif
