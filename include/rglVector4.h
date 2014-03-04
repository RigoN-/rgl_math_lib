#ifndef _VECTOR4_H
#define _VECTOR4_H

#include "rglMath_t.h"


//vector4
rglVec4_t rglVector4Set(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
rglCol4_t rglColor4Set(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
//rglVec3_t rglVec4ToVec3(rglVec4_t v1);
rglCol3_t rglColor4ToColor3(rglCol4_t v1);
//rglVec2_t rglVec4ToVec2(rglVec4_t v1);
GLint rglVector4Clear(rglVec4_t v);
GLint rglVector4Copy( rglVec4_t v1, rglVec4_t v2);
rglVec4_t rglVector4Scale(rglVec4_t v1, GLfloat scale );
rglVec4_t rglVector4Add( rglVec4_t v1, rglVec4_t v2);
rglVec4_t rglVector4Sub( rglVec4_t v1, rglVec4_t v2);
GLfloat rglVector4Dot( rglVec4_t v1, rglVec4_t v2);
GLfloat rglVector4Length(rglVec4_t v);
rglVec4_t rglVector4Normalize(rglVec4_t v1);
 GLint rglVector4Print(rglVec4_t v);

#endif
