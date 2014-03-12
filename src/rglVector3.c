#include "../include/rglMath/rglVector3.h" 

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

GLint rglTexCoordInit3d(rglTex3d_t *tc, GLdouble s, GLdouble t, GLdouble r)
{
	tc->s=s; tc->t=t; tc->r=r;
	return 0;
}
GLint rglTexCoordInit3f(rglTex3f_t *tc, GLfloat s, GLfloat t, GLfloat r)
{
	tc->s=s; tc->t=t; tc->r=r;
	return 0;
}


GLint rglColorInit3d(rglCol3d_t *c,GLdouble r, GLdouble g, GLdouble b)
{
	c->r=r;c->g=g;c->b=b; 
	return 0;
}

GLint rglColorInit3f(rglCol3f_t *c,GLfloat r, GLfloat g, GLfloat b)
{
	c->r=r;c->g=g;c->b=b;
	return 0;
}

GLint rglVectorClear3d(rglVec3d_t *v)
{
	v->x=v->y=v->z=0.0;
	return 0;
}
GLint rglVectorClear3f(rglVec3f_t *v)
{
	v->x=v->y=v->z=0.0;
	return 0;
}

GLint rglTexCoordClear3d(rglTex3d_t *tc)
{
	tc->s=tc->t=tc->r=0.0;
	return 0;
}
GLint rglTexCoordClear3f(rglTex3f_t *tc)
{
	tc->s=tc->t=tc->r=0.0;
	return 0;
}

GLint rglColorClear3d(rglCol3d_t *c)
{
	c->r=c->g=c->b=0.0;
	return 0;
}

