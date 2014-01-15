#ifndef _VEC3_H
#define _VEC3_H

#include "rglMathType.h"
#include "rglMath3D.h"

//vector3-----------------------------------------------------------------------------------------------------------------------------------------------
GLint rglVector3Set(rglVec3_t *v, GLfloat x, GLfloat y, GLfloat z);
GLint rglTexCoord3Set(rglTex3_t *v, GLfloat s, GLfloat t,  GLfloat r);
GLint rglColor3Set(rglCol3_t *v, GLfloat r, GLfloat g,  GLfloat b);

GLint rglVector3Clear(rglVec3_t *v);
GLint rglTexCoord3Clear(rglTex3_t *v);
GLint rglColor3Clear(rglCol3_t *v);

GLint rglVector3Copy(rglVec3_t *dest, rglVec3_t src);
GLint rglTexCoord3Copy(rglTex3_t *dest, rglTex3_t src);
GLint rglColor3Copy(rglCol3_t *dest, rglCol3_t src);

GLint rglVector3Scale(rglVec3_t *v, GLfloat scale ); 
GLint rglTexCoord3Scale(rglTex3_t *v, GLfloat scale );
GLint rglColor3Scale(rglCol3_t *v, GLfloat scale );

GLint rglVector3Add(rglVec3_t *v1, rglVec3_t v2);
GLint rglTexCoord3Add(rglTex3_t *v1, rglTex3_t v2);
GLint rglColor3Add(rglCol3_t *v1, rglCol3_t v2);

GLint rglVector3Sub(rglVec3_t *v1, rglVec3_t v2);
GLint rglTexCoord3Sub(rglTex3_t *v1, rglTex3_t v2);
GLint rglColor3Sub(rglCol3_t *v1, rglCol3_t v2);

GLfloat rglVector3Dot(rglVec3_t v1, rglVec3_t v2);
GLfloat rglTexCoord3Dot(rglTex3_t v1, rglTex3_t v2);
GLfloat rglColor3Dot(rglCol3_t v1, rglCol3_t v2);

GLint rglVector3Cross(rglVec3_t *res, rglVec3_t v1, rglVec3_t v2);

GLfloat rglVector3Length(rglVec3_t v);
GLfloat rglTexCoord3Length(rglTex3_t v);
GLfloat rglColor3Length(rglCol3_t v);

GLint rglVector3Normalize(rglVec3_t *v);
GLint rglTexCoord3Normalize(rglTex3_t *v);
GLint rglColor3Normalize(rglCol3_t *v);

GLint rglVec4ToVec3(rglVec3_t *v3, rglVec4_t v4);
GLint rglCol4ToCol3(rglCol3_t *c3, rglCol4_t c4);

GLint rglVec3ToCol3(rglCol3_t *c, rglVec3_t v);
GLint rglVec3ToTex3(rglTex3_t *t, rglVec3_t v);

GLint rglCol3ToVec3(rglVec3_t *v, rglCol3_t c);
GLint rglTex3ToVec3(rglVec3_t *v, rglTex3_t t);



GLint rglVector3Print(rglVec3_t v);
GLint rglTexCoord3Print(rglTex3_t v);
GLint rglColor3Print(rglCol3_t *v);
/*
rglVec3 rglVector3Set(GLfloat x, GLfloat y, GLfloat z);
rglTex3 rglTex3Set(GLfloat s, GLfloat t, GLfloat r);
rglCol3 rglColor3Set(GLfloat r, GLfloat g, GLfloat b);
GLint rglVector3Clear(rglVec3 v);
GLint rglVector3Copy( rglVec3 dest, rglVec3 src);
 GLint rglVector3Print(rglVec3 v);
rglVec3 rglVector3Scale(rglVec3  v1, GLfloat scale );
rglVec3 rglVector3Add( rglVec3 v1, rglVec3 v2);
rglVec3 rglVector3Sub( rglVec3 v1, rglVec3 v2);
GLfloat rglVector3Dot( rglVec3 v1, rglVec3 v2);
rglVec3 rglVector3Cross(rglVec3 v1, rglVec3 v2); 
GLfloat rglVector3Length(rglVec3 v);
rglVec3 rglVector3Normalize(rglVec3 v1);   


rglVec2 rglVec3ToVec2(rglVec3 v1);







rglVec3 rglVector3Tangent(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);
rglVec3 rglVector3Binormal(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3);

*/
#endif
