#ifndef _VEC3_H
#define _VEC3_H

#include "rglMath_t.h"

//vector3-----------------------------------------------------------------------------------------------------------------------------------------------
GLint rglVector3dInitd(rglVec3d_t *v, GLdouble x, GLdouble y, GLdouble z);
GLint rglVector3fInitf(rglVec3d_t *v, GLfloat x, GLfloat y, GLfloat z);
GLint rglTexCoord3dInitd(rglTex3d_t *tc, GLdouble s, GLdouble t, GLdouble r);
GLint rglTexCoord3fInitf(rglTex3f_t *tc, GLfloat s, GLfloat t, GLfloat r);
GLint rglColor3dInitd(rglCol3d_t *c,GLdouble r, GLdouble g, GLdouble b);
GLint rglColor3fInitf(rglCol3f_t *c,GLfloat r, GLfloat g, GLfloat b);


GLint rglVector3dClear(rglVec3d_t *v);
GLint rglVector3fClear(rglVec3f_t *v);
GLint rglTexCoord3dClear(rglTex3d_t *tc);
GLint rglTexCoord3fClear(rglTex3f_t *tc);
GLint rglColor3dClear(rglCol3d_t *c);
GLint rglColor3fClear(rglCol3f_t *c);

GLint rglVector3dCopy(rglVec3d_t *dest, rglVec3d_t src);
GLint rglVector3fCopy(rglVec3f_t *dest, rglVec3f_t src);
GLint rglTexCoord3dCopy(rglTex3d_t *dest, rglTex3d_t src);
GLint rglTexCoord3fCopy(rglTex3f_t *dest, rglTex3f_t src);
GLint rglColor3dCopy(rglCol3d_t *dest, rglCol3d_t src);
GLint rglColor3fCopy(rglCol3f_t *dest, rglCol3f_t src);

GLint rglVector3dScale(rglVec3d_t *v, GLdouble scale ); 
GLint rglVector3fScale(rglVec3f_t *v, GLfloat scale );
GLint rglTexCoord3dScale(rglTex3d_t *tc, GLdouble scale );
GLint rglTexCoord3fScale(rglTex3f_t *tc, GLfloat scale );
GLint rglColor3dScale(rglCol3d_t *c, GLdouble scale );
GLint rglColor3fScale(rglCol3f_t *c, GLfloat scale );

GLint rglVector3dAdd(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVector3fAdd(rglVec3f_t *v1, rglVec3f_t v2);
GLint rglTexCoord3dAdd(rglTex3d_t *tc1, rglTex3d_t tc2);
GLint rglTexCoord3fAdd(rglTex3f_t *tc1, rglTex3f_t tc2);
GLint rglColor3dAdd(rglCol3d_t *c1, rglCol3d_t c2);
GLint rglColor3fAdd(rglCol3f_t *c1, rglCol3f_t c2);

GLint rglVector3dSub(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVector3fSub(rglVec3f_t *v1, rglVec3f_t v2);
GLint rglTexCoord3dSub(rglTex3d_t *tc1, rglTex3d_t tc2);
GLint rglTexCoord3fSub(rglTex3f_t *tc1, rglTex3f_t tc2);
GLint rglColor3dSub(rglCol3d_t *c1, rglCol3d_t c2);
GLint rglColor3fSub(rglCol3f_t *c1, rglCol3f_t c2);

GLdouble rglVector3dDot(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVector3fDot(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglTexCoord3dDot(rglTex3d_t tc1, rglTex3d_t tc2);
GLfloat rglTexCoord3fDot(rglTex3f_t tc1, rglTex3f_t tc2);
GLdouble rglColor3Dot(rglCol3_t c1, rglCol3_t c2);
GLfloat rglColor3fDot(rglCol3f_t c1, rglCol3f_t c2);
//
GLdouble rglVector3dCos(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVector3fCos(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglVector3dAngleD(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVector3fAngleD(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglVector3dAngleR(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVector3fAngleR(rglVec3f_t v1, rglVec3f_t v2);

GLdouble rglVector3dLength(rglVec3d_t v);
GLfloat rglVector3fLength(rglVec3f_t v);
GLdouble rglTexCoord3dLength(rglTex3d_t tc);
GLfloat rglTexCoord3fLength(rglTex3f_t tc);
GLdouble rglColor3dLength(rglCol3d_t c);
GLfloat rglColor3fLength(rglCol3f_t c);


GLint rglVector3dNormalize(rglVec3d_t *v);
GLint rglVector3fNormalize(rglVec3f_t *v);
GLint rglTexCoord3dNormalize(rglTex3d_t *tc);
GLint rglTexCoord3fNormalize(rglTex3f_t *tc);
GLint rglColor3dNormalize(rglCol3d_t *c);
GLint rglColor3fNormalize(rglCol3f_t *c);

GLint rglVector3dCross(rglVec3d_t *res, rglVec3d_t v1, rglVec3d_t v2);
GLint rglVector3fCross(rglVec3f_t *res, rglVec3f_t v1, rglVec3f_t v2);


GLint rglVector3dToColor3d(rglCol3d_t *c, rglVec3d_t v);
GLint rglVector3fToColor3f(rglCol3f_t *c, rglVec3f_t v);
GLint rglVector3dToTexCoord3d(rglTex3d_t *t, rglVec3d_t v);
GLint rglVector3fToTexCoord3f(rglTex3f_t *t, rglVec3f_t v);
GLint rglColor3dToVector3d(rglVec3d_t *v, rglCol3d_t c);
GLint rglColor3fToVector3f(rglVec3f_t *v, rglCol3f_t c);
GLint rglTexCoord3dToVector3d(rglVec3d_t *v, rglTex3d_t t);
GLint rglTexCoord3fToVector3f(rglVec3d_t *v, rglTex3d_t t);

GLint rglVector3dCmp(rglVec3d_t v1, rglVec3d_t v2);
GLint rglVector3fCmp(rglVec3f_t v1, rglVec3f_t v2);


GLint rglVector3dPrint(rglVec3d_t v);
GLint rglVector3fPrint(rglVec3f_t v);
GLint rglTexCoord3dPrint(rglTex3d_t tc);
GLint rglTexCoord3fPrint(rglTex3f_t tc);
GLint rglColor3dPrint(rglCol3d_t c);
GLint rglColor3fPrint(rglCol3f_t c);





/*

rglVec3 rglVector3Tangent(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);
rglVec3 rglVector3Binormal(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);

*/
#endif
