#include "../include/rglMath/rglMatrix4.h"
#include "../include/rglMath/rglMatrix3.h"
#include "../include/rglMath/rglMatrix2.h"
#include "../include/rglMath/rglVector4.h"
#include "../include/rglMath/rglVector3.h"

rglMat4d_t md_identity4={1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0};
rglMat4f_t mf_identity4={1.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,0.0f,1.0f};
rglMat4d_t md_zero4={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
rglMat4f_t mf_zero4={0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f};
//--------------------------------MATRIX4-----------------------------------------------------------------------------------------------------
//init value matrix
GLint rglMatrix4dInitd(rglMat4d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8,GLdouble m9,GLdouble m10,GLdouble m11,GLdouble m12,GLdouble m13,GLdouble m14,GLdouble m15)
{	
	dest[0]=m0; dest[4]=m4;	dest[8]=m8;		dest[12]=m12;
	dest[1]=m1; dest[5]=m5;	dest[9]=m9;		dest[13]=m13;
	dest[2]=m2; dest[6]=m6;	dest[10]=m10;	dest[14]=m14;
	dest[3]=m3; dest[7]=m7;	dest[11]=m11;	dest[15]=m15;
	return 1;
}

GLint rglMatrix4fInitf(rglMat4f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15)
{	
	dest[0]=m0; dest[4]=m4;	dest[8]=m8;		dest[12]=m12;
	dest[1]=m1; dest[5]=m5;	dest[9]=m9;		dest[13]=m13;
	dest[2]=m2; dest[6]=m6;	dest[10]=m10;	dest[14]=m14;
	dest[3]=m3; dest[7]=m7;	dest[11]=m11;	dest[15]=m15;
	return 1;
}

//copy matrix from src to dest
GLint rglMatrix4dCopy(rglMat4d_t dest, rglMat4d_t src) 
{
	memcpy(dest, src,sizeof(*dest)*16);										
   return 1;
}

GLint rglMatrix4fCopy(rglMat4f_t dest, rglMat4f_t src) 
{
	memcpy(dest, src,sizeof(*dest)*16);										
   return 1;
}

//identity matrix
GLint rglMatrix4dIdentity(rglMat4d_t dest)
{		
	memcpy(dest, md_identity4,sizeof(*dest)*16);		
	return 1;
}

GLint rglMatrix4fIdentity(rglMat4f_t dest)
{		
	memcpy(dest, mf_identity4,sizeof(*dest)*16);		
	return 1;
}

//init zero value matrix
GLint rglMatrix4dInitZero(rglMat4d_t dest)
{		
	memcpy(dest, md_zero4,sizeof(*dest)*16); 	
	return 1;
}

GLint rglMatrix4fInitZero(rglMat4f_t dest)
{		
	memcpy(dest, mf_zero4,sizeof(*dest)*16); 	
	return 1;
}


GLint rglMatrix4dto3d(rglMat3d_t dest, rglMat4d_t src)
{	
 	dest[0] =  src[0];
    dest[1] =  src[1];
    dest[2] =  src[2];
    dest[3] =  src[4];
    dest[4] =  src[5];
    dest[5] =  src[6];
    dest[6] =  src[8];
    dest[7] =  src[9];
    dest[8] =  src[10];   
  return 1;
}

GLint rglMatrix4fto3f(rglMat3f_t dest, rglMat4f_t src)
{	
 	dest[0] =  src[0];
    dest[1] =  src[1];
    dest[2] =  src[2];
    dest[3] =  src[4];
    dest[4] =  src[5];
    dest[5] =  src[6];
    dest[6] =  src[8];
    dest[7] =  src[9];
    dest[8] =  src[10];   
  return 1;
}


//multiply matrix on integer value
GLint rglMatrix4dMulInt(rglMat4d_t src, GLint d)
{
	rglMat4d_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*d;
	rglMatrix4dCopy(src,mt);
    return 1;
}

GLint rglMatrix4fMulInt(rglMat4f_t src, GLint d)
{
	rglMat4f_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*d;
	rglMatrix4fCopy(src,mt);
    return 1;
}

//multiply matrix on float value
GLint rglMatrix4dMulFloat(rglMat4d_t src, GLdouble f)
{
	
	rglMat4d_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*f;
	rglMatrix4dCopy(src,mt);
	return 1;
}

GLint rglMatrix4fMulFloat(rglMat4f_t src, GLfloat f)
{
	
	rglMat4f_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*f;
	rglMatrix4fCopy(src,mt);
	return 1;
}

//transponse matrix from src to dest
GLint rglMatrix4dTranspose(rglMat4d_t src) 
{
   rglMat4d_t mt;
   mt[0] = src[0]; mt[4] = src[1]; mt[8] = src[2]; mt[12] = src[3];
   mt[1] = src[4]; mt[5] = src[5]; mt[9] = src[6]; mt[13] = src[7];
   mt[2] = src[8]; mt[6] = src[9]; mt[10] = src[10]; mt[14] = src[11];
   mt[3] = src[12]; mt[7] = src[13]; mt[11] = src[14]; mt[15] = src[15];
   rglMatrix4dCopy(src,mt);
   return 1;
}

GLint rglMatrix4fTranspose(rglMat4f_t src) 
{
	rglMat4f_t mt;
   mt[0] = src[0]; mt[4] = src[1]; mt[8] = src[2]; mt[12] = src[3];
   mt[1] = src[4]; mt[5] = src[5]; mt[9] = src[6]; mt[13] = src[7];
   mt[2] = src[8]; mt[6] = src[9]; mt[10] = src[10]; mt[14] = src[11];
   mt[3] = src[12]; mt[7] = src[13]; mt[11] = src[14]; mt[15] = src[15];
   rglMatrix4fCopy(src,mt);
   return 1;
}

//multiply matrix m1 on m2
GLint rglMatrix4dMultiply(rglMat4d_t m1, rglMat4d_t m2)
{
	rglMat4d_t mt;
	GLint n;
    mt[0] = m1[0] * m2[0] + m1[4] * m2[1] + m1[8] * m2[2] + m1[12] * m2[3];
    mt[1] = m1[1] * m2[0] + m1[5] * m2[1] + m1[9] * m2[2] + m1[13] * m2[3];
    mt[2] = m1[2] * m2[0] + m1[6] * m2[1] + m1[10] * m2[2] + m1[14] * m2[3];
    mt[3] = m1[3] * m2[0] + m1[7] * m2[1] + m1[11] * m2[2] + m1[15] * m2[3];
    mt[4] = m1[0] * m2[4] + m1[4] * m2[5] + m1[8] * m2[6] + m1[12] * m2[7];    
    mt[5] = m1[1] * m2[4] + m1[5] * m2[5] + m1[9] * m2[6] + m1[13] * m2[7];
    mt[6] = m1[2] * m2[4] + m1[6] * m2[5] + m1[10] * m2[6] + m1[14] * m2[7];
    mt[7] = m1[3] * m2[4] + m1[7] * m2[5] + m1[11] * m2[6] + m1[15] * m2[7];
    mt[8] = m1[0] * m2[8] + m1[4] * m2[9] + m1[8] * m2[10] + m1[12] * m2[11];
    mt[9] = m1[1] * m2[8] + m1[5] * m2[9] + m1[9] * m2[10] + m1[13] * m2[11];
    mt[10] = m1[2] * m2[8] + m1[6] * m2[9] + m1[10] * m2[10] + m1[14] * m2[11];
    mt[11] = m1[3] * m2[8] + m1[7] * m2[9] + m1[11] * m2[10] + m1[15] * m2[11];
    mt[12] = m1[0] * m2[12] + m1[4] * m2[13] + m1[8] * m2[14] + m1[12] * m2[15];
    mt[13] = m1[1] * m2[12] + m1[5] * m2[13] + m1[9] * m2[14] + m1[13] * m2[15];
    mt[14] = m1[2] * m2[12] + m1[6] * m2[13] + m1[10] * m2[14] + m1[14] * m2[15];
    mt[15] = m1[3] * m2[12] + m1[7] * m2[13] + m1[11] * m2[14] + m1[15] * m2[15];    
     for(n=0;n<16;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;   
     rglMatrix4dCopy(m1, mt) ;   
    return 1;	
}

GLint rglMatrix4fMultiply(rglMat4f_t m1, rglMat4f_t m2)
{
	rglMat4f_t mt;
	GLint n;
    mt[0] = m1[0] * m2[0] + m1[4] * m2[1] + m1[8] * m2[2] + m1[12] * m2[3];
    mt[1] = m1[1] * m2[0] + m1[5] * m2[1] + m1[9] * m2[2] + m1[13] * m2[3];
    mt[2] = m1[2] * m2[0] + m1[6] * m2[1] + m1[10] * m2[2] + m1[14] * m2[3];
    mt[3] = m1[3] * m2[0] + m1[7] * m2[1] + m1[11] * m2[2] + m1[15] * m2[3];
    mt[4] = m1[0] * m2[4] + m1[4] * m2[5] + m1[8] * m2[6] + m1[12] * m2[7];    
    mt[5] = m1[1] * m2[4] + m1[5] * m2[5] + m1[9] * m2[6] + m1[13] * m2[7];
    mt[6] = m1[2] * m2[4] + m1[6] * m2[5] + m1[10] * m2[6] + m1[14] * m2[7];
    mt[7] = m1[3] * m2[4] + m1[7] * m2[5] + m1[11] * m2[6] + m1[15] * m2[7];
    mt[8] = m1[0] * m2[8] + m1[4] * m2[9] + m1[8] * m2[10] + m1[12] * m2[11];
    mt[9] = m1[1] * m2[8] + m1[5] * m2[9] + m1[9] * m2[10] + m1[13] * m2[11];
    mt[10] = m1[2] * m2[8] + m1[6] * m2[9] + m1[10] * m2[10] + m1[14] * m2[11];
    mt[11] = m1[3] * m2[8] + m1[7] * m2[9] + m1[11] * m2[10] + m1[15] * m2[11];
    mt[12] = m1[0] * m2[12] + m1[4] * m2[13] + m1[8] * m2[14] + m1[12] * m2[15];
    mt[13] = m1[1] * m2[12] + m1[5] * m2[13] + m1[9] * m2[14] + m1[13] * m2[15];
    mt[14] = m1[2] * m2[12] + m1[6] * m2[13] + m1[10] * m2[14] + m1[14] * m2[15];
    mt[15] = m1[3] * m2[12] + m1[7] * m2[13] + m1[11] * m2[14] + m1[15] * m2[15];    
     for(n=0;n<16;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;   
     rglMatrix4fCopy(m1, mt) ;   
    return 1;	
}

//minor matrix 3x3 from matrix 4x4
GLint rglMatrix4dMinor(rglMat3d_t dest,rglMat4d_t src, GLint n) 
{
	
	GLint k,r,c=0;
	GLint j=n%4;
	GLint i=n/4;
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

GLint rglMatrix4fMinor(rglMat3f_t dest,rglMat4f_t src, GLint n) 
{
	
	GLint k,r,c=0;
	GLint j=n%4;
	GLint i=n/4;
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

//determinant minor matrix
GLdouble rglMatrix4dMinord(rglMat4d_t src, GLint n) 
{  		
   rglMat3d_t mt;
   rglMatrix4dMinor(mt,src,n);
   return rglMatrix3dDet(mt);
}

GLfloat rglMatrix4fMinorf(rglMat4f_t src, GLint n) 
{  		
   rglMat3f_t mt;
   rglMatrix4fMinor(mt,src,n);
   return rglMatrix3fDet(mt);
}

//determinant minor matrix 4x4
GLdouble rglMatrix4dDet(rglMat4d_t src)
{
	rglMat3d_t mt;
		  rglMatrix4dMinor(mt,src,0);
  GLdouble det=src[0]*rglMatrix3dDet(mt);
		  rglMatrix4dMinor(mt,src,4);
  		  det-= src[4]*rglMatrix3dDet(mt);
  		  rglMatrix4dMinor(mt,src,8);	
  		  det+= src[8]*rglMatrix3dDet(mt);
  		  rglMatrix4dMinor(mt,src,12);
  		  det-= src[12]*rglMatrix3dDet(mt);				
  return   det;
}

GLfloat rglMatrix4fDet(rglMat4f_t src)
{
	rglMat3f_t mt;
		  rglMatrix4fMinor(mt,src,0);
  GLfloat det=src[0]*rglMatrix3fDet(mt);
		  rglMatrix4fMinor(mt,src,4);
  		  det-= src[4]*rglMatrix3fDet(mt);
  		  rglMatrix4fMinor(mt,src,8);	
  		  det+= src[8]*rglMatrix3fDet(mt);
  		  rglMatrix4fMinor(mt,src,12);
  		  det-= src[12]*rglMatrix3fDet(mt);				
  return   det;
}

//adjoin matrix (союзная матрица)
GLint rglMatrix4dAdjoin(rglMat4d_t dest, rglMat4d_t src) 
{	
	GLint i,j,n;	
	for (n=0;n<16;n+=1)
	{
		j=n/4; i=n%4;
		if (j%2!=i%2) 		
			dest[n]=rglMatrix4dMinord(src,n);			
		else
			dest[n]=-rglMatrix4dMinord(src,n);
	}    						
   return 1;
}

GLint rglMatrix4fAdjoin(rglMat4f_t dest, rglMat4f_t src) 
{	
	GLint i,j,n;	
	for (n=0;n<16;n+=1)
	{
		j=n/4; i=n%4;
		if (j%2!=i%2) 		
			dest[n]=rglMatrix4fMinorf(src,n);			
		else
			dest[n]=-rglMatrix4fMinorf(src,n);
	}    						
   return 1;
}


GLint rglMatrix4dInverse(rglMat4d_t src)
{
	rglMat4d_t mt;
	GLdouble det= rglMatrix4dDet(src);
	if (det==0) return 0;
	rglMatrix4dAdjoin(mt,src);
	rglMatrix4dTranspose(mt); 
	rglMatrix4dMulFloat(mt, 1.0/det);
	rglMatrix4dCopy(src, mt) ;
	return 1;
}

GLint rglMatrix4fInverse(rglMat4f_t src)
{
 
	rglMat4f_t mt;
	GLfloat det= rglMatrix4fDet(src);
	if (det==0) return 0;
	rglMatrix4fAdjoin(mt,src);
	rglMatrix4fTranspose(mt); 
	rglMatrix4fMulFloat(mt, 1.0f/det);
	rglMatrix4fCopy(src, mt) ;
	return 1;
}

/*
rglMat4_t rglMatrix4Inverse(rglMat4_t src)
 {
	 rglMat4_t m2;
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
//multiply matrix 4x4 on vector 4
GLint rglMatrix4dMulVector4d(const rglMat4d_t m, rglVec4d_t *v)
{   
	 
    v->x = v->x * m[0] + v->y * m[4] + v->z * m[8] + v->w *m[12];
    v->y = v->x * m[1] + v->y * m[5] + v->z * m[9] + v->w *m[13];
    v->z = v->x * m[2] + v->y * m[6] + v->z * m[10] + v->w *m[14];
	v->w = v->x * m[3] + v->y * m[7] + v->z * m[11] + v->w *m[15];
	
    return 0;
}

GLint rglMatrix4fMulVector4f(const rglMat4f_t m, rglVec4f_t *v)
{   
	   
    v->x = v->x * m[0] + v->y * m[4] + v->z * m[8] + v->w *m[12];
    v->y = v->x * m[1] + v->y * m[5] + v->z * m[9] + v->w *m[13];
    v->z = v->x * m[2] + v->y * m[6] + v->z * m[10] + v->w *m[14];
	v->w = v->x * m[3] + v->y * m[7] + v->z * m[11] + v->w *m[15];
	
    return 0;
}

GLint rglMatrix4dMulVector3d(const rglMat4d_t m, rglVec3d_t *v)
{  	   
    v->x =  v->x * m[0] + v->y * m[4] + v->z * m[8] + m[12];
    v->y =  v->x * m[1] + v->y * m[5] + v->z * m[9] + m[13];
    v->z =  v->x * m[2] + v->y * m[6] + v->z * m[10] + m[14];
    return 0;
}

GLint rglMatrix4fMulVector3f(const rglMat4f_t m, rglVec3f_t *v)
{  	   
    v->x =  v->x * m[0] + v->y * m[4] + v->z * m[8] + m[12];
    v->y =  v->x * m[1] + v->y * m[5] + v->z * m[9] + m[13];
    v->z =  v->x * m[2] + v->y * m[6] + v->z * m[10] + m[14];
    return 0;
}	




GLint rglMatrix4dPrint(rglMat4d_t m,const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %4.8lf m[4] = %4.8lf m[8] = %4.8lf m[12] = %4.8lf\n", m[0],m[4],m[8],m[12]);
	printf("m[1] = %4.8lf m[5] = %4.8lf m[9] = %4.8lf m[13] = %4.8lf\n", m[1],m[5],m[9],m[13]);
	printf("m[2] = %4.8lf m[6] = %4.8lf m[10] = %4.8lf m[14] = %4.8lf\n", m[2],m[6],m[10],m[14]);
	printf("m[3] = %4.8lf m[7] = %4.8lf m[11] = %4.8lf m[15] = %4.8lf\n", m[3],m[7],m[11],m[15]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}

GLint rglMatrix4fPrint(rglMat4f_t  m,const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %4.8f m[4] = %4.8f m[8] = %4.8f m[12] = %4.8f\n", m[0],m[4],m[8],m[12]);
	printf("m[1] = %4.8f m[5] = %4.8f m[9] = %4.8f m[13] = %4.8f\n", m[1],m[5],m[9],m[13]);
	printf("m[2] = %4.8f m[6] = %4.8f m[10] = %4.8f m[14] = %4.8f\n", m[2],m[6],m[10],m[14]);
	printf("m[3] = %4.8f m[7] = %4.8f m[11] = %4.8f m[15] = %4.8f\n", m[3],m[7],m[11],m[15]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}
