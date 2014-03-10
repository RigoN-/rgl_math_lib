//#include "rglMath_t.h"
#include "../include/rglMath/rglVector2.h" 



//vector operation vec2-------------------------------------------------------------------------------------------------------------------

GLint rglVector2dInitd(rglVec2_t *v, GLdouble x, GLdouble y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglVector2fInitf(rglVec2_t *v, GLfloat x, GLfloat y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglTexCoord2dInitd(rglTex2_t *v, GLdouble s, GLdouble t)
{
	v->s=s; v->t=t;
	return 0;
}

GLint rglTexCoord2fInitf(rglTex2_t *v, GLfloat s, GLfloat t)
{
	v->s=s; v->t=t;
	return 0;
}
//нулевой вектор
GLint rglVector2dClear(rglVec2d_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglVector2fClear(rglVec2f_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglTexCoord2dClear(rglTex2d_t *v)
{
	v->s=v->t=0.0;
	return 0;
}

GLint rglTexCoord2fClear(rglTex2f_t *v)
{
	v->s=v->t=0.0;
	return 0;
}

//копирование векторов
GLint rglVector2dCopy( rglVec2d_t *dest, rglVec2d_t src)
{
 dest->x = src.x; dest->y = src.y;
   return 0;
}

GLint rglVector2fCopy( rglVec2f_t *dest, rglVec2f_t src)
{
 dest->x = src.x; dest->y = src.y;
   return 0;
}

GLint rglTexCoord2dCopy(rglTex2d_t *dest, rglTex2d_t src)
{
 dest->s = src.s; dest->t = src.t;
   return 0;
}

GLint rglTexCoord2fCopy(rglTex2f_t *dest, rglTex2f_t src)
{
 dest->s = src.s; dest->t = src.t;
   return 0;
}


//масштабирование векторов
GLint rglVector2dScale(rglVec2d_t *v, GLdouble scale )
{
 	v->x*=scale, v->y*=scale;
    return 0;
}

GLint rglVector2fScale(rglVec2f_t *v, GLfloat scale )
{
 	v->x*=scale, v->y*=scale;
    return 0;
}

GLint rglTexCoord2dScale(rglTex2d_t *v, GLdouble scale )
{
 	v->s*=scale, v->t*=scale;
    return 0;
}

GLint rglTexCoord2fScale(rglTex2f_t *v, GLfloat scale )
{
 	v->s*=scale, v->t*=scale;
    return 0;
}

//сложение векторов
GLint rglVector2dAdd( rglVec2d_t *v1, rglVec2d_t v2)
{
	v1->x+=v2.x, v1->y+=v2.y;
   return 0;
}

GLint rglVector2fAdd( rglVec2f_t *v1, rglVec2f_t v2)
{
	v1->x+=v2.x, v1->y+=v2.y;
   return 0;
}

GLint rglTexCoord2dAdd(rglTex2d_t *v1, rglTex2d_t v2)
{
	v1->s+=v2.s, v1->t+=v2.t;
   return 0;
}

GLint rglTexCoord2fAdd(rglTex2f_t *v1, rglTex2f_t v2)
{
	v1->s+=v2.s, v1->t+=v2.t;
   return 0;
}

//вычетание векторов
GLint rglVector2dSub( rglVec2d_t *v1, rglVec2d_t v2)
{
  v1->x-=v2.x, v1->y-=v2.y;
   return 0;
}

GLint rglVector2fSub( rglVec2f_t *v1, rglVec2f_t v2)
{
  v1->x-=v2.x, v1->y-=v2.y;
   return 0;
}

GLint rglTexCoord2dSub(rglTex2d_t *v1, rglTex2d_t v2)
{
  v1->s-=v2.s, v1->t-=v2.t;
   return 0;
}

GLint rglTexCoord2fSub(rglTex2f_t *v1, rglTex2f_t v2)
{
  v1->s-=v2.s, v1->t-=v2.t;
   return 0;
}

//Скалярное произведение двух векторов(dot product).
GLdouble rglVector2dDot( rglVec2d_t v1, rglVec2d_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLfloat rglVector2fDot( rglVec2f_t v1, rglVec2f_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLdouble rglTexCoord2dDot(rglTex2d_t v1, rglTex2d_t v2)
{
  return  v1.s*v2.s+ v1.t*v2.t;   
}

GLfloat rglTexCoord2fDot(rglTex2f_t v1, rglTex2f_t v2)
{
  return  v1.s*v2.s+ v1.t*v2.t;   
}

//Длина вектора
GLdouble rglVector2dLength(rglVec2d_t v)
{
    return sqrt(v.x * v.x + v.y * v.y );
}

GLfloat rglVector2fLength(rglVec2f_t v)
{
    return sqrt(v.x * v.x + v.y * v.y );
}

GLdouble rglTexCoord2dLength(rglTex2d_t v)
{
    return sqrt(v.s * v.s + v.t * v.t );
}

GLfloat rglTexCoord2fLength(rglTex2f_t v)
{
    return sqrt(v.s * v.s + v.t * v.t );
}



//нормализация вектора
GLint rglVector2dNormalize(rglVec2d_t *v)
{
   GLdouble length,ilength;
     
	length=rglVector2dLength(*v);
    if(length == 0) {
        rglVector2dClear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVector2dScale(v,ilength);
    return 0;
	}
}

GLint rglVector2fNormalize(rglVec2f_t *v)
{
   GLdouble length,ilength;
     
	length=rglVector2fLength(*v);
    if(length == 0) {
        rglVector2fClear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVector2fScale(v,ilength);
    return 0;
	}
}

GLint rglTexCoord2dNormalize(rglTex2d_t *v)
{
   GLdouble length,ilength;
     
	length=rglTexCoord2dLength(*v);
    if(length == 0) {
        rglTexCoord2dClear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoord2dScale(v,ilength);
    return 0;
	}
}

GLint rglTexCoord2fNormalize(rglTex2f_t *v)
{
   GLdouble length,ilength;
     
	length=rglTexCoord2fLength(*v);
    if(length == 0) {
        rglTexCoord2fClear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoord2fScale(v,ilength);
    return 0;
	}
}


//косинус угла между векторами
GLdouble rglVector2dCos(rglVec2d_t v1, rglVec2d_t v2)
{
    return rglVector2dDot(v1,v2)/(rglVector2dLength(v1)*rglVector2dLength(v2));	
}

GLdouble rglVector2fCos(rglVec2f_t v1, rglVec2f_t v2)
{
    return rglVector2fDot(v1,v2)/(rglVector2fLength(v1)*rglVector2fLength(v2));	
}

GLdouble rglTexCoord2dCos(rglTex2d_t v1, rglTex2d_t v2)
{
   return rglTexCoord2dDot(v1,v2)/(rglTexCoord2dLength(v1)*rglTexCoord2dLength(v2));
}

GLdouble rglTexCoord2fCos(rglTex2f_t v1, rglTex2f_t v2)
{
   return rglTexCoord2fDot(v1,v2)/(rglTexCoord2fLength(v1)*rglTexCoord2fLength(v2));
}

//угл между векторами
//D - градусы
//R - радианы
GLdouble rglVector2dAngleD(rglVec2d_t v1, rglVec2d_t v2)
{
    return acos(rglVector2dCos(v1,v2))*RAD2DEG;	
}

GLfloat rglVector2fAngleD(rglVec2f_t v1, rglVec2f_t v2)
{
    return acos(rglVector2fCos(v1,v2))*RAD2DEG;	
}

GLdouble rglVector2dAngleR(rglVec2d_t v1, rglVec2d_t v2)
{
    return acos(rglVector2dCos(v1,v2));	
}

GLfloat rglVector2fAngleR(rglVec2f_t v1, rglVec2f_t v2)
{
    return acos(rglVector2fCos(v1,v2));	
}

GLdouble rglTexCoord2dAngleD(rglTex2d_t v1, rglTex2d_t v2)
{
   return acos(rglTexCoord2dCos(v1,v2))*RAD2DEG;	
}

GLfloat rglTexCoord2fAngleD(rglTex2f_t v1, rglTex2f_t v2)
{
   return acos(rglTexCoord2fCos(v1,v2))*RAD2DEG;	
}

GLdouble rglTexCoord2dAngleR(rglTex2d_t v1, rglTex2d_t v2)
{
   return acos(rglTexCoord2dCos(v1,v2));	
}

GLfloat rglTexCoord2fAngleR(rglTex2f_t v1, rglTex2f_t v2)
{
   return acos(rglTexCoord2fCos(v1,v2));	
}

/*

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
	    
    v->x = v->x * m[0] + v->y * m[3] + m[6];
    v->y = v->x * m[1] + v->y * m[4] + m[7];    
    return 0;
}

GLint rglMatrix3MulTexCoord2(const rglMat3_t m, rglTex2_t *v)
{   
	    
    v->s = v->s * m[0] + v->t * m[3] + m[6];
    v->t = v->s * m[1] + v->t * m[4] + m[7];    
    return 0;
}
*/

//сравнение векторов
GLint rglVector2dCmp(rglVec2d_t v1, rglVec2d_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglVector2fCmp(rglVec2f_t v1, rglVec2f_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglTexCoord2dCmp(rglTex2d_t v1, rglTex2d_t v2)
{
    if ((fabs(v1.s-v1.s)<EPS) && (fabs(v1.t-v1.t)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglTexCoord2fCmp(rglTex2f_t v1, rglTex2f_t v2)
{
    if ((fabs(v1.s-v1.s)<EPS) && (fabs(v1.t-v1.t)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglVector2dPrint(rglVec2d_t v)
{   
	printf("v.x = %4.8lf , v.y = %4.8lf\n", v.x, v.y);
    return 0;
}

GLint rglVector2fPrint(rglVec2f_t v)
{   
	printf("v.x = %4.8f , v.y = %4.8f\n", v.x, v.y);
    return 0;
}

GLint rglTexCoord2dPrint(rglTex2d_t tc)
{   
	printf("tc.s = %4.8f , tc.t = %45.8f\n", tc.s, tc.t);
    return 0;
}

GLint rglTexCoord2fPrint(rglTex2f_t tc)
{   
	printf("tc.s = %4.8f , tc.t = %4.8f\n", tc.s, tc.t);
    return 0;
}
//--------------------------------------------------------

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
