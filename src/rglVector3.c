#include "../include/rglVector3.h" 

//vector operation vec3-------------------------------------------------------------------------------------------------------------------
GLint rglVector3Set(rglVec3_t *v, GLfloat x, GLfloat y, GLfloat z)
{
	v->x=x; v->y=y; v->z=z;
	return 0;
}

GLint rglTexCoord3Set(rglTex3_t *v, GLfloat s, GLfloat t, GLfloat r)
{
	v->s=s; v->t=t; v->r=r;
	return 0;
}

GLint rglColor3Set(rglCol3_t *v, GLfloat r, GLfloat g, GLfloat b)
{
	v->r=r; v->g=g; v->b=b;
	return 0;
}

GLint rglVector3Clear(rglVec3_t *v)
{
	v->x=v->y=v->z=0.0;
	return 0;
}

GLint rglTexCoord3Clear(rglTex3_t *v)
{
	v->s=v->t=v->r=0.0;
	return 0;
}

GLint rglColor3Clear(rglCol3_t *v)
{
	v->r=v->g=v->b=0.0;
	return 0;
}

GLint rglVector3Copy(rglVec3_t *dest, rglVec3_t src)
{
	 dest->x = src.x; dest->y = src.y; dest->z = src.z;
	return 0;
}
GLint rglTexCoord3Copy(rglTex3_t *dest, rglTex3_t src)
{
	 dest->s = src.s; dest->t = src.t; dest->r = src.r;
	return 0;
}
GLint rglColor3Copy(rglCol3_t *dest, rglCol3_t src)
{
	dest->r = src.r; dest->g = src.g; dest->b = src.b;
	return 0;
}

GLint rglVector3Scale(rglVec3_t *v, GLfloat scale )
{
	 v->x *= scale; v->y *= scale; v->z *= scale;
	 return 0;
}
GLint rglTexCoord3Scale(rglTex3_t *v, GLfloat scale )
{
	v->s *= scale; v->t *= scale; v->r *= scale;
	return 0;
}

GLint rglColor3Scale(rglCol3_t *v, GLfloat scale )
{
	v->r *= scale; v->g *= scale; v->b *= scale;
	return 0;
}


GLint rglVector3Add(rglVec3_t *v1, rglVec3_t v2)
{
	v1->x+=v2.x; v1->y+=v2.y; v1->z+=v2.z;
	return 0;
}
GLint rglTexCoord3Add(rglTex3_t *v1, rglTex3_t v2)
{
	v1->s+=v2.s; v1->t+=v2.t; v1->r+=v2.r;
	return 0;
}
GLint rglColor3Add(rglCol3_t *v1, rglCol3_t v2)
{
	v1->r+=v2.r; v1->g+=v2.g; v1->b+=v2.b;
	return 0;
}

GLint rglVector3Sub(rglVec3_t *v1, rglVec3_t v2)
{
	v1->x-=v2.x; v1->y-=v2.y; v1->z-=v2.z;
	return 0;
}
GLint rglTexCoord3Sub(rglTex3_t *v1, rglTex3_t v2)
{
	v1->s-=v2.s; v1->t-=v2.t; v1->r-=v2.r;
	return 0;
}
GLint rglColor3Sub(rglCol3_t *v1, rglCol3_t v2)
{
	v1->r=fabs(v1->r-v2.r); v1->g=fabs(v1->g-v2.g); v1->b=fabs(v1->b-v2.b);
	
	return 0;
}

GLfloat rglVector3Dot(rglVec3_t v1, rglVec3_t v2)
{
  return  v1.x*v2.x + v1.y*v2.y + v1.z*v2.z;   
}

GLfloat rglTexCoord3Dot(rglTex3_t v1, rglTex3_t v2)
{
  return  v1.s*v2.s + v1.t*v2.t + v1.r*v2.r;   
}

float rglColor3Dot(rglCol3_t v1, rglCol3_t v2)
{
  return  v1.r*v2.r + v1.g*v2.g + v1.b*v2.b;   
}

//косинус угла между векторами
GLfloat rglVector3Cos(rglVec3_t v1, rglVec3_t v2)
{
    return rglVector3Dot(v1,v2)/(rglVector3Length(v1)*rglVector3Length(v2));	
}

//угл между векторами
//D - градусы
//R - радианы
GLfloat rglVector3AngleD(rglVec3_t v1, rglVec3_t v2)
{
    return acos(rglVector3Cos(v1,v2))*RAD2DEG;	
}

