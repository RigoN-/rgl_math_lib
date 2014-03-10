#include "../include/rglMath/rglVector3.h" 
#include "../include/rglMath/rglVector4.h" 


//vector operation vec4------------------------------------------------------------------------------------------------------------------
GLint rglVector4dCopy( rglVec4d_t *dest, rglVec4d_t src)
{
   dest->x = src.x; dest->y = src.y; dest->z = src.z; dest->w = src.w;
   return 0;
}

GLint rglVector4fCopy( rglVec4f_t *dest, rglVec4f_t src)
{
   dest->x = src.x; dest->y = src.y; dest->z = src.z; dest->w = src.w;
   return 0;
}

GLint rglVector4dInitd(rglVec4d_t *v,GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}

GLint rglVector4fInitf(rglVec4f_t *v,GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	v->x=x;v->y=y; v->z=z; v->w=w;
	return 0;
}


GLint rglColor4dInitd(rglCol4d_t *c,GLdouble r, GLdouble g, GLdouble b, GLdouble a)
{
	c->r=r;c->g=g;c->b=b; c->a=a;
	return 0;
}

GLint rglColor4fInitf(rglCol4f_t *c,GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	c->r=r;c->g=g;c->b=b; c->a=a;
	return 0;
}


GLint  rglColor3dToColor4(rglCol4d_t *dest, rglCol3d_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b; dest->a=1.0f;
	return 0;
}

GLint  rglColor3fToColor4(rglCol4f_t *dest, rglCol3f_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b; dest->a=1.0f;
	return 0;
}

GLint  rglColor4dToColor3(rglCol3d_t *dest, rglCol4d_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b;
	return 0;
}

GLint  rglColor4fToColor3(rglCol3f_t *dest, rglCol4f_t src)
{
	dest->r=src.r;dest->g=src.g;dest->b=src.b;
	return 0;
}

GLint rglVector4dClear(rglVec4d_t *v)
{
	v->x=v->y=v->z=v->w=0.0;
	return 0;
}

GLint rglVector4fClear(rglVec4f_t *v)
{
	v->x=v->y=v->z=v->w=0.0;
	return 0;
}


GLint  rglVector4dScale(rglVec4d_t *v, GLdouble scale )
{
 	v->x*=scale; v->y*=scale;  v->z*=scale; v->w*=scale; 	
    return 0;
}

GLint  rglVector4fScale(rglVec4f_t *v, GLfloat scale )
{
 	v->x*=scale; v->y*=scale;  v->z*=scale; v->w*=scale;
    return 0;
}


GLint rglVector4dAdd( rglVec4d_t *v1, rglVec4d_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y;  v1->z+=v2.z; v1->w+=v2.w;
	return 0;
}

GLint rglVector4fAdd( rglVec4f_t *v1, rglVec4f_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y;  v1->z+=v2.z; v1->w+=v2.w;
	return 0;
}


GLint rglVector4dSub( rglVec4d_t *v1, rglVec4d_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y;  v1->z-=v2.z; v1->w-=v2.w;
	return 0;
}

GLint rglVector4fSub( rglVec4f_t *v1, rglVec4f_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y;  v1->z-=v2.z; v1->w-=v2.w;
	return 0;
}


GLdouble rglVector4dDot( rglVec4d_t v1, rglVec4d_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y+ v1.z*v2.z+ v1.w*v2.w;   
}

GLdouble rglVector4fDot( rglVec4f_t v1, rglVec4f_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y+ v1.z*v2.z+ v1.w*v2.w;   
}

GLdouble rglVector4dLength(rglVec4d_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z+v.w * v.w);
}

GLdouble rglVector4fLength(rglVec4f_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z+v.w * v.w);
}

GLint rglVector4dNormalize(rglVec4d_t *v1)
{
    
    GLdouble length,ilength;   
	length=rglVector4dLength(*v1);
    if(length == 0) {
        rglVector4dClear(v1);       
    }
	else
	{
		ilength = 1.0 / length;
		rglVector4dScale(v1,ilength);		
	}    
	return 0;
}

GLint rglVector4fNormalize(rglVec4f_t *v1)
{
   
    GLfloat length,ilength;   
	length=rglVector4fLength(*v1);
    if(length == 0) {
        rglVector4fClear(v1);       
    }
	else
	{
		ilength = 1.0 / length;
		rglVector4fScale(v1,ilength);		
	}    
	return 0;
}

GLint rglVector4dTo3d(rglVec3d_t *dest, rglVec4d_t src)
{
	 dest->x=src.x;dest->y=src.y;dest->z=src.z;
	return 0;
}

GLint rglVector4fTo3f(rglVec3f_t *dest, rglVec4f_t src)
{
	 dest->x=src.x;dest->y=src.y;dest->z=src.z;
	return 0;
}

GLint rglVector3dTo4d(rglVec4d_t *dest, rglVec3d_t src)
{
	dest->x=src.x;dest->y=src.y;dest->z=src.z; dest->w=1.0f ;
	return 0;
}

GLint rglVector3fTo4f(rglVec4f_t *dest, rglVec3f_t src)
{
	dest->x=src.x;dest->y=src.y;dest->z=src.z; dest->w=1.0f ;
	return 0;
}


//сравнение векторов
GLint rglVector4dCmp(rglVec4d_t v1, rglVec4d_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS) && (fabs(v1.w-v1.w)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVector4fCmp(rglVec4f_t v1, rglVec4f_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS) && (fabs(v1.w-v1.w)<EPS))
    	return 1;
    else
		return 0;	
}


GLint rglVector4dPrint(rglVec4d_t v)
{   
	printf("v.x = %4.8lf , v.y = %4.8lf, v.z = %4.8lf,  v.w = %4.8lf\n", v.x, v.y,v.z,v.w);
    return 0;
}

GLint rglVector4fPrint(rglVec4f_t v)
{   
	printf("v.x = %4.8f , v.y = %4.8f, v.z = %4.8f,  v.w = %4.8f\n", v.x, v.y,v.z,v.w);
    return 0;
}

GLint rglColor4dPrint(rglCol4d_t c)
{   
	printf("c.r = %4.8lf , c.g = %4.8lf, c.b = %4.8lf,  c.a = %4.8lf\n", c.r, c.g, c.b, c.a);
    return 0;
}

GLint rglColor4fPrint(rglCol4f_t c)
{   
	printf("c.r = %4.8f , c.g = %4.8f, c.b = %4.8f,  c.a = %4.8f\n", c.r, c.g, c.b, c.a);
    return 0;
}


