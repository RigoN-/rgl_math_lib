#include <rglMatrix4.h>
#include <rglMatrix3.h>
#include <rglMatrix2.h>
#include <rglVector2.h>
#include <rglVector3.h>
#include <rglVector4.h>

rglMat4d_t md_identity4={1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0};
rglMat4f_t mf_identity4={1.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,0.0f,1.0f};
rglMat4d_t md_zero4={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
rglMat4f_t mf_zero4={0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f};
//--------------------------------MATRIX4-----------------------------------------------------------------------------------------------------
//init value matrix
GLint rglMatrixInit4d(rglMat4d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8,GLdouble m9,GLdouble m10,GLdouble m11,GLdouble m12,GLdouble m13,GLdouble m14,GLdouble m15)
{	
	dest[0]=m0; dest[4]=m4;	dest[8]=m8;		dest[12]=m12;
	dest[1]=m1; dest[5]=m5;	dest[9]=m9;		dest[13]=m13;
	dest[2]=m2; dest[6]=m6;	dest[10]=m10;	dest[14]=m14;
	dest[3]=m3; dest[7]=m7;	dest[11]=m11;	dest[15]=m15;
	return 0;
}

GLint rglMatrixInit4f(rglMat4f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8,GLfloat m9,GLfloat m10,GLfloat m11,GLfloat m12,GLfloat m13,GLfloat m14,GLfloat m15)
{	
	dest[0]=m0; dest[4]=m4;	dest[8]=m8;		dest[12]=m12;
	dest[1]=m1; dest[5]=m5;	dest[9]=m9;		dest[13]=m13;
	dest[2]=m2; dest[6]=m6;	dest[10]=m10;	dest[14]=m14;
	dest[3]=m3; dest[7]=m7;	dest[11]=m11;	dest[15]=m15;
	return 0;
}

//zero matrix
GLint rglMatrixInitZero4d(rglMat4d_t dest)
{		
	memcpy(dest, md_zero4,sizeof(*dest)*16);		
	return 0;
}

GLint rglMatrixInitZero4f(rglMat4f_t dest)
{		
	memcpy(dest, mf_zero4,sizeof(*dest)*16);		
	return 0;
}


//copy matrix from src to dest
GLint rglMatrixCopy4d(rglMat4d_t dest, rglMat4d_t src) 
{
	memcpy(dest, src,sizeof(*dest)*16);										
   return 0;
}

GLint rglMatrixCopy4f(rglMat4f_t dest, rglMat4f_t src) 
{
	memcpy(dest, src,sizeof(*dest)*16);										
   return 0;
}

//identity matrix
GLint rglMatrixIdentity4d(rglMat4d_t dest)
{		
	memcpy(dest, md_identity4,sizeof(*dest)*16);		
	return 0;
}

GLint rglMatrixIdentity4f(rglMat4f_t dest)
{		
	memcpy(dest, mf_identity4,sizeof(*dest)*16);		
	return 0;
}



GLint rglMatrix4ToMatrix3d(rglMat3d_t dest, rglMat4d_t src)
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
  return 0;
}

GLint rglMatrix4ToMatrix3f(rglMat3f_t dest, rglMat4f_t src)
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
  return 0;
}


//multiply matrix on integer value
GLint rglMatrixMultInt4d(rglMat4d_t src, GLint d)
{
	rglMat4d_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*d;
	rglMatrixCopy4d(src,mt);
    return 0;
}

GLint rglMatrixMultInt4f(rglMat4f_t src, GLint d)
{
	rglMat4f_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*d;
	rglMatrixCopy4f(src,mt);
    return 0;
}

//multiply matrix on float value
GLint rglMatrixMultFloat4d(rglMat4d_t src, GLdouble f)
{
	
	rglMat4d_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*f;
	rglMatrixCopy4d(src,mt);
	return 0;
}

GLint rglMatrixMultFloat4f(rglMat4f_t src, GLfloat f)
{
	
	rglMat4f_t mt;
	GLint i;
	for(i=0;i<16;i+=1)
		mt[i]=src[i]*f;
	rglMatrixCopy4f(src,mt);
	return 0;
}

