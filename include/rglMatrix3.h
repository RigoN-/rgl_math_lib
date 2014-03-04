#ifndef _MAT3_H
#define _MAT3_H

#include "rglMath_t.h"


 //matrix3
GLint rglMatrix3Initf(rglMat3_t dest,GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8);
GLint rglMatrix3Identity(rglMat3_t dest);
GLint rglMatrix3MulInt(rglMat3_t src, int d);
GLint rglMatrix3MulFloat(rglMat3_t src, GLfloat f);
GLfloat rglMatrix3Det(rglMat3_t m);
GLint rglMatrix3Copy(rglMat3_t dest, rglMat3_t src) ;
//rglVec2_t rglMatrix3MulVector2(const rglMat3_t m, rglVec2_t v3);
//rglVec3_t rglMatrix3MulVector3(const rglMat3_t m, rglVec3_t v3);
GLint rglMatrix3Inverse(rglMat3_t src);
GLint rglMatrix3Transpose(rglMat3_t src) ;
GLint rglMatrix3Print(rglMat3_t m);
GLint rglMatrix3Multiply(rglMat3_t m1, rglMat3_t m2);
GLint rglMatrix3Minor(rglMat2_t dest,rglMat3_t src, int n);
GLfloat rglMatrix3Minorf(rglMat3_t src, int n); 
GLint rglMatrix3Adjoin(rglMat3_t dest,rglMat3_t src);

#endif
