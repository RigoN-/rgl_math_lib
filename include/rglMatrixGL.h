#ifndef _MATGL_H
#define _MATGL_H


#include "rglMathType.h"
#include "rglMath3D.h"


GLint rglFrustum(rglMat4 dest, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
GLint rglPerspective(rglMat4 dest,GLfloat fov, GLfloat aspect, GLfloat znear, GLfloat zfar);
GLint rglOrtho(rglMat4 dest,GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat znear, GLfloat zfar);
GLint rglTranslate(rglMat4 dest,GLfloat x, GLfloat y, GLfloat z);
GLint rglScale(rglMat4 dest,GLfloat x, GLfloat y, GLfloat z);
GLint rglRotate(rglMat4 dest,GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GLint rglLookAt(rglMat4 dest,rglVec3 v1, rglVec3 v2, rglVec3 v3);
GLint rglMatrixNormal(rglMat3 dest,rglMat4 src);

#endif
