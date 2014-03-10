#ifndef _MATGL_H
#define _MATGL_H


#include "rglMath_t.h"
#include "GL/gl.h"

GLint rglFrustumd(rglMat4d_t dest, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLint rglFrustumf(rglMat4f_t dest,GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);

GLint rglPerspectived(rglMat4d_t dest,GLdouble fov, GLdouble aspect, GLdouble znear, GLdouble zfar);
GLint rglPerspectivef(rglMat4f_t dest,GLfloat fov, GLfloat aspect, GLfloat znear, GLfloat zfar);

GLint rglOrthod(rglMat4d_t dest,GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble znear, GLdouble zfar);
GLint rglOrthof(rglMat4f_t dest, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat znear, GLfloat zfar);

GLint rglTranslated(rglMat4d_t dest,GLdouble x, GLdouble y, GLdouble z);
GLint rglTranslatef(rglMat4f_t dest, GLfloat x, GLfloat y, GLfloat z);

GLint rglScaled(rglMat4d_t dest,GLdouble x, GLdouble y, GLdouble z);
GLint rglScalef(rglMat4f_t dest, GLfloat x, GLfloat y, GLfloat z);

GLint rglRotated(rglMat4d_t dest,GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
GLint rglRotatef( rglMat4f_t dest, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

GLint rglLookAtd(rglMat4d_t dest, rglVec3d_t v1, rglVec3d_t v2, rglVec3d_t v3);
GLint rglLookAtf(rglMat4f_t dest, rglVec3f_t v1, rglVec3f_t v2, rglVec3f_t v3);

GLint rglMatrixdNormal(rglMat3d_t dest,rglMat4d_t src);
GLint rglMatrixfNormal(rglMat3f_t dest,rglMat4f_t src);

GLint rglMatrix4dMemPrint(GLuint matrix_type, const char * header);
GLint rglMatrix4fMemPrint(GLuint matrix_type, const char * header);

GLint rglGetMatrix4dMem(GLuint matrix_type, rglMat4d_t dest);
GLint rglGetMatrix4fMem(GLuint matrix_type, rglMat4f_t dest);

#endif
