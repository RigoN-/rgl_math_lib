#ifndef _VEC2_H
#define _VEC2_H

#include "rglMath_t.h"

GLint rglVectorInit2d(rglVec2_t *v, GLdouble x, GLdouble y);
GLint rglVectorInit2f(rglVec2_t *v, GLfloat x, GLfloat y);
GLint rglTexCoordInit2d(rglTex2_t *v, GLdouble s, GLdouble t);
GLint rglTexCoordInit2f(rglTex2_t *v, GLfloat s, GLfloat t);
GLint rglVectorClear2d(rglVec2d_t *v);
GLint rglVectorClear2f(rglVec2f_t *v);
GLint rglTexCoordClear2d(rglTex2d_t *v);
GLint rglTexCoordClear2f(rglTex2f_t *v);
GLint rglVectorCopy2d( rglVec2d_t *dest, rglVec2d_t src);
GLint rglVectorCopy2f( rglVec2f_t *dest, rglVec2f_t src);
GLint rglTexCoordCopy2d(rglTex2d_t *dest, rglTex2d_t src);
GLint rglTexCoordCopy2f(rglTex2f_t *dest, rglTex2f_t src);
GLint rglVectorScale2d(rglVec2d_t *v, GLdouble scale );
GLint rglVectorScale2f(rglVec2f_t *v, GLfloat scale );
GLint rglTexCoordScale2d(rglTex2d_t *v, GLdouble scale );
GLint rglTexCoordScale2f(rglTex2f_t *v, GLfloat scale );
GLint rglVectorAdd2d( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVectorAdd2f( rglVec2f_t *v1, rglVec2f_t v2);
GLint rglTexCoordAdd2d(rglTex2d_t *v1, rglTex2d_t v2);
GLint rglTexCoordAdd2f(rglTex2f_t *v1, rglTex2f_t v2);
GLint rglVectorSub2d( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVectorSub2f( rglVec2f_t *v1, rglVec2f_t v2);
GLint rglTexCoordSub2d(rglTex2d_t *v1, rglTex2d_t v2);
GLint rglTexCoordSub2f(rglTex2f_t *v1, rglTex2f_t v2);
GLdouble rglVectorDot2d( rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorDot2f( rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoordDot2d(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoordDot2f(rglTex2f_t v1, rglTex2f_t v2);
GLdouble rglVectorLength2d(rglVec2d_t v);
GLfloat rglVectorLength2f(rglVec2f_t v);
GLdouble rglTexCoordLength2d(rglTex2d_t v);
GLfloat rglTexCoordLength2f(rglTex2f_t v);
GLint rglVectorNormalize2d(rglVec2d_t *v);
GLint rglVectorNormalize2f(rglVec2f_t *v);
GLint rglTexCoordNormalize2d(rglTex2d_t *v);
GLint rglTexCoordNormalize2f(rglTex2f_t *v);
GLdouble rglVectorCos2d(rglVec2d_t v1, rglVec2d_t v2);
GLdouble rglVectorCos2f(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoordCos2d(rglTex2d_t v1, rglTex2d_t v2);
GLdouble rglTexCoordCos2f(rglTex2f_t v1, rglTex2f_t v2);
GLdouble rglVectorAngleD2d(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorAngleD2f(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglVectorAngleR2d(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorAngleR2f(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglTexCoordAngleD2d(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoordAngleD2f(rglTex2f_t v1, rglTex2f_t v2);
GLdouble rglTexCoordAngleR2d(rglTex2d_t v1, rglTex2d_t v2);
GLfloat rglTexCoordAngleR2f(rglTex2f_t v1, rglTex2f_t v2);
GLint rglVectorCmp2d(rglVec2d_t v1, rglVec2d_t v2);
GLint rglVectorCmp2f(rglVec2f_t v1, rglVec2f_t v2);
GLint rglTexCoordCmp2d(rglTex2d_t v1, rglTex2d_t v2);
GLint rglTexCoordCmp2f(rglTex2f_t v1, rglTex2f_t v2);
GLint rglVectorPrint2d(rglVec2d_t v);
GLint rglVectorPrint2f(rglVec2f_t v);
GLint rglTexCoordPrint2d(rglTex2d_t tc);
GLint rglTexCoordPrint2f(rglTex2f_t tc);


#endif
