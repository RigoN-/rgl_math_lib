#ifndef _VECTOR4_H
#define _VECTOR4_H

#include "rglMath_t.h"

//vector4
GLint rglVectorInit4d(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLint rglVectorInit4f(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w);


GLint rglVectorInitZero4d(rglVec4d_t *v);
GLint rglVectorInitZero4f(rglVec4f_t *v);

GLint rglVectorCopy4d( rglVec4d_t *dest, rglVec4d_t src);
GLint rglVectorCopy4f( rglVec4f_t *dest, rglVec4f_t src);


GLint rglVectorScale4d(rglVec4d_t *v, GLdouble scale );
GLint rglVectorScale4f(rglVec4f_t *v, GLfloat scale );

GLint rglVectorAdd4d( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVectorAdd4f( rglVec4f_t *v1, rglVec4f_t v2);

GLint rglVectorSub4d( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVectorSub4f( rglVec4f_t *v1, rglVec4f_t v2);

GLdouble rglVectorDot4d( rglVec4d_t v1, rglVec4d_t v2);
GLdouble rglVectorDot4f( rglVec4f_t v1, rglVec4f_t v2);

GLdouble rglVectorLength4d(rglVec4d_t v);
GLdouble rglVectorLength4f(rglVec4f_t v);

GLdouble rglVectorCos4d(rglVec4d_t v1, rglVec4d_t v2);
GLfloat rglVectorCos4f(rglVec4f_t v1, rglVec4f_t v2);

GLdouble rglVectorAngleD4d(rglVec4d_t v1, rglVec4d_t v2);
GLfloat rglVectorAngleD4f(rglVec4f_t v1, rglVec4f_t v2);
GLdouble rglVectorAngleR4d(rglVec4d_t v1, rglVec4d_t v2);
GLfloat rglVectorAngleR4f(rglVec4f_t v1, rglVec4f_t v2);

GLint rglVectorNormalize4d(rglVec4d_t *v1);
GLint rglVectorNormalize4f(rglVec4f_t *v1);

GLint rglVectorCross4d(rglVec4d_t *res, rglVec4d_t v1, rglVec4d_t v2);
GLint rglVectorCross4f(rglVec4f_t *res, rglVec4f_t v1, rglVec4f_t v2);

GLint rglVector4ToVector3d(rglVec3d_t *dest, rglVec4d_t src);
GLint rglVector4ToVector3f(rglVec3f_t *dest, rglVec4f_t src);

GLint rglVector3ToVector4d(rglVec4d_t *dest, rglVec3d_t src);
GLint rglVector3ToVector4f(rglVec4f_t *dest, rglVec3f_t src);

GLint rglVectorCmp4d(rglVec4d_t v1, rglVec4d_t v2);
GLint rglVectorCmp4f(rglVec4f_t v1, rglVec4f_t v2);

GLint rglVectorPrint4d(rglVec4d_t v);
GLint rglVectorPrint4f(rglVec4f_t v);


#endif
