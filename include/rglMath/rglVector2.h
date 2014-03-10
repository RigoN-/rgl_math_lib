#ifndef _VEC2_H
#define _VEC2_H

#include "rglMath_t.h"

GLint rglVector2dInitd(rglVec2_t *v, GLdouble x, GLdouble y);
GLint rglVector2fInitf(rglVec2_t *v, GLfloat x, GLfloat y);
GLint rglTexCoord2dInitd(rglTex2_t *v, GLdouble s, GLdouble t);
GLint rglTexCoord2fInitf(rglTex2_t *v, GLfloat s, GLfloat t);

GLint rglVector2dClear(rglVec2d_t *v);
GLint rglVector2fClear(rglVec2f_t *v);
GLint rglTexCoord2dClear(rglTex2d_t *v);
GLint rglTexCoord2fClear(rglTex2f_t *v);

GLint rglVector2dCopy( rglVec2d_t *dest, rglVec2d_t src);
GLint rglVector2fCopy( rglVec2f_t *dest, rglVec2f_t src);
GLint rglTexCoord2dCopy(rglTex2d_t *dest, rglTex2d_t src);
GLint rglTexCoord2fCopy(rglTex2f_t *dest, rglTex2f_t src);


GLint rglVector2dScale(rglVec2d_t *v, GLdouble scale );
GLint rglVector2fScale(rglVec2f_t *v, GLfloat scale );
GLint rglTexCoord2dScale(rglTex2d_t *v, GLdouble scale );
GLint rglTexCoord2fScale(rglTex2f_t *v, GLfloat scale );

GLint rglVector2dAdd( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVector2fAdd( rglVec2f_t *v1, rglVec2f_t v2);
GLint rglTexCoord2dAdd(rglTex2d_t *v1, rglTex2d_t v2);
GLint rglTexCoord2fAdd(rglTex2f_t *v1, rglTex2f_t v2);

GLint rglVector2dSub( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVector2fSub( rglVec2f_t *v1, rglVec2f_t v2);
GLint rglTexCoord2dSub(rglTex2d_t *v1, rglTex2d_t v2);
GLint rglTexCoord2fSub(rglTex2f_t *v1, rglTex2f_t v2);

GLdouble rglVector2dDot( rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVector2fDot( rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoord2dDot(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoord2fDot(rglTex2f_t v1, rglTex2f_t v2);

GLdouble rglVector2dLength(rglVec2d_t v);
GLfloat rglVector2fLength(rglVec2f_t v);
GLdouble rglTexCoord2dLength(rglTex2d_t v);
GLfloat rglTexCoord2fLength(rglTex2f_t v);




GLint rglVector2dNormalize(rglVec2d_t *v);
GLint rglVector2fNormalize(rglVec2f_t *v);
GLint rglTexCoord2dNormalize(rglTex2d_t *v);
GLint rglTexCoord2fNormalize(rglTex2f_t *v);

GLdouble rglVector2dCos(rglVec2d_t v1, rglVec2d_t v2);
GLdouble rglVector2fCos(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoord2dCos(rglTex2d_t v1, rglTex2d_t v2);
GLdouble rglTexCoord2fCos(rglTex2f_t v1, rglTex2f_t v2);

GLdouble rglVector2dAngleD(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVector2fAngleD(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglVector2dAngleR(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVector2fAngleR(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoord2dAngleD(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoord2fAngleD(rglTex2f_t v1, rglTex2f_t v2);
GLdouble rglTexCoord2dAngleR(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoord2fAngleR(rglTex2f_t v1, rglTex2f_t v2);


GLint rglVector2dCmp(rglVec2d_t v1, rglVec2d_t v2);
GLint rglVector2fCmp(rglVec2f_t v1, rglVec2f_t v2);
GLint rglTexCoord2dCmp(rglTex2d_t v1, rglTex2d_t v2);
GLint rglTexCoord2fCmp(rglTex2f_t v1, rglTex2f_t v2);


GLint rglVector2dPrint(rglVec2d_t v);
GLint rglVector2fPrint(rglVec2f_t v);
GLint rglTexCoord2dPrint(rglTex2d_t tc);
GLint rglTexCoord2fPrint(rglTex2f_t tc);


//-------------------------------------
GLint rglVec3ToVec2(rglVec2_t *v2, rglVec3_t v3);
GLint rglTexCoord3ToTexCoord2(rglTex2_t *v2, rglTex3_t v3);

GLint rglVec4ToVec2(rglVec2_t v2, rglVec4_t v4);

#endif
