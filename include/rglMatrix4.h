#ifndef _MAT4_H
#define _MAT4_H

#include "rglMathType.h"
#include "rglMath3D.h"



 //matrix4
GLint rglMatrix4Set(rglMat4 dest,GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15);
GLint rglMatrix4Identity(rglMat4 dest);
GLint rglMatrix4MulInt(rglMat4 src, int d);
GLint rglMatrix4MulFloat(rglMat4 src, GLfloat f);
GLint rglMatrix4Multiply(rglMat4 m1, rglMat4 m2);
GLint rglMatrix4MulVector2(const rglMat4 m, rglVec2 *v2);
GLint rglMatrix4MulVector3(const rglMat4 m, rglVec3 *v3);
GLint rglMatrix4MulVector4(const rglMat4 m, rglVec4 *v4);
GLint rglMatrix4to3(rglMat3 dest,rglMat4 src);
GLint rglMatrix4Copy(rglMat4 dest, rglMat4 src) ;
GLint  rglMatrix4Transpose(rglMat4 dest,rglMat4 src);
GLint rglMatrix4Inverse(rglMat4 dest,rglMat4 m2);
GLint rglMatrix4Print(rglMat4 m);
GLint rglMatrix4Minor(rglMat3 dest,rglMat4 src, int n);
GLfloat rglMatrix3Minorf(rglMat4 src, int n); 
GLint rglMatrix4Adjoin(rglMat4 dest,rglMat4 src);
#endif