//transponse matrix from src to dest
GLint rglMatrixTranspose4d(rglMat4d_t src) 
{
   rglMat4d_t mt;
   mt[0] = src[0]; mt[4] = src[1]; mt[8] = src[2]; mt[12] = src[3];
   mt[1] = src[4]; mt[5] = src[5]; mt[9] = src[6]; mt[13] = src[7];
   mt[2] = src[8]; mt[6] = src[9]; mt[10] = src[10]; mt[14] = src[11];
   mt[3] = src[12]; mt[7] = src[13]; mt[11] = src[14]; mt[15] = src[15];
   rglMatrixCopy4d(src,mt);
   return 0;
}

GLint rglMatrixTranspose4f(rglMat4f_t src) 
{
	rglMat4f_t mt;
   mt[0] = src[0]; mt[4] = src[1]; mt[8] = src[2]; mt[12] = src[3];
   mt[1] = src[4]; mt[5] = src[5]; mt[9] = src[6]; mt[13] = src[7];
   mt[2] = src[8]; mt[6] = src[9]; mt[10] = src[10]; mt[14] = src[11];
   mt[3] = src[12]; mt[7] = src[13]; mt[11] = src[14]; mt[15] = src[15];
   rglMatrixCopy4f(src,mt);
   return 0;
}

//multiply matrix m1 on m2
GLint rglMatrixMultiply4d(rglMat4d_t m1, rglMat4d_t m2)
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
      if(fabs(mt[n])<EPSd)
      	mt[n]=0.0;   
     rglMatrixCopy4d(m1, mt) ;   
    return 0;	
}

GLint rglMatrixMultiply4f(rglMat4f_t m1, rglMat4f_t m2)
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
      if(fabs(mt[n])<EPSf)
      	mt[n]=0.0;   
     rglMatrixCopy4f(m1, mt) ;   
    return 0;	
}

//minor matrix 3x3 from matrix 4x4 проверено 14.02.17 через расчет инвертированной матрицы
GLint rglMatrixMinor4d(rglMat3d_t dest,rglMat4d_t src, GLint n) 
{
	GLint k,r,c=0;
	GLint j=n%4;
	GLint i=n/4;
	for (k=0;k<4;k+=1)
	for (r=0;r<4;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[k*4+r];
		c+=1;
		}
	}    						
   return 0;
}

//minor matrix 3x3 from matrix 4x4 проверено 14.02.17 через расчет инвертированной матрицы
GLint rglMatrixMinor4f(rglMat3f_t dest,rglMat4f_t src, GLint n) 
{
	
		GLint k,r,c=0;
	GLint j=n%4;
	GLint i=n/4;
	for (k=0;k<4;k+=1)
	for (r=0;r<4;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[k*4+r];
		c+=1;
		}
	}    						
   return 0;
}

//determinant minor matrix проверено 14.02.17 через расчет инвертированной матрицы
GLdouble rglMatrixMinord4d(rglMat4d_t src, GLint n) 
{  		
   rglMat3d_t mt;
   rglMatrixMinor4d(mt,src,n);
   return rglMatrixDet3d(mt);
}

GLfloat rglMatrixMinorf4f(rglMat4f_t src, GLint n) 
{  		
   rglMat3f_t mt;
   rglMatrixMinor4f(mt,src,n);
   return rglMatrixDet3f(mt);
}

//determinant minor matrix 4x4 проверено 14.02.17 через расчет инвертированной матрицы
GLdouble rglMatrixDet4d(rglMat4d_t src)
{
  GLdouble det=src[0]* rglMatrixMinord4d(src,0);		  
  		   det-= src[4]*rglMatrixMinord4d(src,4);  		 	
  		   det+= src[8]* rglMatrixMinord4d(src,8);  		 
  		   det-= src[12]* rglMatrixMinord4d(src,12);			
  return   det;
}

