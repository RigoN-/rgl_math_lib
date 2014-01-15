#ifndef _VECTOR4_H
#define _VECTOR4_H

#include "rglMath_t.h"


//vector4
rglVec4 rglVector4Set(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
rglCol4 rglColor4Set(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
rglVec3 rglVec4ToVec3(rglVec4 v1);
rglCol3 rglColor4ToColor3(rglCol4 v1);
rglVec2 rglVec4ToVec2(rglVec4 v1);
GLint rglVector4Clear(rglVec4 v);
GLint rglVector4Copy( rglVec4 v1, rglVec4 v2);
rglVec4 rglVector4Scale(rglVec4 v1, GLfloat scale );
rglVec4 rglVector4Add( rglVec4 v1, rglVec4 v2);
rglVec4 rglVector4Sub( rglVec4 v1, rglVec4 v2);
GLfloat rglVector4Dot( rglVec4 v1, rglVec4 v2);
GLfloat rglVector4Length(rglVec4 v);
rglVec4 rglVector4Normalize(rglVec4 v1);
 GLint rglVector4Print(rglVec4 v);

#endif
