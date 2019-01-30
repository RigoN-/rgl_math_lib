#include <rglVector3.h>

//vector operation vec3-------------------------------------------------------------------------------------------------------------------
GLint rglVectorInit3d(rglVec3d_t *v, GLdouble x, GLdouble y, GLdouble z)
{
	v->x=x; v->y=y; v->z=z;
	return 0;
}

GLint rglVectorInit3f(rglVec3f_t *v, GLfloat x, GLfloat y, GLfloat z)
{
	v->x=x; v->y=y; v->z=z;
	return 0;
}



GLint rglVectorInitZero3d(rglVec3d_t *v)
{
	v->x=v->y=v->z=0.0;
	return 0;
}
GLint rglVectorInitZero3f(rglVec3f_t *v)
{
	v->x=v->y=v->z=0.0;
	return 0;
}


GLint rglVectorCopy3d(rglVec3d_t *dest, rglVec3d_t src)
{
	 dest->x = src.x; dest->y = src.y; dest->z = src.z;
	return 0;
}

GLint rglVectorCopy3f(rglVec3f_t *dest, rglVec3f_t src)
{
	 dest->x = src.x; dest->y = src.y; dest->z = src.z;
	return 0;
}


GLint rglVectorScale3d(rglVec3d_t *v, GLdouble scale )
{
	 v->x *= scale; v->y *= scale; v->z *= scale;
	 return 0;
}

GLint rglVectorScale3f(rglVec3f_t *v, GLfloat scale )
{
	 v->x *= scale; v->y *= scale; v->z *= scale;
	 return 0;
}


GLint rglVectorAdd3d(rglVec3d_t *v1, rglVec3d_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y; v1->z+=v2.z;
	return 0;
}

GLint rglVectorAdd3f(rglVec3f_t *v1, rglVec3f_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y; v1->z+=v2.z;
	return 0;
}

GLint rglVectorSub3d(rglVec3d_t *v1, rglVec3d_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y; v1->z-=v2.z;
	return 0;
}

GLint rglVectorSub3f(rglVec3f_t *v1, rglVec3f_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y; v1->z-=v2.z;
	return 0;
}


GLdouble rglVectorDot3d(rglVec3d_t v1, rglVec3d_t v2)
{
  return  v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;   
}

GLfloat rglVectorDot3f(rglVec3f_t v1, rglVec3f_t v2)
{
  return  v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;   
}

//косинус угла между векторами
GLdouble rglVectorCos3d(rglVec3d_t v1, rglVec3d_t v2)
{
    return rglVectorDot3d(v1,v2)/(rglVectorLength3d(v1)*rglVectorLength3d(v2));	
}

GLfloat rglVectorCos3f(rglVec3f_t v1, rglVec3f_t v2)
{
    return rglVectorDot3f(v1,v2)/(rglVectorLength3f(v1)*rglVectorLength3f(v2));	
}


//угл между векторами
//D - градусы
//R - радианы
GLdouble rglVectorAngleD3d(rglVec3d_t v1, rglVec3d_t v2)
{
    return acos(rglVectorCos3d(v1,v2))*RAD2DEG;	
}

GLfloat rglVectorAngleD3f(rglVec3f_t v1, rglVec3f_t v2)
{
    return acosf(rglVectorCos3f(v1,v2))*RAD2DEG;	
}

GLdouble rglVectorAngleR3d(rglVec3d_t v1, rglVec3d_t v2)
{
    return acos(rglVectorCos3d(v1,v2));	
}

GLfloat rglVectorAngleR3f(rglVec3f_t v1, rglVec3f_t v2)
{
    return acosf(rglVectorCos3f(v1,v2));	
}


GLint rglVectorCross3d(rglVec3d_t *res, rglVec3d_t v1, rglVec3d_t v2)
{
	res->x=v1.y * v2.z - v1.z * v2.y;
	res->y=v1.z * v2.x - v1.x * v2.z;
	res->z=v1.x * v2.y - v1.y * v2.x;	
	return 0;
}

GLint rglVectorCross3f(rglVec3f_t *res, rglVec3f_t v1, rglVec3f_t v2)
{
	res->x=v1.y * v2.z - v1.z * v2.y;
	res->y=v1.z * v2.x - v1.x * v2.z;
	res->z=v1.x * v2.y - v1.y * v2.x;	
	return 0;
}

