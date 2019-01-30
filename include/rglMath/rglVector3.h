#ifndef _VEC3_H
#define _VEC3_H

#include "rglMath_t.h"

//vector3-----------------------------------------------------------------------------------------------------------------------------------------------
GLint rglVectorInit3d(rglVec3d_t *v, GLdouble x, GLdouble y, GLdouble z);
GLint rglVectorInit3f(rglVec3f_t *v, GLfloat x, GLfloat y, GLfloat z);


GLint rglVectorInitZero3d(rglVec3d_t *v);
GLint rglVectorInitZero3f(rglVec3f_t *v);


GLint rglVectorCopy3d(rglVec3d_t *dest, rglVec3d_t src);
GLint rglVectorCopy3f(rglVec3f_t *dest, rglVec3f_t src);


GLint rglVectorScale3d(rglVec3d_t *v, GLdouble scale );
GLint rglVectorScale3f(rglVec3f_t *v, GLfloat scale );


GLint rglVectorAdd3d(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVectorAdd3f(rglVec3f_t *v1, rglVec3f_t v2);


GLint rglVectorSub3d(rglVec3d_t *v1, rglVec3d_t v2);
GLint rglVectorSub3f(rglVec3f_t *v1, rglVec3f_t v2);


GLdouble rglVectorDot3d(rglVec3d_t v1, rglVec3d_t v2);
GLfloat rglVectorDot3f(rglVec3f_t v1, rglVec3f_t v2);


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


GLint rglVectorNormalize3d(rglVec3d_t *v);
GLint rglVectorNormalize3f(rglVec3f_t *v);



GLint rglVectorCmp3d(rglVec3d_t v1, rglVec3d_t v2);
GLint rglVectorCmp3f(rglVec3f_t v1, rglVec3f_t v2);


GLint rglVectorPrint3d(rglVec3d_t v, char *str);
GLint rglVectorPrint3f(rglVec3f_t v, char *str);


//---------------experemental

/*

rglVec3 rglVector3Tangent(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);
rglVec3 rglVector3Binormal(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);

*/
#endif
