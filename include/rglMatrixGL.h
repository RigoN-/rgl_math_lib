#ifndef _MATGL_H
#define _MATGL_H


#include "rglMath_t.h"

GLint rglFrustum(rglMat4_t dest, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
GLint rglPerspective(rglMat4_t dest,GLfloat fov, GLfloat aspect, GLfloat znear, GLfloat zfar);
GLint rglOrtho(rglMat4_t dest,GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat znear, GLfloat zfar);
GLint rglTranslate(rglMat4_t dest,GLfloat x, GLfloat y, GLfloat z);
GLint rglScale(rglMat4_t dest,GLfloat x, GLfloat y, GLfloat z);
GLint rglRotate(rglMat4_t dest,GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
GLint rglLookAt(rglMat4_t dest,rglVec3_t v1, rglVec3_t v2, rglVec3_t v3);
GLint rglMatrixNormal(rglMat3_t dest,rglMat4_t src);

#endif
