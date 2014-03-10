#ifndef _VECTOR4_H
#define _VECTOR4_H

#include "rglMath_t.h"


//vector4
GLint rglVector4dCopy( rglVec4d_t *dest, rglVec4d_t src);
GLint rglVector4fCopy( rglVec4f_t *dest, rglVec4f_t src);

GLint rglVector4dInitd(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w);
GLint rglVector4fInitf(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w);

GLint rglVector4dClear(rglVec4d_t *v);
GLint rglVector4fClear(rglVec4f_t *v);

GLint  rglVector4dScale(rglVec4d_t *v, GLdouble scale );
GLint  rglVector4fScale(rglVec4f_t *v, GLfloat scale );

GLint rglVector4dAdd( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVector4fAdd( rglVec4f_t *v1, rglVec4f_t v2);

GLint rglVector4dSub( rglVec4d_t *v1, rglVec4d_t v2);
GLint rglVector4fSub( rglVec4f_t *v1, rglVec4f_t v2);

GLdouble rglVector4dDot( rglVec4d_t v1, rglVec4d_t v2);
GLdouble rglVector4fDot( rglVec4f_t v1, rglVec4f_t v2);

GLdouble rglVector4dLength(rglVec4d_t v);
GLdouble rglVector4fLength(rglVec4f_t v);

GLint rglVector4dNormalize(rglVec4d_t *v1);
GLint rglVector4fNormalize(rglVec4f_t *v1);

GLint rglVector4dPrint(rglVec4d_t v);
GLint rglVector4fPrint(rglVec4f_t v);

GLint rglColor4dInitd(rglCol4d_t *v,GLdouble r, GLdouble g, GLdouble b, GLdouble a);
GLint rglColor4fInitf(rglCol4f_t *v,GLfloat r, GLfloat g, GLfloat b, GLfloat a);

GLint  rglColor3dToColor4(rglCol4d_t *dest, rglCol3d_t src);
GLint  rglColor3fToColor4(rglCol4f_t *dest, rglCol3f_t src);

GLint  rglColor4dToColor3(rglCol3d_t *dest, rglCol4d_t src);
GLint  rglColor4fToColor3(rglCol3f_t *dest, rglCol4f_t src);

GLint rglVector4dTo3d(rglVec3d_t *dest, rglVec4d_t src);
GLint rglVector4fTo3f(rglVec3f_t *v3, rglVec4f_t v4);
GLint rglVector3dTo4d(rglVec4d_t *dest, rglVec3d_t src);
GLint rglVector3fTo4f(rglVec4f_t *dest, rglVec3f_t src);

GLint rglVector4dCmp(rglVec4d_t v1, rglVec4d_t v2);
GLint rglVector4fCmp(rglVec4f_t v1, rglVec4f_t v2);

GLint rglColor4dPrint(rglCol4d_t c);
GLint rglColor4fPrint(rglCol4f_t v);

//rglVec3_t rglVec4ToVec3(rglVec4_t v1);

//rglVec2_t rglVec4ToVec2(rglVec4_t v1);


#endif
