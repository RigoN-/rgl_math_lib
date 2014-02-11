#include "rglMat4.h"

rglMat4 m_identity4={1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0};

//--------------------------------MATRIX4-----------------------------------------------------------------------------------------------------
GLint rglMatrix4Set(rglMat4 dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15)
{	
	dest[0]=m0; dest[4]=m4;	dest[8]=m8;		dest[12]=m12;
	dest[1]=m1; dest[5]=m5;	dest[9]=m9;		dest[13]=m13;
	dest[2]=m2; dest[6]=m6;	dest[10]=m10;	dest[14]=m14;
	dest[3]=m3; dest[7]=m7;	dest[11]=m11;	dest[15]=m15;
	return 1;
}

GLint rglMatrix4Identity(rglMat4 dest)
{		
	memcpy(dest, m_identity4,sizeof(dest)*16); 	
	return 1;
}

GLint rglMatrix4MulInt(rglMat4 src, int d)
{
	rglMat4 mt;
	int i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*d;
	rglMatrix4Copy(src,mt);
    return 1;
}

GLint rglMatrix4MulFloat(rglMat4 src, GLfloat f)
{
	
	rglMat4 mt;
	int i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*f;
	rglMatrix4Copy(src,mt);
	return 1;
}

GLint rglMatrix4MulVector2(const rglMat4 m, rglVec2 *v2)
{
	v2->x = v2->x * m[0] + v2->y * m[4] + m[8] + m[12];
    v2->y = v2.x * m[1] + v3.y * m[5] + m[9] + m[13]; 
	return 1;
}
GLint rglMatrix4MulVector3(const rglMat4 m, rglVec3 *v3)
{
	return 1;
}
GLint rglMatrix4MulVector4(const rglMat4 m, rglVec4 *v4)
{
	return 1;
}




GLint rglMatrix4Transpose(rglMat4 dest, rglMat4 m2) 
{
	
   dest[0] = m2[0]; dest[4] = m2[1]; dest[8] = m2[2]; dest[12] = m2[3];
   dest[1] = m2[4]; dest[5] = m2[5]; dest[9] = m2[6]; dest[13] = m2[7];
   dest[2] = m2[8]; dest[6] = m2[9]; dest[10] = m2[10]; dest[14] = m2[11];
   dest[3] = m2[12]; dest[7] = m2[13]; dest[11] = m2[14]; dest[15] = m2[15];
   return 1;
}

GLint rglMatrix4Copy(rglMat4 dest, rglMat4 src) 
{
	memcpy(dest, src,sizeof(dest)*16);										
   return 1;
}

GLint rglMatrix4Multiply(rglMat4 m1, rglMat4 m2)
{
	rglMat4 dest;
	GLint n;
    dest[0] = m1[0] * m2[0] + m1[4] * m2[1] + m1[8] * m2[2] + m1[12] * m2[3];
    dest[1] = m1[1] * m2[0] + m1[5] * m2[1] + m1[9] * m2[2] + m1[13] * m2[3];
    dest[2] = m1[2] * m2[0] + m1[6] * m2[1] + m1[10] * m2[2] + m1[14] * m2[3];
    dest[3] = m1[3] * m2[0] + m1[7] * m2[1] + m1[11] * m2[2] + m1[15] * m2[3];
    dest[4] = m1[0] * m2[4] + m1[4] * m2[5] + m1[8] * m2[6] + m1[12] * m2[7];    
    dest[5] = m1[1] * m2[4] + m1[5] * m2[5] + m1[9] * m2[6] + m1[13] * m2[7];
    dest[6] = m1[2] * m2[4] + m1[6] * m2[5] + m1[10] * m2[6] + m1[14] * m2[7];
    dest[7] = m1[3] * m2[4] + m1[7] * m2[5] + m1[11] * m2[6] + m1[15] * m2[7];
    dest[8] = m1[0] * m2[8] + m1[4] * m2[9] + m1[8] * m2[10] + m1[12] * m2[11];
    dest[9] = m1[1] * m2[8] + m1[5] * m2[9] + m1[9] * m2[10] + m1[13] * m2[11];
    dest[10] = m1[2] * m2[8] + m1[6] * m2[9] + m1[10] * m2[10] + m1[14] * m2[11];
    dest[11] = m1[3] * m2[8] + m1[7] * m2[9] + m1[11] * m2[10] + m1[15] * m2[11];
    dest[12] = m1[0] * m2[12] + m1[4] * m2[13] + m1[8] * m2[14] + m1[12] * m2[15];
    dest[13] = m1[1] * m2[12] + m1[5] * m2[13] + m1[9] * m2[14] + m1[13] * m2[15];
    dest[14] = m1[2] * m2[12] + m1[6] * m2[13] + m1[10] * m2[14] + m1[14] * m2[15];
    dest[15] = m1[3] * m2[12] + m1[7] * m2[13] + m1[11] * m2[14] + m1[15] * m2[15];    
     for(n=0;n<16;n+=1)
      if(fabs(dest[n])<1e-6)
      	dest[n]=0.0;   
     rglMatrix4Copy(m1, dest) ;   
    return 1;	
}



