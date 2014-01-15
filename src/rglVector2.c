//#include "rglMath_t.h"
#include "../include/rglVector2.h" 



//vector operation vec2-------------------------------------------------------------------------------------------------------------------

GLint rglVector2Set(rglVec2_t *v, GLfloat x, GLfloat y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglTexCoord2Set(rglTex2_t *v, GLfloat s, GLfloat t)
{
	v->s=s; v->t=t;
	return 0;
}
//нулевой вектор
GLint rglVector2Clear(rglVec2_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglTexCoord2Clear(rglTex2_t *v)
{
	v->s=v->t=0.0;
	return 0;
}

//копирование векторов
GLint rglVector2Copy( rglVec2_t *dest, rglVec2_t src)
{
 dest->x = src.x; dest->y = src.y;
   return 0;
}

GLint rglTexCoord2Copy(rglTex2_t *dest, rglTex2_t src)
{
 dest->s = src.s; dest->t = src.t;
   return 0;
}

//масштабирование векторов
GLint rglVector2Scale(rglVec2_t *v, GLfloat scale )
{
 	v->x*=scale, v->y*=scale;
    return 0;
}

GLint rglTexCoord2Scale(rglTex2_t *v, GLfloat scale )
{
 	v->s*=scale, v->t*=scale;
    return 0;
}

//сложение векторов
GLint rglVector2Add( rglVec2_t *v1, rglVec2_t v2)
{
	v1->x+=v2.x, v1->y+=v2.y;
   return 0;
}

GLint rglTexCoord2Add(rglTex2_t *v1, rglTex2_t v2)
{
	v1->s+=v2.s, v1->t+=v2.t;
   return 0;
}


//вычетание векторов
GLint rglVector2Sub( rglVec2_t *v1, rglVec2_t v2)
{
  v1->x-=v2.x, v1->y-=v2.y;
   return 0;
}

GLint rglTexCoord2Sub(rglTex2_t *v1, rglTex2_t v2)
{
  v1->s-=v2.s, v1->t-=v2.t;
   return 0;
}

//Скалярное произведение двух векторов(dot product).
GLfloat rglVector2Dot( rglVec2_t v1, rglVec2_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLfloat rglTexCoord2Dot(rglTex2_t v1, rglTex2_t v2)
{
  return  v1.s*v2.s+ v1.t*v2.t;   
}

//Длина вектора
GLfloat rglVector2Length(rglVec2_t v)
{
    return sqrt(v.x * v.x + v.y * v.y );
}

GLfloat rglTexCoord2Length(rglTex2_t v)
{
    return sqrt(v.s * v.s + v.t * v.t );
}


GLint rglVec3ToVec2(rglVec2_t *v2, rglVec3_t v3)
{
	 v2->x=v3.x;v2->y=v3.y;
	return 0;
}

GLint rglTexCoord3ToTexCoord2(rglTex2_t *v2, rglTex3_t v3)
{
	 v2->s=v3.s;v2->t=v3.t;
	return 0;
}

GLint rglVec4ToVec2(rglVec2_t v2, rglVec4_t v4)
{
	 v2.x=v4.x;v2.y=v4.y;
	return 0;
}

//нормализация вектора
GLint rglVector2Normalize(rglVec2_t *v)
{
   GLfloat length,ilength;
     
	length=rglVector2Length(*v);
    if(length == 0) {
        rglVector2Clear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVector2Scale(v,ilength);
    return 0;
	}
}

GLint rglTexCoord2Normalize(rglTex2_t *v)
{
   GLfloat length,ilength;
     
	length=rglTexCoord2Length(*v);
    if(length == 0) {
        rglTexCoord2Clear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoord2Scale(v,ilength);
    return 0;
	}
}

//косинус угла между векторами
GLfloat rglVector2Cos(rglVec2_t v1, rglVec2_t v2)
{
    return rglVector2Dot(v1,v2)/(rglVector2Length(v1)*rglVector2Length(v2));	
}

GLfloat rglTexCoord2Cos(rglTex2_t v1, rglTex2_t v2)
{
   return rglTexCoord2Dot(v1,v2)/(rglTexCoord2Length(v1)*rglTexCoord2Length(v2));
}

//угл между векторами
//D - градусы
//R - радианы
GLfloat rglVector2AngleD(rglVec2_t v1, rglVec2_t v2)
{
    return acos(rglVector2Cos(v1,v2))*RAD2DEG;	
}

GLfloat rglVector2AngleR(rglVec2_t v1, rglVec2_t v2)
{
    return acos(rglVector2Cos(v1,v2));	
}

GLfloat rglTexCoord2AngleD(rglTex2_t v1, rglTex2_t v2)
{
   return acos(rglTexCoord2Cos(v1,v2))*RAD2DEG;	
}

GLfloat rglTexCoord2AngleR(rglTex2_t v1, rglTex2_t v2)
{
   return acos(rglTexCoord2Cos(v1,v2));	
}

//умножение матрицы на вектор
GLint rglMatrix4MulVector2(const rglMat4_t m, rglVec2_t *v)
{   
    v->x = v->x * m[0] + v->y * m[4] + m[8] + m[12];
    v->y = v->x * m[1] + v->y * m[5] + m[9] + m[13];   
    return 0;
}

GLint rglMatrix4MulTexCoord2(const rglMat4_t m, rglTex2_t *v)
{   
    v->s = v->s * m[0] + v->t * m[4] + m[8] + m[12];
    v->t = v->s * m[1] + v->t * m[5] + m[9] + m[13];   
    return 0;
}

GLint rglMatrix3MulVector2(const rglMat3_t m, rglVec2_t *v)
{   
	    
    v->x = v->x * m[0] + v->y * m[4] + m[8];
    v->y = v->x * m[1] + v->y * m[5] + m[9];    
    return 0;
}

GLint rglMatrix3MulTexCoord2(const rglMat3_t m, rglTex2_t *v)
{   
	    
    v->s = v->s * m[0] + v->t * m[4] + m[8];
    v->t = v->s * m[1] + v->t * m[5] + m[9];    
    return 0;
}


//сравнение векторов
GLint rglVector2Cmp(rglVec2_t v1, rglVec2_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglTexCoord2Cmp(rglTex2_t v1, rglTex2_t v2)
{
    if ((fabs(v1.s-v1.s)<EPS) && (fabs(v1.t-v1.t)<EPS) )
    	return 1;
    else
	return 0;	
}


GLint rglVector2Print(rglVec2_t v)
{   
	printf("v.x = %5.2f , v.y = %5.2f\n", v.x, v.y);
    return 0;
}

GLint rglTexCoord2Print(rglTex2_t v)
{   
	printf("v.s = %5.2f , v.t = %5.2f\n", v.s, v.t);
    return 0;
}