GLdouble rglVectorLength3d(rglVec3d_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

GLfloat rglVectorLength3f(rglVec3f_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}


GLint rglVectorNormalize3d(rglVec3d_t *v)
{
   GLdouble length,ilength;
     
	length=rglVectorLength3d(*v);
    if(length == 0) {
        rglVectorInitZero3d(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale3d(v,ilength);
    return 0;
	}
}

GLint rglVectorNormalize3f(rglVec3f_t *v)
{
   GLfloat length,ilength;
     
	length=rglVectorLength3f(*v);
    if(length == 0) {
        rglVectorInitZero3f(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale3f(v,ilength);
    return 0;
	}
}


//сравнение векторов
GLint rglVectorCmp3d(rglVec3d_t v1, rglVec3d_t v2)
{
    if ((fabs(v1.x-v2.x)<EPS) && (fabs(v1.y-v2.y)<EPS) && (fabs(v1.z-v2.z)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVectorCmp3f(rglVec3f_t v1, rglVec3f_t v2)
{
    if ((fabs(v1.x-v2.x)<EPSf) && (fabs(v1.y-v2.y)<EPSf) && (fabs(v1.z-v2.z)<EPSf))
    	return 1;
    else
		return 0;	
}


GLint rglVectorPrint3d(rglVec3d_t v, char *str)
{   
	printf("%s \t v.x = %0.12f , v.y = %0.12f, v.z = %0.12f\n", str, v.x, v.y,v.z);
    return 0;
}

GLint rglVectorPrint3f(rglVec3f_t v, char *str)
{   
	printf("%s \t v.x = %0.6f , v.y = %0.6f, v.z = %0.6f\n", str, v.x, v.y,v.z);
    return 0;
}




/*

 rglVec3 rglVector3Tangent(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3)
  {
	 rglVec3 edge1,edge2, tangent;
	 rglVec2 texEdge1,texEdge2;
	 edge1=rglVector3Normalize(rglVector3Sub(v2,v1)) ;
	 edge2=rglVector3Normalize(rglVector3Sub(v3,v1)) ;
	 
	 texEdge1=rglVector2Normalize(rglVector2Sub(rglVector2Set(t2.s,t2.t),rglVector2Set(t1.s,t1.t))) ;
	 texEdge2=rglVector2Normalize(rglVector2Sub(rglVector2Set(t3.s,t3.t),rglVector2Set(t1.s,t1.t))) ;
	 float det = (texEdge1.x * texEdge2.y) - (texEdge1.y * texEdge2.x);
	  if (fabsf(det) < 1e-6f)    // almost equal to zero
    {
        tangent.x = 1.0f;
        tangent.y = 0.0f;
        tangent.z = 0.0f;

    }
    else
    {
        det = 1.0f / det;
		
        tangent.x = (texEdge2.y * edge1.x - texEdge1.y * edge2.x) * det;
        tangent.y = (texEdge2.y * edge1.y - texEdge1.y * edge2.y) * det;
        tangent.z = (texEdge2.y * edge1.z - texEdge1.y * edge2.z) * det;

	  }
	 return rglVector3Normalize(tangent) ;
}

  rglVec3 rglVector3Binormal(rglVec3 v1, rglVec3 v2, rglVec3 v3, rglTex2 t1, rglTex2 t2, rglTex2 t3)
  {
	 rglVec3 edge1,edge2, bitangent;
	 rglVec2 texEdge1,texEdge2;
	
	 edge1=rglVector3Normalize(rglVector3Sub(v2,v1)) ;
	 edge2=rglVector3Normalize(rglVector3Sub(v3,v1)) ;
	 
	 texEdge1=rglVector2Normalize(rglVector2Sub(rglVector2Set(t2.s,t2.t),rglVector2Set(t1.s,t1.t))) ;
	 texEdge2=rglVector2Normalize(rglVector2Sub(rglVector2Set(t3.s,t3.t),rglVector2Set(t1.s,t1.t))) ;
	  float det = (texEdge1.x * texEdge2.y) - (texEdge1.y * texEdge2.x);
	  if (fabsf(det) < 1e-6f)    // almost equal to zero
    {
       
      bitangent.x = 0.0f;
        bitangent.y = 1.0f;
       bitangent.z = 0.0f;
    }
    else
    {
        det = 1.0f / det;      
           
       bitangent.x = (-texEdge2.x * edge1.x + texEdge1.x * edge2.x) * det;
       bitangent.y = (-texEdge2.x * edge1.y + texEdge1.x * edge2.y) * det;
       bitangent.z = (-texEdge2.x * edge1.z + texEdge1.x * edge2.z) * det;
	  }
	 return rglVector3Normalize(bitangent) ;
}

*/
