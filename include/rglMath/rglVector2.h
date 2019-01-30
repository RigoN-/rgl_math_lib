#ifndef _VEC2_H
#define _VEC2_H

#include "rglMath_t.h"
//--------------------------------------------------------------------------
//инициализация вектора
GLint rglVectorInit2d(rglVec2d_t *v, GLdouble x, GLdouble y);
GLint rglVectorInit2f(rglVec2f_t *v, GLfloat x, GLfloat y);

//--------------------------------------------------------------------------
//нулевой вектор
GLint rglVectorInitZero2d(rglVec2d_t *v);
GLint rglVectorInitZero2f(rglVec2f_t *v);

//--------------------------------------------------------------------------
//копирование векторов
GLint rglVectorCopy2d( rglVec2d_t *dest, rglVec2d_t src);
GLint rglVectorCopy2f( rglVec2f_t *dest, rglVec2f_t src);

//--------------------------------------------------------------------------
//масштабирование векторов
GLint rglVectorScale2d(rglVec2d_t *v, GLdouble scale );
GLint rglVectorScale2f(rglVec2f_t *v, GLfloat scale );

//--------------------------------------------------------------------------
//сложение векторов
GLint rglVectorAdd2d( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVectorAdd2f( rglVec2f_t *v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//вычетание векторов
GLint rglVectorSub2d( rglVec2d_t *v1, rglVec2d_t v2);
GLint rglVectorSub2f( rglVec2f_t *v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//Скалярное произведение двух векторов(dot product).
GLdouble rglVectorDot2d( rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorDot2f( rglVec2f_t v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//Длина вектора
GLdouble rglVectorLength2d(rglVec2d_t v);
GLfloat rglVectorLength2f(rglVec2f_t v);

//--------------------------------------------------------------------------
//нормализация вектора
GLint rglVectorNormalize2d(rglVec2d_t *v);
GLint rglVectorNormalize2f(rglVec2f_t *v);

//--------------------------------------------------------------------------
//косинус угла между векторами
GLdouble rglVectorCos2d(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorCos2f(rglVec2f_t v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//угл между векторами
//D - градусы
//R - радианы
GLdouble rglVectorAngleD2d(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorAngleD2f(rglVec2f_t v1, rglVec2f_t v2);
GLdouble rglVectorAngleR2d(rglVec2d_t v1, rglVec2d_t v2);
GLfloat rglVectorAngleR2f(rglVec2f_t v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//сравнение векторов
GLint rglVectorCmp2d(rglVec2d_t v1, rglVec2d_t v2);
GLint rglVectorCmp2f(rglVec2f_t v1, rglVec2f_t v2);

//--------------------------------------------------------------------------
//вывод значений вектора
GLint rglVectorPrint2d(rglVec2d_t v, char *str);
GLint rglVectorPrint2f(rglVec2f_t v, char *str);

//--------------------------------------------------------------------------

#endif