GLint rglColorClear3f(rglCol3f_t *c)
{
	c->r=c->g=c->b=0.0;
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

GLint rglTexCoordCopy3d(rglTex3d_t *dest, rglTex3d_t src)
{
	 dest->s = src.s; dest->t = src.t; dest->r = src.r;
	return 0;
}

GLint rglTexCoordCopy3f(rglTex3f_t *dest, rglTex3f_t src)
{
	 dest->s = src.s; dest->t = src.t; dest->r = src.r;
	return 0;
}

GLint rglColorCopy3d(rglCol3d_t *dest, rglCol3d_t src)
{
	dest->r = src.r; dest->g = src.g; dest->b = src.b;
	return 0;
}

GLint rglColorCopy3f(rglCol3f_t *dest, rglCol3f_t src)
{
	dest->r = src.r; dest->g = src.g; dest->b = src.b;
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

GLint rglTexCoordScale3d(rglTex3d_t *tc, GLdouble scale )
{
	tc->s *= scale; tc->t *= scale; tc->r *= scale;
	return 0;
}

GLint rglTexCoordScale3f(rglTex3f_t *tc, GLfloat scale )
{
	tc->s *= scale; tc->t *= scale; tc->r *= scale;
	return 0;
}

GLint rglColorScale3d(rglCol3d_t *c, GLdouble scale )
{
	c->r *= scale; c->g *= scale; c->b *= scale;
	return 0;
}

GLint rglColorScale3f(rglCol3f_t *c, GLfloat scale )
{
	c->r *= scale; c->g *= scale; c->b *= scale;
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

GLint rglTexCoordAdd3d(rglTex3d_t *tc1, rglTex3d_t tc2)
{
	tc1->s+=tc2.s; tc1->t+=tc2.t; tc1->r+=tc2.r;
	return 0;
}

GLint rglTexCoordAdd3f(rglTex3f_t *tc1, rglTex3f_t tc2)
{
	tc1->s+=tc2.s; tc1->t+=tc2.t; tc1->r+=tc2.r;
	return 0;
}

GLint rglColorAdd3d(rglCol3d_t *c1, rglCol3d_t c2)
{
	c1->r+=c2.r; c1->g+=c2.g; c1->b+=c2.b;
	return 0;
}

GLint rglColorAdd3f(rglCol3f_t *c1, rglCol3f_t c2)
{
	c1->r+=c2.r; c1->g+=c2.g; c1->b+=c2.b;
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

GLint rglTexCoordSub3d(rglTex3d_t *tc1, rglTex3d_t tc2)
{
	tc1->s-=tc2.s; tc1->t-=tc2.t; tc1->r-=tc2.r;
	return 0;
}

GLint rglTexCoordSub3f(rglTex3f_t *tc1, rglTex3f_t tc2)
{
	tc1->s-=tc2.s; tc1->t-=tc2.t; tc1->r-=tc2.r;
	return 0;
}

GLint rglColorSub3d(rglCol3d_t *c1, rglCol3d_t c2)
{
	c1->r=fabs(c1->r-c2.r); c1->g=fabs(c1->g-c2.g); c1->b=fabs(c1->b-c2.b);	
	return 0;
}

GLint rglColorSub3f(rglCol3f_t *c1, rglCol3f_t c2)
{
	c1->r=fabs(c1->r-c2.r); c1->g=fabs(c1->g-c2.g); c1->b=fabs(c1->b-c2.b);	
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

GLdouble rglTexCoordDot3d(rglTex3d_t tc1, rglTex3d_t tc2)
{
  return  tc1.s*tc2.s + tc1.t*tc2.t + tc1.r*tc2.r;   
}

GLfloat rglTexCoordDot3f(rglTex3f_t tc1, rglTex3f_t tc2)
{
  return  tc1.s*tc2.s + tc1.t*tc2.t + tc1.r*tc2.r;   
}

GLdouble rglColorDot3d(rglCol3d_t c1, rglCol3d_t c2)
{
  return  c1.r*c2.r + c1.g*c2.g + c1.b*c2.b;   
}

GLfloat rglColorDot3f(rglCol3f_t c1, rglCol3f_t c2)
{
  return  c1.r*c2.r + c1.g*c2.g + c1.b*c2.b;   
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
    return acos(rglVectorCos3f(v1,v2))*RAD2DEG;	
}

GLdouble rglVectorAngleR3d(rglVec3d_t v1, rglVec3d_t v2)
{
    return acos(rglVectorCos3d(v1,v2));	
}

GLfloat rglVectorAngleR3f(rglVec3f_t v1, rglVec3f_t v2)
{
    return acos(rglVectorCos3f(v1,v2));	
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

GLdouble rglTexCoordLength3d(rglTex3d_t tc)
{
    return sqrt(tc.s * tc.s + tc.t * tc.t + tc.r * tc.r);
}

GLfloat rglTexCoordLength3f(rglTex3f_t tc)
{
    return sqrt(tc.s * tc.s + tc.t * tc.t + tc.r * tc.r);
}

GLdouble rglColorLength3d(rglCol3d_t c)
{
    return sqrt(c.r * c.r + c.g * c.g + c.b * c.b);
}

GLfloat rglColorLength3f(rglCol3f_t c)
{
    return sqrt(c.r * c.r + c.g * c.g + c.b * c.b);
}

GLint rglVectorNormalize3d(rglVec3d_t *v)
{
   GLdouble length,ilength;
     
	length=rglVectorLength3d(*v);
    if(length == 0) {
        rglVectorClear3d(v);
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
        rglVectorClear3f(v);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglVectorScale3f(v,ilength);
    return 0;
	}
}


GLint rglTexCoordNormalize3d(rglTex3d_t *tc)
{
   GLdouble length,ilength;
     
	length=rglTexCoordLength3d(*tc);
    if(length == 0) {
        rglTexCoordClear3d(tc);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoordScale3d(tc,ilength);
    return 0;
	}
}

GLint rglTexCoordNormalize3f(rglTex3f_t *tc)
{
   GLdouble length,ilength;
     
	length=rglTexCoordLength3f(*tc);
    if(length == 0) {
        rglTexCoordClear3f(tc);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglTexCoordScale3f(tc,ilength);
    return 0;
	}
}

GLint rglColordNormalize3d(rglCol3d_t *c)
{
   GLdouble length,ilength;
     
	length=rglColorLength3d(*c);
    if(length == 0) {
        rglColorClear3d(c);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglColorScale3d(c,ilength);
    return 0;
	}
}

GLint rglColorNormalize3f(rglCol3f_t *c)
{
   GLdouble length,ilength;
     
	length=rglColorLength3f(*c);
    if(length == 0) {
        rglColorClear3f(c);
        return 0;
    }
	else
	{
    ilength = 1.0 / length;
    rglColorScale3f(c,ilength);
    return 0;
	}
}

GLint rglVectorToColor3d(rglCol3d_t *c, rglVec3d_t v)
{
	 c->r=v.x;c->g=v.y;c->b=v.z;
	return 0;
}

GLint rglVectorToColor3f(rglCol3f_t *c, rglVec3f_t v)
{
	 c->r=v.x;c->g=v.y;c->b=v.z;
	return 0;
}

GLint rglVectorToTexCoord3d(rglTex3d_t *tc, rglVec3d_t v)
{
	 tc->s=v.x;tc->t=v.y;tc->r=v.z;
	return 0;
}

GLint rglVectorToTexCoord3f(rglTex3f_t *tc, rglVec3f_t v)
{
	 tc->s=v.x;tc->t=v.y;tc->r=v.z;
	return 0;
}

GLint rglColorToVector3d(rglVec3d_t *v, rglCol3d_t c)
{
	 v->x=c.r;v->y=c.g;v->z=c.b;
	return 0;
}

GLint rglColorToVector3f(rglVec3f_t *v, rglCol3f_t c)
{
	 v->x=c.r;v->y=c.g;v->z=c.b;
	return 0;
}

GLint rglTexCoordToVector3d(rglVec3d_t *v, rglTex3d_t tc)
{
	  v->x=tc.s;v->y=tc.t;v->z=tc.r;
	return 0;
}

GLint rglTexCoordToVector3f(rglVec3d_t *v, rglTex3d_t tc)
{
	  v->x=tc.s;v->y=tc.t;v->z=tc.r;
	return 0;
}

//сравнение векторов
GLint rglVectorCmp3d(rglVec3d_t v1, rglVec3d_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVectorCmp3f(rglVec3f_t v1, rglVec3f_t v2)
{
    if ((fabs(v1.x-v1.x)<EPS) && (fabs(v1.y-v1.y)<EPS) && (fabs(v1.z-v1.z)<EPS))
    	return 1;
    else
		return 0;	
}

GLint rglVectorPrint3d(rglVec3d_t v)
{   
	printf("v.x = %4.8lf , v.y = %4.8lf, v.z = %4.8lf\n", v.x, v.y,v.z);
    return 0;
}

GLint rglVectorPrint3f(rglVec3f_t v)
{   
	printf("v.x = %4.8f , v.y = %4.8f, v.z = %4.8f\n", v.x, v.y,v.z);
    return 0;
}

GLint rglTexCoordPrint3d(rglTex3d_t tc)
{   
	printf("tc.s = %4.8lf , tc.t = %4.8lf, tc.r = %4.8lf\n", tc.s, tc.t,tc.r);
    return 0;
}

GLint rglTexCoordPrint3f(rglTex3f_t tc)
{   
	printf("tc.s = %4.8f , tc.t = %4.8f, tc.r = %4.8f\n", tc.s, tc.t,tc.r);
    return 0;
}

GLint rglColorPrint3d(rglCol3d_t c)
{   
	printf("c.r = %4.8lf , c.g = %4.8lf, c.b = %4.8lf\n", c.r, c.g, c.b);
    return 0;
}

GLint rglColorPrint3f(rglCol3f_t c)
{   
	printf("c.r = %4.8f , c.g = %4.8f, c.b = %4.8f\n", c.r, c.g, c.b);
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
