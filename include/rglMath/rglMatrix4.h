#ifndef _MAT4_H
#define _MAT4_H

#include "rglMath_t.h"


 //matrix4
GLint rglMatrixInit4d(rglMat4d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8,GLdouble m9,GLdouble m10,GLdouble m11,GLdouble m12,GLdouble m13,GLdouble m14,GLdouble m15);
GLint rglMatrixInit4f(rglMat4f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15);
GLint rglMatrixInitZero4d(rglMat4d_t dest);
GLint rglMatrixInitZero4f(rglMat4f_t dest);
GLint rglMatrixCopy4d(rglMat4d_t dest, rglMat4d_t src); 
GLint rglMatrixCopy4f(rglMat4f_t dest, rglMat4f_t src); 
GLint rglMatrixIdentity4d(rglMat4d_t dest);
GLint rglMatrixIdentity4f(rglMat4f_t dest);



GLint rglMatrix4ToMatrix3d(rglMat3d_t dest, rglMat4d_t src);
GLint rglMatrix4ToMatrix3f(rglMat3f_t dest, rglMat4f_t src);
GLint rglMatrixMultInt4d(rglMat4d_t src, GLint d);
GLint rglMatrixMultInt4f(rglMat4f_t src, GLint d);
GLint rglMatrixMultFloat4d(rglMat4d_t src, GLdouble f);
GLint rglMatrixMultFloat4f(rglMat4f_t src, GLfloat f);
GLint rglMatrixTranspose4d(rglMat4d_t src); 
GLint rglMatrixTranspose4f(rglMat4f_t src); 
GLint rglMatrixMultiply4d(rglMat4d_t m1, rglMat4d_t m2);
GLint rglMatrixMultiply4f(rglMat4f_t m1, rglMat4f_t m2);
GLint rglMatrixMinor4d(rglMat3d_t dest,rglMat4d_t src, GLint n); 
GLint rglMatrixMinor4f(rglMat3f_t dest,rglMat4f_t src, GLint n); 
GLdouble rglMatrixMinord4d(rglMat4d_t src, GLint n); 
GLfloat rglMatrixMinorf4f(rglMat4f_t src, GLint n); 
GLdouble rglMatrixDet4d(rglMat4d_t src);
GLfloat rglMatrixDet4f(rglMat4f_t src);
GLint rglMatrixAdjoin4d(rglMat4d_t dest, rglMat4d_t src); 
GLint rglMatrixAdjoin4f(rglMat4f_t dest, rglMat4f_t src); 
GLint rglMatrixInverse4d(rglMat4d_t src);
GLint rglMatrixInverse4f(rglMat4f_t src);
GLint rglMatrixMultVector4d(const rglMat4d_t m, rglVec4d_t *v);
GLint rglMatrixMultVector4f(const rglMat4f_t m, rglVec4f_t *v);
GLint rglMatrix4MultVector3d(const rglMat4d_t m, rglVec3d_t *v);
GLint rglMatrix4fMultVector3f(const rglMat4f_t m, rglVec3f_t *v);
GLint MatrixCmp4d(rglMat4d_t m1, rglMat4d_t m2);
GLint MatrixCmp4f(rglMat4f_t m1, rglMat4f_t m2);
GLint rglMatrixPrint4d(rglMat4d_t m,const char * header);
GLint rglMatrixPrint4f(rglMat4f_t  m,const char * header);

#endif
