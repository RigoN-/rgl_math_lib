//#include "rglMath_t.h"
#include "../include/rglMath/rglVector2.h" 



//vector operation vec2-------------------------------------------------------------------------------------------------------------------

GLint rglVectorInit2d(rglVec2_t *v, GLdouble x, GLdouble y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglVectorInit2f(rglVec2_t *v, GLfloat x, GLfloat y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglTexCoordInit2d(rglTex2_t *v, GLdouble s, GLdouble t)
{
	v->s=s; v->t=t;
	return 0;
}

GLint rglTexCoordInit2f(rglTex2_t *v, GLfloat s, GLfloat t)
{
	v->s=s; v->t=t;
	return 0;
}
//нулевой вектор
GLint rglVectorClear2d(rglVec2d_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglVectorClear2f(rglVec2f_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglTexCoordClear2d(rglTex2d_t *v)
{
	v->s=v->t=0.0;
	return 0;
}

GLint rglTexCoordClear2f(rglTex2f_t *v)
{
	v->s=v->t=0.0;
	return 0;
}

//копирование векторов
GLint rglVectorCopy2d( rglVec2d_t *dest, rglVec2d_t src)
{
 dest->x = src.x; dest->y = src.y;
   return 0;
}

GLint rglVectorCopy2f( rglVec2f_t *dest, rglVec2f_t src)
{
 dest->x = src.x; dest->y = src.y;
   return 0;
}

GLint rglTexCoordCopy2d(rglTex2d_t *dest, rglTex2d_t src)
{
 dest->s = src.s; dest->t = src.t;
   return 0;
}

GLint rglTexCoordCopy2f(rglTex2f_t *dest, rglTex2f_t src)
{
 dest->s = src.s; dest->t = src.t;
   return 0;
}


//масштабирование векторов
GLint rglVectorScale2d(rglVec2d_t *v, GLdouble scale )
{
 	v->x*=scale, v->y*=scale;
    return 0;
}

GLint rglVectorScale2f(rglVec2f_t *v, GLfloat scale )
{
 	v->x*=scale, v->y*=scale;
    return 0;
}

GLint rglTexCoordScale2d(rglTex2d_t *v, GLdouble scale )
{
 	v->s*=scale, v->t*=scale;
    return 0;
}

GLint rglTexCoordScale2f(rglTex2f_t *v, GLfloat scale )
{
 	v->s*=scale, v->t*=scale;
    return 0;
}

//сложение векторов
GLint rglVectorAdd2d( rglVec2d_t *v1, rglVec2d_t v2)
{
	v1->x+=v2.x, v1->y+=v2.y;
   return 0;
}

GLint rglVectorAdd2f( rglVec2f_t *v1, rglVec2f_t v2)
{
	v1->x+=v2.x, v1->y+=v2.y;
   return 0;
}

GLint rglTexCoordAdd2d(rglTex2d_t *v1, rglTex2d_t v2)
{
	v1->s+=v2.s, v1->t+=v2.t;
   return 0;
}

GLint rglTexCoordAdd2f(rglTex2f_t *v1, rglTex2f_t v2)
{
	v1->s+=v2.s, v1->t+=v2.t;
   return 0;
}

//вычетание векторов
GLint rglVectorSub2d( rglVec2d_t *v1, rglVec2d_t v2)
{
  v1->x-=v2.x, v1->y-=v2.y;
   return 0;
}

GLint rglVectorSub2f( rglVec2f_t *v1, rglVec2f_t v2)
{
  v1->x-=v2.x, v1->y-=v2.y;
   return 0;
}

GLint rglTexCoordSub2d(rglTex2d_t *v1, rglTex2d_t v2)
{
  v1->s-=v2.s, v1->t-=v2.t;
   return 0;
}

GLint rglTexCoordSub2f(rglTex2f_t *v1, rglTex2f_t v2)
{
  v1->s-=v2.s, v1->t-=v2.t;
   return 0;
}

//Скалярное произведение двух векторов(dot product).
GLdouble rglVectorDot2d( rglVec2d_t v1, rglVec2d_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLfloat rglVectorDot2f( rglVec2f_t v1, rglVec2f_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLdouble rglTexCoordDot2d(rglTex2d_t v1, rglTex2d_t v2)
{
  return  v1.s*v2.s+ v1.t*v2.t;   
}

GLfloat rglTexCoordDot2f(rglTex2f_t v1, rglTex2f_t v2)
{
  return  v1.s*v2.s+ v1.t*v2.t;   
}

//Длина вектора
GLdouble rglVectorLength2d(rglVec2d_t v)
{
    return sqrt(v.x * v.x + v.y * v.y );
}

GLfloat rglVectorLength2f(rglVec2f_t v)
{
    return sqrt(v.x * v.x + v.y * v.y );
}

GLdouble rglTexCoordLength2d(rglTex2d_t v)
{
    return sqrt(v.s * v.s + v.t * v.t );
}

GLfloat rglTexCoordLength2f(rglTex2f_t v)
{
    return sqrt(v.s * v.s + v.t * v.t );
}

//нормализация вектора
GLint rglVectorNormalize2d(rglVec2d_t *v)
{
   GLdouble length,ilength;
     
	length=rglVectorLength2d(*v);
    if(length == 0) {
        rglVectorClear2d(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale2d(v,ilength);
    return 0;
	}
}

GLint rglVectorNormalize2f(rglVec2f_t *v)
{
   GLdouble length,ilength;
     
	length=rglVectorLength2f(*v);
    if(length == 0) {
        rglVectorClear2f(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale2f(v,ilength);
    return 0;
	}
}

GLint rglTexCoordNormalize2d(rglTex2d_t *v)
{
   GLdouble length,ilength;
     
	length=rglTexCoordLength2d(*v);
    if(length == 0) {
        rglTexCoordClear2d(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoordScale2d(v,ilength);
    return 0;
	}
}

GLint rglTexCoordNormalize2f(rglTex2f_t *v)
{
   GLdouble length,ilength;
     
	length=rglTexCoordLength2f(*v);
    if(length == 0) {
        rglTexCoordClear2f(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoordScale2f(v,ilength);
    return 0;
	}
}

//косинус угла между векторами
GLdouble rglVectorCos2d(rglVec2d_t v1, rglVec2d_t v2)
{
    return rglVectorDot2d(v1,v2)/(rglVectorLength2d(v1)*rglVectorLength2d(v2));	
}

GLdouble rglVectorCos2f(rglVec2f_t v1, rglVec2f_t v2)
{
    return rglVectorDot2f(v1,v2)/(rglVectorLength2f(v1)*rglVectorLength2f(v2));	
}

GLdouble rglTexCoordCos2d(rglTex2d_t v1, rglTex2d_t v2)
{
   return rglTexCoordDot2d(v1,v2)/(rglTexCoordLength2d(v1)*rglTexCoordLength2d(v2));
}

GLdouble rglTexCoordCos2f(rglTex2f_t v1, rglTex2f_t v2)
{
   return rglTexCoordDot2f(v1,v2)/(rglTexCoordLength2f(v1)*rglTexCoordLength2f(v2));
}

//угл между векторами
//D - градусы
//R - радианы
GLdouble rglVectorAngleD2d(rglVec2d_t v1, rglVec2d_t v2)
{
    return acos(rglVectorCos2d(v1,v2))*RAD2DEG;	
}

GLfloat rglVectorAngleD2f(rglVec2f_t v1, rglVec2f_t v2)
{
    return acos(rglVectorCos2f(v1,v2))*RAD2DEG;	
}

GLdouble rglVectorAngleR2d(rglVec2d_t v1, rglVec2d_t v2)
{
    return acos(rglVectorCos2d(v1,v2));	
}

GLfloat rglVectorAngleR2f(rglVec2f_t v1, rglVec2f_t v2)
{
    return acos(rglVectorCos2f(v1,v2));	
}

GLdouble rglTexCoordAngleD2d(rglTex2d_t v1, rglTex2d_t v2)
{
   return acos(rglTexCoordCos2d(v1,v2))*RAD2DEG;	
}

GLfloat rglTexCoordAngleD2f(rglTex2f_t v1, rglTex2f_t v2)
{
   return acos(rglTexCoordCos2f(v1,v2))*RAD2DEG;	
}

GLdouble rglTexCoordAngleR2d(rglTex2d_t v1, rglTex2d_t v2)
{
   return acos(rglTexCoordCos2d(v1,v2));	
}

GLfloat rglTexCoordAngleR2f(rglTex2f_t v1, rglTex2f_t v2)
{
   return acos(rglTexCoordCos2f(v1,v2));	
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
GLint rglVectorCmp2d(rglVec2d_t v1, rglVec2d_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglVectorCmp2f(rglVec2f_t v1, rglVec2f_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglTexCoordCmp2d(rglTex2d_t v1, rglTex2d_t v2)
{
    if ((fabs(v1.s-v1.s)<EPS) && (fabs(v1.t-v1.t)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglTexCoordCmp2f(rglTex2f_t v1, rglTex2f_t v2)
{
    if ((fabs(v1.s-v1.s)<EPS) && (fabs(v1.t-v1.t)<EPS) )
    	return 1;
    else
	return 0;	
}

GLint rglVectorPrint2d(rglVec2d_t v)
{   
	printf("v.x = %4.8lf , v.y = %4.8lf\n", v.x, v.y);
    return 0;
}

GLint rglVectorPrint2f(rglVec2f_t v)
{   
	printf("v.x = %4.8f , v.y = %4.8f\n", v.x, v.y);
    return 0;
}

GLint rglTexCoordPrint2d(rglTex2d_t tc)
{   
	printf("tc.s = %4.8f , tc.t = %45.8f\n", tc.s, tc.t);
    return 0;
}

GLint rglTexCoordPrint2f(rglTex2f_t tc)
{   
	printf("tc.s = %4.8f , tc.t = %4.8f\n", tc.s, tc.t);
    return 0;
}
//--------------------------------------------------------
/*
GLint rglVector3To2d(rglVec2d_t *v2, rglVec3_t v3)
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
*/