GLfloat rglMatrixDet4f(rglMat4f_t src)
{
 GLdouble  det=src[0]* rglMatrixMinorf4f(src,0);		  
  		   det-= src[4]*rglMatrixMinorf4f(src,4);  		 	
  		   det+= src[8]* rglMatrixMinorf4f(src,8);  		 
  		   det-= src[12]* rglMatrixMinorf4f(src,12);				
  return   det;
}

//adjoin matrix (союзная матрица) проверено 14.02.17 через расчет инвертированной матрицы
GLint rglMatrixAdjoin4d(rglMat4d_t dest, rglMat4d_t src) 
{	
	GLint i,j,n;	
	for (n=0;n<16;n+=1)
	{
		j=n/4; i=n%4;
		if (j%2!=i%2) 		
			dest[n]=-rglMatrixMinord4d(src,n);			
		else
			dest[n]=rglMatrixMinord4d(src,n);
	 if(fabs(dest[n])<EPSd)
      	dest[n]=0.0;
	}    						
   return 0;
}

GLint rglMatrixAdjoin4f(rglMat4f_t dest, rglMat4f_t src) 
{	
	GLint i,j,n;	
	for (n=0;n<16;n+=1)
	{
		j=n/4; i=n%4;
		if (j%2!=i%2) 		
			dest[n]=-rglMatrixMinorf4f(src,n);			
		else
			dest[n]=rglMatrixMinorf4f(src,n);
	 if(fabs(dest[n])<EPSf)
      	dest[n]=0.0;
	}    						
   return 0;
}


GLint rglMatrixInverse4d(rglMat4d_t src)
{
	rglMat4d_t mt;
	GLdouble det= rglMatrixDet4d(src);
	if (det==0) return 1;
	rglMatrixAdjoin4d(mt,src);	
	rglMatrixTranspose4d(mt); 	
	rglMatrixMultFloat4d(mt, 1.0/det);	
	rglMatrixCopy4d(src, mt) ;
	return 0;
}

GLint rglMatrixInverse4f(rglMat4f_t src)
{ 
	rglMat4f_t mt;
	GLdouble det= rglMatrixDet4f(src);
	if (det==0) return 1;
	rglMatrixAdjoin4f(mt,src);	
	rglMatrixTranspose4f(mt); 	
	rglMatrixMultFloat4f(mt, 1.0/det);	
	rglMatrixCopy4f(src, mt) ;
	return 0;	
}


