#ifndef _VECTOR4_H
#define _VECTOR4_H

#include "rglMath_t.h"

//vector4
GLint rglVectorInitd(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLint rglVectorInitf(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLint rglColorInitd(rglCol4d_t *c,GLdouble r, GLdouble g, GLdouble b, GLdouble a);
GLint rglColorInitf(rglCol4f_t *c,GLfloat r, GLfloat g, GLfloat b, GLfloat a);
GLint rglVectorCopy4d( rglVec4d_t *dest, rglVec4d_t src);
GLint rglVectorCopy4f( rglVec4f_t *dest, rglVec4f_t src);
GLint  rglColor3ToColor4d(rglCol4d_t *dest, rglCol3d_t src);
GLint  rglColor3ToColor4f(rglCol4f_t *dest, rglCol3f_t src);
GLint  rglColor4ToColor3d(rglCol3d_t *dest, rglCol4d_t src);
GLint  rglColor4ToColor3f(rglCol3f_t *dest, rglCol4f_t src);
GLint rglVectorClear4d(rglVec4d_t *v);
GLint rglVectorClear4f(rglVec4f_t *v);
GLint rglVectorScale4d(rglVec4d_t *v, GLdouble scale );
GLint  rglVectorScale4f(rglVec4f_t *v, GLfloat scale );
GLint rglVectorAdd4d( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVectorAdd4f( rglVec4f_t *v1, rglVec4f_t v2);
GLint rglVectorSub4d( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVectorSub4f( rglVec4f_t *v1, rglVec4f_t v2);
GLdouble rglVectorDot4d( rglVec4d_t v1, rglVec4d_t v2);
GLdouble rglVectorDot4f( rglVec4f_t v1, rglVec4f_t v2);
GLdouble rglVectorLength4d(rglVec4d_t v);
GLdouble rglVectorLength4f(rglVec4f_t v);
GLint rglVectorNormalize4d(rglVec4d_t *v1);
GLint rglVectorNormalize4f(rglVec4f_t *v1);
GLint rglVector4ToVector3d(rglVec3d_t *dest, rglVec4d_t src);
GLint rglVector4ToVector3f(rglVec3f_t *dest, rglVec4f_t src);
GLint rglVector3ToVector4d(rglVec4d_t *dest, rglVec3d_t src);
GLint rglVector3ToVector4f(rglVec4f_t *dest, rglVec3f_t src);
GLint rglVectorCmp4d(rglVec4d_t v1, rglVec4d_t v2);
GLint rglVectorCmp4f(rglVec4f_t v1, rglVec4f_t v2);
GLint rglVectorPrint4d(rglVec4d_t v);
GLint rglVectorPrint4f(rglVec4f_t v);
GLint rglColorPrint4d(rglCol4d_t c);
GLint rglColorPrint4f(rglCol4f_t c);

//rglVec3_t rglVec4ToVec3(rglVec4_t v1);

//rglVec2_t rglVec4ToVec2(rglVec4_t v1);


#endif
