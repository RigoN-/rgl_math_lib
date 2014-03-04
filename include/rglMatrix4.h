#ifndef _MAT4_H
#define _MAT4_H

#include "rglMath_t.h"


 //matrix4
GLint rglMatrix4Set(rglMat4_t dest,GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15);
GLint rglMatrix4Identity(rglMat4_t dest);
GLint rglMatrix4MulInt(rglMat4_t src, int d);
GLint rglMatrix4MulFloat(rglMat4_t src, GLfloat f);
GLint rglMatrix4Multiply(rglMat4_t m1, rglMat4_t m2);
GLint rglMatrix4to3(rglMat3_t dest,rglMat4_t src);
GLint rglMatrix4Copy(rglMat4_t dest, rglMat4_t src) ;
GLint  rglMatrix4Transpose(rglMat4_t dest,rglMat4_t src);
GLint rglMatrix4Inverse(rglMat4_t dest,rglMat4_t m2);
GLint rglMatrix4Print(rglMat4_t m);
GLint rglMatrix4Minor(rglMat3_t dest,rglMat4_t src, int n);
GLfloat rglMatrix3Minorf(rglMat4_t src, int n); 
GLint rglMatrix4Adjoin(rglMat4_t dest,rglMat4_t src);
#endif