/*
//инвертирование матрицы из GLU
int gluInvertMatrix(rglMat4d_t m, rglMat4d_t invOut)
{
    rglMat4d_t inv;
	double det;
    int i;

    inv[0] = m[5]  * m[10] * m[15] - 
             m[5]  * m[11] * m[14] - 
             m[9]  * m[6]  * m[15] + 
             m[9]  * m[7]  * m[14] +
             m[13] * m[6]  * m[11] - 
             m[13] * m[7]  * m[10];

    inv[4] = -m[4]  * m[10] * m[15] + 
              m[4]  * m[11] * m[14] + 
              m[8]  * m[6]  * m[15] - 
              m[8]  * m[7]  * m[14] - 
              m[12] * m[6]  * m[11] + 
              m[12] * m[7]  * m[10];

    inv[8] = m[4]  * m[9] * m[15] - 
             m[4]  * m[11] * m[13] - 
             m[8]  * m[5] * m[15] + 
             m[8]  * m[7] * m[13] + 
             m[12] * m[5] * m[11] - 
             m[12] * m[7] * m[9];

    inv[12] = -m[4]  * m[9] * m[14] + 
               m[4]  * m[10] * m[13] +
               m[8]  * m[5] * m[14] - 
               m[8]  * m[6] * m[13] - 
               m[12] * m[5] * m[10] + 
               m[12] * m[6] * m[9];

    inv[1] = -m[1]  * m[10] * m[15] + 
              m[1]  * m[11] * m[14] + 
              m[9]  * m[2] * m[15] - 
              m[9]  * m[3] * m[14] - 
              m[13] * m[2] * m[11] + 
              m[13] * m[3] * m[10];

    inv[5] = m[0]  * m[10] * m[15] - 
             m[0]  * m[11] * m[14] - 
             m[8]  * m[2] * m[15] + 
             m[8]  * m[3] * m[14] + 
             m[12] * m[2] * m[11] - 
             m[12] * m[3] * m[10];

    inv[9] = -m[0]  * m[9] * m[15] + 
              m[0]  * m[11] * m[13] + 
              m[8]  * m[1] * m[15] - 
              m[8]  * m[3] * m[13] - 
              m[12] * m[1] * m[11] + 
              m[12] * m[3] * m[9];

    inv[13] = m[0]  * m[9] * m[14] - 
              m[0]  * m[10] * m[13] - 
              m[8]  * m[1] * m[14] + 
              m[8]  * m[2] * m[13] + 
              m[12] * m[1] * m[10] - 
              m[12] * m[2] * m[9];

    inv[2] = m[1]  * m[6] * m[15] - 
             m[1]  * m[7] * m[14] - 
             m[5]  * m[2] * m[15] + 
             m[5]  * m[3] * m[14] + 
             m[13] * m[2] * m[7] - 
             m[13] * m[3] * m[6];

    inv[6] = -m[0]  * m[6] * m[15] + 
              m[0]  * m[7] * m[14] + 
              m[4]  * m[2] * m[15] - 
              m[4]  * m[3] * m[14] - 
              m[12] * m[2] * m[7] + 
              m[12] * m[3] * m[6];

    inv[10] = m[0]  * m[5] * m[15] - 
              m[0]  * m[7] * m[13] - 
              m[4]  * m[1] * m[15] + 
              m[4]  * m[3] * m[13] + 
              m[12] * m[1] * m[7] - 
              m[12] * m[3] * m[5];

    inv[14] = -m[0]  * m[5] * m[14] + 
               m[0]  * m[6] * m[13] + 
               m[4]  * m[1] * m[14] - 
               m[4]  * m[2] * m[13] - 
               m[12] * m[1] * m[6] + 
               m[12] * m[2] * m[5];

    inv[3] = -m[1] * m[6] * m[11] + 
              m[1] * m[7] * m[10] + 
              m[5] * m[2] * m[11] - 
              m[5] * m[3] * m[10] - 
              m[9] * m[2] * m[7] + 
              m[9] * m[3] * m[6];

    inv[7] = m[0] * m[6] * m[11] - 
             m[0] * m[7] * m[10] - 
             m[4] * m[2] * m[11] + 
             m[4] * m[3] * m[10] + 
             m[8] * m[2] * m[7] - 
             m[8] * m[3] * m[6];

    inv[11] = -m[0] * m[5] * m[11] + 
               m[0] * m[7] * m[9] + 
               m[4] * m[1] * m[11] - 
               m[4] * m[3] * m[9] - 
               m[8] * m[1] * m[7] + 
               m[8] * m[3] * m[5];

    inv[15] = m[0] * m[5] * m[10] - 
              m[0] * m[6] * m[9] - 
              m[4] * m[1] * m[10] + 
              m[4] * m[2] * m[9] + 
              m[8] * m[1] * m[6] - 
              m[8] * m[2] * m[5];
	rglMatrixPrint4d(inv,"inv");
    det = m[0] * inv[0] + m[1] * inv[4] + m[2] * inv[8] + m[3] * inv[12];

    if (det == 0)
        return 1;

    det = 1.0 / det;

    for (i = 0; i < 16; i++)
        invOut[i] = inv[i] * det;
	rglMatrixPrint4d(invOut,"inv +det");
    return 0;
}
*/

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
GLint rglMatrixMultVector4d(const rglMat4d_t m, rglVec4d_t *v)
{   
	rglVec4d_t vt;
    vt.x = v->x * m[0] + v->y * m[4] + v->z * m[8] + v->w *m[12];
    vt.y = v->x * m[1] + v->y * m[5] + v->z * m[9] + v->w *m[13];
    vt.z = v->x * m[2] + v->y * m[6] + v->z * m[10] + v->w *m[14];
	vt.w = v->x * m[3] + v->y * m[7] + v->z * m[11] + v->w *m[15];
	rglVectorCopy4d(v,vt);
    return 0;
}

