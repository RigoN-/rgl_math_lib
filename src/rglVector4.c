#include <rglVector3.h>
#include <rglVector4.h>



//vector operation vec4------------------------------------------------------------------------------------------------------------------
GLint rglVectorInit4d(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}

GLint rglVectorInit4f(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}


GLint rglVectorCopy4d( rglVec4d_t *dest, rglVec4d_t src)
{
   dest->x = src.x; dest->y = src.y; dest->z = src.z; dest->w = src.w;
   return 0;
}

GLint rglVectorCopy4f( rglVec4f_t *dest, rglVec4f_t src)
{
   dest->x = src.x; dest->y = src.y; dest->z = src.z; dest->w = src.w;
   return 0;
}



GLint rglVectorInitZero4d(rglVec4d_t *v)
{
	v->x=v->y=v->z=v->w=0.0;
	return 0;
}

GLint rglVectorInitZero4f(rglVec4f_t *v)
{
	v->x=v->y=v->z=v->w=0.0f;
	return 0;
}


GLint rglVectorScale4d(rglVec4d_t *v, GLdouble scale )
{
 	v->x*=scale; v->y*=scale;  v->z*=scale; v->w*=scale; 	
    return 0;
}

GLint  rglVectorScale4f(rglVec4f_t *v, GLfloat scale )
{
 	v->x*=scale; v->y*=scale;  v->z*=scale; v->w*=scale;
    return 0;
}

GLint rglVectorAdd4d( rglVec4d_t *v1, rglVec4d_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y;  v1->z+=v2.z; v1->w+=v2.w;
	return 0;
}

GLint rglVectorAdd4f( rglVec4f_t *v1, rglVec4f_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y;  v1->z+=v2.z; v1->w+=v2.w;
	return 0;
}

GLint rglVectorSub4d( rglVec4d_t *v1, rglVec4d_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y;  v1->z-=v2.z; v1->w-=v2.w;
	return 0;
}

GLint rglVectorSub4f( rglVec4f_t *v1, rglVec4f_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y;  v1->z-=v2.z; v1->w-=v2.w;
	return 0;
}

GLdouble rglVectorDot4d( rglVec4d_t v1, rglVec4d_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y+ v1.z*v2.z+ v1.w*v2.w;   
}

GLdouble rglVectorDot4f( rglVec4f_t v1, rglVec4f_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y+ v1.z*v2.z+ v1.w*v2.w;   
}

GLdouble rglVectorLength4d(rglVec4d_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z+v.w * v.w);
}

GLdouble rglVectorLength4f(rglVec4f_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z+v.w * v.w);
}


//косинус угла между векторами
GLdouble rglVectorCos4d(rglVec4d_t v1, rglVec4d_t v2)
{
    return rglVectorDot4d(v1,v2)/(rglVectorLength4d(v1)*rglVectorLength4d(v2));	
}

GLfloat rglVectorCos4f(rglVec4f_t v1, rglVec4f_t v2)
{
    return rglVectorDot4f(v1,v2)/(rglVectorLength4f(v1)*rglVectorLength4f(v2));	
}


GLdouble rglVectorAngleD4d(rglVec4d_t v1, rglVec4d_t v2)
{
    return acos(rglVectorCos4d(v1,v2))*RAD2DEG;	
}

GLfloat rglVectorAngleD4f(rglVec4f_t v1, rglVec4f_t v2)
{
    return acosf(rglVectorCos4f(v1,v2))*RAD2DEG;	
}

GLdouble rglVectorAngleR4d(rglVec4d_t v1, rglVec4d_t v2)
{
    return acos(rglVectorCos4d(v1,v2));	
}

GLfloat rglVectorAngleR4f(rglVec4f_t v1, rglVec4f_t v2)
{
    return acosf(rglVectorCos4f(v1,v2));	
}

GLint rglVectorCross4d(rglVec4d_t *res, rglVec4d_t v1, rglVec4d_t v2)
{
	res->x=v1.y * v2.z - v1.z * v2.y;
	res->y=v1.z * v2.x - v1.x * v2.z;
	res->z=v1.x * v2.y - v1.y * v2.x;	
	return 0;
}

GLint rglVectorCross4f(rglVec4f_t *res, rglVec4f_t v1, rglVec4f_t v2)
{
	res->x=v1.y * v2.z - v1.z * v2.y;
	res->y=v1.z * v2.x - v1.x * v2.z;
	res->z=v1.x * v2.y - v1.y * v2.x;	
	return 0;
}

GLint rglVectorNormalize4d(rglVec4d_t *v1)
{
    
    GLdouble length,ilength;   
	length=rglVectorLength4d(*v1);
    if(length == 0) {
        rglVectorInitZero4d(v1);       
    }
	else
	{
		ilength = 1.0 / length;
		rglVectorScale4d(v1,ilength);		
	}    
	return 0;
}

GLint rglVectorNormalize4f(rglVec4f_t *v1)
{
   
    GLfloat length,ilength;   
	length=rglVectorLength4f(*v1);
    if(length == 0) {
        rglVectorInitZero4f(v1);       
    }
	else
	{
		ilength = 1.0 / length;
		rglVectorScale4f(v1,ilength);		
	}    
	return 0;
}

GLint rglVector4ToVector3d(rglVec3d_t *dest, rglVec4d_t src)
{
	 dest->x=src.x;dest->y=src.y;dest->z=src.z;
	return 0;
}

GLint rglVector4ToVector3f(rglVec3f_t *dest, rglVec4f_t src)
{
	 dest->x=src.x;dest->y=src.y;dest->z=src.z;
	return 0;
}

GLint rglVector3ToVector4d(rglVec4d_t *dest, rglVec3d_t src)
{
	dest->x=src.x;dest->y=src.y;dest->z=src.z; dest->w=1.0f ;
	return 0;
}

GLint rglVector3ToVector4f(rglVec4f_t *dest, rglVec3f_t src)
{
	dest->x=src.x;dest->y=src.y;dest->z=src.z; dest->w=1.0f ;
	return 0;
}


//сравнение векторов
GLint rglVectorCmp4d(rglVec4d_t v1, rglVec4d_t v2)
{
    if ((fabs(v1.x-v2.x)<EPSd) && (fabs(v1.y-v2.y)<EPSd) && (fabs(v1.z-v2.z)<EPSd) && (fabs(v1.w-v2.w)<EPSd))
    	return 1;
    else
		return 0;	
}

GLint rglVectorCmp4f(rglVec4f_t v1, rglVec4f_t v2)
{
    if ((fabs(v1.x-v2.x)<EPSf) && (fabs(v1.y-v2.y)<EPSf) && (fabs(v1.z-v2.z)<EPSf) && (fabs(v1.w-v2.w)<EPSf))
    	return 1;
    else
		return 0;	
}

GLint rglVectorPrint4d(rglVec4d_t v)
{   
	printf("v.x = %0.12f , v.y = %0.12f, v.z = %0.12f,  v.w = %0.12f\n", v.x, v.y,v.z,v.w);
    return 0;
}

GLint rglVectorPrint4f(rglVec4f_t v)
{   
	printf("v.x = %0.6f , v.y = %0.6f, v.z = %0.6f,  v.w = %0.6f\n", v.x, v.y,v.z,v.w);
    return 0;
}


