#include <rglMath_t.h>
#include <rglVector2.h>



//vector operation vec2-------------------------------------------------------------------------------------------------------------------
//инициализация вектора
GLint rglVectorInit2d(rglVec2d_t *v, GLdouble x, GLdouble y)
{
	v->x=x; v->y=y;
	return 0;
}

GLint rglVectorInit2f(rglVec2f_t *v, GLfloat x, GLfloat y)
{
	v->x=x; v->y=y;
	return 0;
}


//нулевой вектор
GLint rglVectorInitZero2d(rglVec2d_t *v)
{
	v->x=v->y=0.0;
	return 0;
}

GLint rglVectorInitZero2f(rglVec2f_t *v)
{
	v->x=v->y=0.0;
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



//Скалярное произведение двух векторов(dot product).
GLdouble rglVectorDot2d( rglVec2d_t v1, rglVec2d_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
}

GLfloat rglVectorDot2f( rglVec2f_t v1, rglVec2f_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y;   
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



//нормализация вектора
GLint rglVectorNormalize2d(rglVec2d_t *v)
{
   GLdouble length,ilength;
     
	length=rglVectorLength2d(*v);
    if(length == 0) {
        rglVectorInitZero2d(v);
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
        rglVectorInitZero2f(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale2f(v,ilength);
    return 0;
	}
}



//косинус угла между векторами
GLdouble rglVectorCos2d(rglVec2d_t v1, rglVec2d_t v2)
{
    return rglVectorDot2d(v1,v2)/(rglVectorLength2d(v1)*rglVectorLength2d(v2));	
}

GLfloat rglVectorCos2f(rglVec2f_t v1, rglVec2f_t v2)
{
    return rglVectorDot2f(v1,v2)/(rglVectorLength2f(v1)*rglVectorLength2f(v2));	
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
    return acosf(rglVectorCos2f(v1,v2))*(GLdouble)RAD2DEG;
    
}

GLdouble rglVectorAngleR2d(rglVec2d_t v1, rglVec2d_t v2)
{
    return acos(rglVectorCos2d(v1,v2));	
}

GLfloat rglVectorAngleR2f(rglVec2f_t v1, rglVec2f_t v2)
{
    return acosf(rglVectorCos2f(v1,v2));	
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
    if ((fabs(v1.x-v2.x)<EPSd) && (fabs(v1.y-v2.y)<EPSd) )
    	return 1;
    else
		return 0;	
}

GLint rglVectorCmp2f(rglVec2f_t v1, rglVec2f_t v2)
{
    if ((fabs(v1.x-v2.x)<EPSf) && (fabs(v1.y-v2.y)<EPSf) )
    	return 1;
    else
		return 0;	
}


//вывод значений вектора

GLint rglVectorPrint2d(rglVec2d_t v, char *str)
{   
	printf("%s \t v.x = %.12f , v.y = %.12f\n", str, v.x, v.y);
    return 0;
}

GLint rglVectorPrint2f(rglVec2f_t v, char *str)
{   
	printf("%s \t v.x = %.6f , v.y = %.6f\n", str, v.x, v.y);
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