GLint rglMatrix4Minor(rglMat3 dest,rglMat4 src, int n) 
{
	
	int k,r,c=0;
	int j=n%4;
	int i=n/4;
	for (k=0;k<4;k+=1)
	for (r=0;r<4;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[r*4+k];
		c+=1;
		}
	}    						
   return 1;
}

GLfloat rglMatrix4Minorf(rglMat4 src, int n) 
{  		
   rglMat3 dest;
   rglMatrix4Minor(dest,src,n);
   return rglMatrix3Det(dest);
}

GLfloat rglMatrix4Det(rglMat4 src)
{
	rglMat3 dest;
		  rglMatrix4Minor(dest,src,0);
  GLfloat det=src[0]*rglMatrix3Det(dest);
		  rglMatrix4Minor(dest,src,4);
  		  det-= src[4]*rglMatrix3Det(dest);
  		  rglMatrix4Minor(dest,src,8);	
  		  det+= src[8]*rglMatrix3Det(dest);
  		  rglMatrix4Minor(dest,src,12);
  		  det-= src[12]*rglMatrix3Det(dest);				
  return   det;
}

GLint rglMatrix4Adjoin(rglMat4 dest, rglMat4 src) 
{
	
	int i,j,n;	
	for (n=0;n<16;n+=1)
	{
		j=n/4; i=n%4;
		if (i%2!=i%2) 		
			dest[n]=rglMatrix4Minorf(src,n);			
		else
			dest[n]=-rglMatrix4Minorf(src,n);
	}    						
   return 1;
}

GLint rglMatrix4Inverse(rglMat4 dest,rglMat4 src)
{
 
  GLfloat det= rglMatrix4Det(src);
  if (det==0) return 0;
  rglMatrix4Adjoin(dest,src);
  rglMatrix4MulFloat(dest, 1/det);
  return 1;
}

/*
rglMat4 rglMatrix4Inverse(rglMat4 src)
 {
	 rglMat4 m2;
    float   det;
    det = src[0] * src[5] * src[10];
    det += src[4] * src[9] * src[2];
    det += src[8] * src[1] * src[6];
    det -= src[8] * src[5] * src[2];
    det -= src[4] * src[1] * src[10];
    det -= src[0] * src[9] * src[6];
    if(det * det < 1e-25) return 0;
    det = 1.0 / det;    
    m2[0] =    (src[5] * src[10] - src[9] * src[6]) * det;
    m2[1] =  - (src[1] * src[10] - src[9] * src[2]) * det;
    m2[2] =    (src[1] * src[6] -  src[5] * src[2]) * det;
    m2[3] = 0.0;
    m2[4] =  - (src[4] * src[10] - src[8] * src[6]) * det;
    m2[5] =    (src[0] * src[10] - src[8] * src[2]) * det;
    m2[6] =  - (src[0] * src[6] -  src[4] * src[2]) * det;
    m2[7] = 0.0;
    m2[8] =    (src[4] * src[9] -  src[8] * src[5]) * det;
    m2[9] =  - (src[0] * src[9] -  src[8] * src[1]) * det;
    m2[10] =   (src[0] * src[5] -  src[4] * src[1]) * det;
    m2[11] = 0.0;
    m2[12] = - (src[12] * m2[0] + src[13] * m2[4] + src[14] * m2[8]);
    m2[13] = - (src[12] * m2[1] + src[13] * m2[5] + src[14] * m2[9]);
    m2[14] = - (src[12] * m2[2] + src[13] * m2[6] + src[14] * m2[10]);
    m2[15] = 1.0;
    return m2;
}
*/
GLint rglMatrix4Print(rglMat4 m)
{
	printf("m[0] = %5.2f m[4] = %5.2f m[8] = %5.2f m[12] = %5.2f\n", m[0],m[4],m[8],m[12]);
	printf("m[1] = %5.2f m[5] = %5.2f m[9] = %5.2f m[13] = %5.2f\n", m[1],m[5],m[9],m[13]);
	printf("m[2] = %5.2f m[6] = %5.2f m[10] = %5.2f m[14] = %5.2f\n", m[2],m[6],m[10],m[14]);
	printf("m[3] = %5.2f m[7] = %5.2f m[11] = %5.2f m[15] = %5.2f\n", m[3],m[7],m[11],m[15]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}
