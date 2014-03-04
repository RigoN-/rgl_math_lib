#include "../include/rglVector3.h" 
#include "../include/rglVector4.h" 


//vector operation vec4------------------------------------------------------------------------------------------------------------------
 rglVec4_t rglVector4Set(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	 rglVec4_t v={x,y,z,w};
	return v;
}

rglCol4_t rglColor4Set(GLfloat r, GLfloat g, GLfloat b, GLfloat a)
{
	 rglCol4_t v={r,g,b,a};
	return v;
}

rglCol4_t rglColor3ToColor4(rglCol3_t v1)
{
	 rglCol4_t v={v1.r,v1.g,v1.b,1.0};
	return v;
}

rglCol3_t rglColor4ToColor3(rglCol4_t v1)
{
	 rglCol3_t v={v1.r,v1.g,v1.b};
	return v;
}

GLint rglVector4Clear(rglVec4_t v)
{
	v.x=v.y=v.z=v.w=0.0;
	return 1;
}

GLint rglVector4Copy( rglVec4_t dest, rglVec4_t src)
{
  dest.x = src.x; dest.y = src.y; dest.z = src.z; dest.w = src.w;
   return 1;
}

rglVec4_t rglVector4Scale(rglVec4_t v, GLfloat scale )
{
 	rglVec4_t v1={ v.x*scale, v.y*scale,  v.z*scale, v.w*scale};
    return v1;
}

rglVec4_t rglVector4Add( rglVec4_t v1, rglVec4_t v2)
{
	rglVec4_t v={v1.x+v2.x, v1.y+v2.y,  v1.z+v2.z, v1.w+v2.w};
   return v;
}

rglVec4_t rglVector4Sub( rglVec4_t v1, rglVec4_t v2)
{
  rglVec4_t v ={v1.x-v2.x, v1.y-v2.y, v1.z-v2.z, v1.w-v2.w};
   return v;
}

GLfloat rglVector4Dot( rglVec4_t v1, rglVec4_t v2)
{
  return  v1.x*v2.x+ v1.y*v2.y+ v1.z*v2.z+ v1.w*v2.w;   
}

GLfloat rglVector4Length(rglVec4_t v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z+v.w * v.w);
}

rglVec4_t rglVector4Normalize(rglVec4_t v1)
{
   GLfloat length,ilength;
    rglVec4_t v;  
	length=rglVector4Length(v1);
    if(length == 0) {
        rglVector4Clear(v);
        return v;
    }
	else
	{
    ilength = 1.0 / length;
    v=rglVector4Scale(v1,ilength);
    return v;
	}
}

GLint rglVector4Print(rglVec4_t v)
{   
	printf("v.x = %5.2f , v.y = %5.2f, v.z = %5.2f,  v.w = %5.2f\n", v.x, v.y,v.z,v.w);
    return 1;
}

GLint rglColor4Print(rglCol4_t c)
{   
	printf("c.r = %5.2f , c.g = %5.2f, c.b = %5.2f,  c.a = %5.2f\n", c.r, c.g,c.b,c.a);
    return 1;
}

rglVec4_t rglMatrix4MulVector4(const rglMat4_t m, rglVec4_t v3)
{   
	rglVec4_t v;    
    v.x = v3.x * m[0] + v3.y * m[4] + v3.z * m[8] + v3.w *m[12];
    v.y = v3.x * m[1] + v3.y * m[5] + v3.z * m[9] + v3.w *m[13];
    v.z = v3.x * m[2] + v3.y * m[6] + v3.z * m[10] + v3.w *m[14];
	v.w = v3.x * m[3] + v3.y * m[7] + v3.z * m[11] + v3.w *m[15];
    return v;
}
