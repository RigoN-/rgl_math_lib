#ifndef _VEC2_H
#define _VEC2_H

#include "rglMath_t.h"

GLint rglVector2Set(rglVec2_t *v, GLfloat x, GLfloat y);
GLint rglTexCoord2Set(rglTex2_t *v, GLfloat s, GLfloat t);

GLint rglVector2Clear(rglVec2_t *v);
GLint rglTexCoord2Clear(rglTex2_t *v);

GLint rglVector2Copy(rglVec2_t *dest, rglVec2_t src);
GLint rglTexCoord2Copy(rglTex2_t *dest, rglTex2_t src);

GLint rglVector2Scale(rglVec2_t *v, GLfloat scale ); 
GLint rglTexCoord2Scale(rglTex2_t *v, GLfloat scale );

GLint rglVector2Add(rglVec2_t *v1, rglVec2_t v2);
GLint rglTexCoord2Add(rglTex2_t *v1, rglTex2_t v2);

GLint rglVector2Sub(rglVec2_t *v1, rglVec2_t v2);
GLint rglTexCoord2Sub(rglTex2_t *v1, rglTex2_t v2);

GLfloat rglVector2Dot(rglVec2_t v1, rglVec2_t v2);
GLfloat rglTexCoord2Dot(rglTex2_t v1, rglTex2_t v2);

GLfloat rglVector2Length(rglVec2_t v);
GLfloat rglTexCoord2Length(rglTex2_t v);

GLint rglVec3ToVec2(rglVec2_t *v2, rglVec3_t v3);
GLint rglTexCoord3ToTexCoord2(rglTex2_t *v2, rglTex3_t v3);

GLint rglVec4ToVec2(rglVec2_t v2, rglVec4_t v4);


GLint rglVector2Normalize(rglVec2_t *v);
GLint rglTexCoord2Normalize(rglTex2_t *v);

GLfloat rglVector2Cos(rglVec2_t v1, rglVec2_t v2);
GLfloat rglTexCoord2Cos(rglTex2_t v1, rglTex2_t v2);

GLfloat rglVector2AngleD(rglVec2_t v1, rglVec2_t v2);
GLfloat rglVector2AngleR(rglVec2_t v1, rglVec2_t v2);
GLfloat rglTexCoord2AngleD(rglTex2_t v1, rglTex2_t v2);
GLfloat rglTexCoord2AngleR(rglTex2_t v1, rglTex2_t v2);


GLint rglMatrix4MulVector2(const rglMat4_t m, rglVec2_t *v);
GLint rglMatrix4MulTexCoord2(const rglMat4_t m, rglTex2_t *v);


GLint rglMatrix3MulVector2(const rglMat3_t m, rglVec2_t *v);
GLint rglMatrix3MulTexCoord2(const rglMat3_t m, rglTex2_t *v);

GLint rglVector2Cmp(rglVec2_t v1, rglVec2_t v2);
GLint rglTexCoord2Cmp(rglTex2_t v1, rglTex2_t v2)

GLint rglVector2Print(rglVec2_t v);
GLint rglTexCoord2Print(rglTex2_t v);

#endif