GLfloat rglVector3AngleR(rglVec3_t v1, rglVec3_t v2)
{
    return acos(rglVector3Cos(v1,v2));	
}


GLint rglMatrix4MulVector3(const rglMat4_t m, rglVec3_t *v)
{   
	   
    v->x =  v->x * m[0] + v->y * m[4] + v->z * m[8] + m[12];
    v->y =  v->x * m[1] + v->y * m[5] + v->z * m[9] + m[13];
    v->z =  v->x * m[2] + v->y * m[6] + v->z * m[10] + m[14];
    return 0;
}

GLint rglMatrix3MulVector3(const rglMat3_t m, rglVec3_t *v)
{   
	    
    v->x =  v->x * m[0] + v->y * m[3] + v->z * m[6] ;
    v->y =  v->x * m[1] + v->y * m[4] + v->z * m[7];
    v->z =  v->x * m[2] + v->y * m[5] + v->z * m[8] ;
    return 0;
}






GLint rglVector3Cross(rglVec3_t *res, rglVec3_t v1, rglVec3_t v2)
{
	res->x=v1.y * v2.z - v1.z * v2.y;
	res->y=v1.z * v2.x - v1.x * v2.z;
	res->z=v1.x * v2.y - v1.y * v2.x;
	
	return 0;
}

GLfloat rglVector3Length(rglVec3_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

GLfloat rglTexCoord3Length(rglTex3_t v)
{
    return sqrt(v.s * v.s + v.t * v.t + v.r * v.r);
}

GLfloat rglColor3Length(rglCol3_t v)
{
    return sqrt(v.r * v.r + v.g * v.g + v.b * v.b);
}


GLint rglVector3Normalize(rglVec3_t *v)
{
   GLfloat length,ilength;
     
	length=rglVector3Length(*v);
    if(length == 0) {
        rglVector3Clear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVector3Scale(v,ilength);
    return 0;
	}
}

GLint rglTexCoord3Normalize(rglTex3_t *v)
{
   GLfloat length,ilength;
     
	length=rglTexCoord3Length(*v);
    if(length == 0) {
        rglTexCoord3Clear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoord3Scale(v,ilength);
    return 0;
	}
}

GLint rglColor3Normalize(rglCol3_t *v)
{
   GLfloat length,ilength;
     
	length=rglColor3Length(*v);
    if(length == 0) {
        rglColor3Clear(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglColor3Scale(v,ilength);
    return 0;
	}
}

GLint rglVec4ToVec3(rglVec3_t *v3, rglVec4_t v4)
{
	 v3->x=v4.x;v3->y=v4.y;v3->z=v4.z;
	return 0;
}
	
GLint rglCol4ToCol3(rglCol3_t *c3, rglCol4_t c4)
{
	 c3->r=c4.r;c3->g=c4.g;c3->b=c4.b;
	return 0;
}

GLint rglVec3ToCol3(rglCol3_t *c, rglVec3_t v)
{
	 c->r=v.x;c->g=v.y;c->b=v.z;
	return 0;
}

GLint rglVec3ToTex3(rglTex3_t *t, rglVec3_t v)
{
	 t->s=v.x;t->t=v.y;t->r=v.z;
	return 0;
}

GLint rglCol3ToVec3(rglVec3_t *v, rglCol3_t c)
{
	 v->x=c.r;v->y=c.g;v->z=c.b;
	return 0;
}

GLint rglTex3ToVec3(rglVec3_t *v, rglTex3_t t)
{
	  v->x=t.s;v->y=t.t;v->z=t.r;
	return 0;
}

//сравнение векторов
GLint rglVector3Cmp(rglVec3_t v1, rglVec3_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS))
    	return 1;
    else
		return 0;	
}


GLint rglVector3Print(rglVec3_t v)
{   
	printf("v.x = %.2f , v.y = %.2f  v.z = %.2f\n", v.x, v.y, v.z);
    return 0;
}

GLint rglTexCoord3Print(rglTex3_t v)
{   
	printf("v.s = %.2f , v.t = %.2f  v.r = %.2f\n", v.s, v.t, v.r);
    return 0;
}

GLint rglColor3Print(rglCol3_t v)
{   
	printf("v.r = %.2f , v.g = %.2f  v.b = %.2f\n", v.r, v.g, v.b);
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
