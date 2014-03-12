#ifndef _VEC3_H
#define _VEC3_H

#include "rglMath_t.h"

//vector3-----------------------------------------------------------------------------------------------------------------------------------------------
GLint rglVectorInit3d(rglVec3d_t *v, GLdouble x, GLdouble y, GLdouble z);
GLint rglVectorInit3f(rglVec3f_t *v, GLfloat x, GLfloat y, GLfloat z);
GLint rglTexCoordInit3d(rglTex3d_t *tc, GLdouble s, GLdouble t, GLdouble r);
GLint rglTexCoordInit3f(rglTex3f_t *tc, GLfloat s, GLfloat t, GLfloat r);
GLint rglColorInit3d(rglCol3d_t *c,GLdouble r, GLdouble g, GLdouble b);
GLint rglColorInit3f(rglCol3f_t *c,GLfloat r, GLfloat g, GLfloat b);
GLint rglVectorClear3d(rglVec3d_t *v);
GLint rglVectorClear3f(rglVec3f_t *v);
GLint rglTexCoordClear3d(rglTex3d_t *tc);
GLint rglTexCoordClear3f(rglTex3f_t *tc);
GLint rglColorClear3d(rglCol3d_t *c);
GLint rglColorClear3f(rglCol3f_t *c);
GLint rglVectorCopy3d(rglVec3d_t *dest, rglVec3d_t src);
GLint rglVectorCopy3f(rglVec3f_t *dest, rglVec3f_t src);
GLint rglTexCoordCopy3d(rglTex3d_t *dest, rglTex3d_t src);
GLint rglTexCoordCopy3f(rglTex3f_t *dest, rglTex3f_t src);
GLint rglColorCopy3d(rglCol3d_t *dest, rglCol3d_t src);
GLint rglColorCopy3f(rglCol3f_t *dest, rglCol3f_t src);
GLint rglVectorScale3d(rglVec3d_t *v, GLdouble scale );
GLint rglVectorScale3f(rglVec3f_t *v, GLfloat scale );
GLint rglTexCoordScale3d(rglTex3d_t *tc, GLdouble scale );
GLint rglTexCoordScale3f(rglTex3f_t *tc, GLfloat scale );
GLint rglColorScale3d(rglCol3d_t *c, GLdouble scale );
GLint rglColorScale3f(rglCol3f_t *c, GLfloat scale );
GLint rglVectorAdd3d(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVectorAdd3f(rglVec3f_t *v1, rglVec3f_t v2);
GLint rglTexCoordAdd3d(rglTex3d_t *tc1, rglTex3d_t tc2);
GLint rglTexCoordAdd3f(rglTex3f_t *tc1, rglTex3f_t tc2);
GLint rglColorAdd3d(rglCol3d_t *c1, rglCol3d_t c2);
GLint rglColorAdd3f(rglCol3f_t *c1, rglCol3f_t c2);
GLint rglVectorSub3d(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVectorSub3f(rglVec3f_t *v1, rglVec3f_t v2);
GLint rglTexCoordSub3d(rglTex3d_t *tc1, rglTex3d_t tc2);
GLint rglTexCoordSub3f(rglTex3f_t *tc1, rglTex3f_t tc2);
GLint rglColorSub3d(rglCol3d_t *c1, rglCol3d_t c2);
GLint rglColorSub3f(rglCol3f_t *c1, rglCol3f_t c2);
GLdouble rglVectorDot3d(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVectorDot3f(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglTexCoordDot3d(rglTex3d_t tc1, rglTex3d_t tc2);
GLfloat rglTexCoordDot3f(rglTex3f_t tc1, rglTex3f_t tc2);
GLdouble rglColorDot3d(rglCol3d_t c1, rglCol3d_t c2);
GLfloat rglColorDot3f(rglCol3f_t c1, rglCol3f_t c2);
GLdouble rglVectorCos3d(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVectorCos3f(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglVectorAngleD3d(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVectorAngleD3f(rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglVectorAngleR3d(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVectorAngleR3f(rglVec3f_t v1, rglVec3f_t v2);
GLint rglVectorCross3d(rglVec3d_t *res, rglVec3d_t v1, rglVec3d_t v2);
GLint rglVectorCross3f(rglVec3f_t *res, rglVec3f_t v1, rglVec3f_t v2);
GLdouble rglVectorLength3d(rglVec3d_t v);
GLfloat rglVectorLength3f(rglVec3f_t v);
GLdouble rglTexCoordLength3d(rglTex3d_t tc);
GLfloat rglTexCoordLength3f(rglTex3f_t tc);
GLdouble rglColorLength3d(rglCol3d_t c);
GLfloat rglColorLength3f(rglCol3f_t c);
GLint rglVectorNormalize3d(rglVec3d_t *v);
GLint rglVectorNormalize3f(rglVec3f_t *v);
GLint rglTexCoordNormalize3d(rglTex3d_t *tc);
GLint rglTexCoordNormalize3f(rglTex3f_t *tc);
GLint rglColordNormalize3d(rglCol3d_t *c);
GLint rglColorNormalize3f(rglCol3f_t *c);
GLint rglVectorToColor3d(rglCol3d_t *c, rglVec3d_t v);
GLint rglVectorToColor3f(rglCol3f_t *c, rglVec3f_t v);
GLint rglVectorToTexCoord3d(rglTex3d_t *tc, rglVec3d_t v);
GLint rglVectorToTexCoord3f(rglTex3f_t *tc, rglVec3f_t v);
GLint rglColorToVector3d(rglVec3d_t *v, rglCol3d_t c);
GLint rglColorToVector3f(rglVec3f_t *v, rglCol3f_t c);
GLint rglTexCoordToVector3d(rglVec3d_t *v, rglTex3d_t tc);
GLint rglTexCoordToVector3f(rglVec3d_t *v, rglTex3d_t tc);
GLint rglVectorCmp3d(rglVec3d_t v1, rglVec3d_t v2);
GLint rglVectorCmp3f(rglVec3f_t v1, rglVec3f_t v2);
GLint rglVectorPrint3d(rglVec3d_t v);
GLint rglVectorPrint3f(rglVec3f_t v);
GLint rglTexCoordPrint3d(rglTex3d_t tc);
GLint rglTexCoordPrint3f(rglTex3f_t tc);
GLint rglColorPrint3d(rglCol3d_t c);
GLint rglColorPrint3f(rglCol3f_t c);

//---------------experemental

/*

rglVec3 rglVector3Tangent(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);
rglVec3 rglVector3Binormal(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);

*/
#endif