GLint rglMatrixMultVector4f(const rglMat4f_t m, rglVec4f_t *v)
{   
	 
    rglVec4f_t vt; 
    vt.x = v->x * m[0] + v->y * m[4] + v->z * m[8] + v->w *m[12];
    vt.y = v->x * m[1] + v->y * m[5] + v->z * m[9] + v->w *m[13];
    vt.z = v->x * m[2] + v->y * m[6] + v->z * m[10] + v->w *m[14];
	vt.w = v->x * m[3] + v->y * m[7] + v->z * m[11] + v->w *m[15];
	rglVectorCopy4f(v,vt);
    return 0;
}


GLint rglMatrix4MultVector3d(const rglMat4d_t m, rglVec3d_t *v)
{   
	rglVec4d_t v4;
	rglVector3ToVector4d(&v4,*v) ;
    rglMatrixMultVector4d(m, &v4);
    rglVector4ToVector3d(v,v4);	
    return 0;
}


GLint rglMatrix4fMultVector3f(const rglMat4f_t m, rglVec3f_t *v)
{  	   
	rglVec4f_t v4;
	rglVector3ToVector4f(&v4,*v) ;
    rglMatrixMultVector4f(m, &v4);
    rglVector4ToVector3f(v,v4);	
    return 0;
}	

GLint MatrixCmp4d(rglMat4d_t m1, rglMat4d_t m2)
{
	GLint result,i,n=0;
	for(i=0;i<16;i+=1) {
		if ((fabs(m1[i]-m2[i])<EPSd)){
				n+=1;			
		}
		else
		printf("m1[%i] = %0.12lf   m2[%i] = %0.12lf\n",i,m1[i],i,m2[i]);
	}
	if (n==16)
		result=0;
	else
		result=1;
		
	return result;
}

GLint MatrixCmp4f(rglMat4f_t m1, rglMat4f_t m2)
{
	GLint result,i,n=0;
	for(i=0;i<16;i+=1) {
		if ((fabs(m1[i]-m2[i])<EPSf)){
			n+=1;			
		}
		else
			printf("m1[%i] = %0.6f   m2[%i] = %0.6f\n",i,m1[i],i,m2[i]);
	}
	if (n==16)
		result=0;
	else
		result=1;
		
	return result;
}

GLint rglMatrixPrint4d(rglMat4d_t m,const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %0.12f m[4] = %4.12f m[8] = %0.12f m[12] = %0.12f\n", m[0],m[4],m[8],m[12]);
	printf("m[1] = %0.12f m[5] = %0.12f m[9] = %0.12f m[13] = %0.12f\n", m[1],m[5],m[9],m[13]);
	printf("m[2] = %0.12f m[6] = %0.12f m[10] = %0.12f m[14] = %0.12f\n", m[2],m[6],m[10],m[14]);
	printf("m[3] = %0.12f m[7] = %0.12f m[11] = %0.12f m[15] = %0.12f\n", m[3],m[7],m[11],m[15]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}

GLint rglMatrixPrint4f(rglMat4f_t  m,const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %0.6f m[4] = %0.6f m[8] = %0.6f m[12] = %0.6f\n", m[0],m[4],m[8],m[12]);
	printf("m[1] = %0.6f m[5] = %0.6f m[9] = %0.6f m[13] = %0.6f\n", m[1],m[5],m[9],m[13]);
	printf("m[2] = %0.6f m[6] = %0.6f m[10] = %0.6f m[14] = %0.6f\n", m[2],m[6],m[10],m[14]);
	printf("m[3] = %0.6f m[7] = %0.6f m[11] = %0.6f m[15] = %0.6f\n", m[3],m[7],m[11],m[15]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}
