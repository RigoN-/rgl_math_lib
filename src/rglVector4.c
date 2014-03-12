#include "../include/rglMath/rglVector3.h" 
#include "../include/rglMath/rglVector4.h" 


//vector operation vec4------------------------------------------------------------------------------------------------------------------
GLint rglVectorInitd(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}

GLint rglVectorInitf(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}

GLint rglColorInitd(rglCol4d_t *c,GLdouble r, GLdouble g, GLdouble b, GLdouble a)
{
	c->r=r;c->g=g;c->b=b; c->a=a;
	return 0;
}

GLint rglColorInitf(rglCol4f_t *c,GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	c->r=r;c->g=g;c->b=b; c->a=a;
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


GLint  rglColor3ToColor4d(rglCol4d_t *dest, rglCol3d_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b; dest->a=1.0f;
	return 0;
}

GLint  rglColor3ToColor4f(rglCol4f_t *dest, rglCol3f_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b; dest->a=1.0f;
	return 0;
}

GLint  rglColor4ToColor3d(rglCol3d_t *dest, rglCol4d_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b;
	return 0;
}

GLint  rglColor4ToColor3f(rglCol3f_t *dest, rglCol4f_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b;
	return 0;
}

GLint rglVectorClear4d(rglVec4d_t *v)
{
	v->x=v->y=v->z=v->w=0.0;
	return 0;
}

GLint rglVectorClear4f(rglVec4f_t *v)
{
	v->x=v->y=v->z=v->w=0.0;
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

GLint rglVectorNormalize4d(rglVec4d_t *v1)
{
    
    GLdouble length,ilength;   
	length=rglVectorLength4d(*v1);
    if(length == 0) {
        rglVectorClear4d(v1);       
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
        rglVectorClear4f(v1);       
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
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS) && (fabs(v1.w-v1.w)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVectorCmp4f(rglVec4f_t v1, rglVec4f_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS) && (fabs(v1.w-v1.w)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVectorPrint4d(rglVec4d_t v)
{   
	printf("v.x = %4.8lf , v.y = %4.8lf, v.z = %4.8lf,  v.w = %4.8lf\n", v.x, v.y,v.z,v.w);
    return 0;
}

GLint rglVectorPrint4f(rglVec4f_t v)
{   
	printf("v.x = %4.8f , v.y = %4.8f, v.z = %4.8f,  v.w = %4.8f\n", v.x, v.y,v.z,v.w);
    return 0;
}

GLint rglColorPrint4d(rglCol4d_t c)
{   
	printf("c.r = %4.8lf , c.g = %4.8lf, c.b = %4.8lf,  c.a = %4.8lf\n", c.r, c.g, c.b, c.a);
    return 0;
}

GLint rglColorPrint4f(rglCol4f_t c)
{   
	printf("c.r = %4.8f , c.g = %4.8f, c.b = %4.8f,  c.a = %4.8f\n", c.r, c.g, c.b, c.a);
    return 0;
}


