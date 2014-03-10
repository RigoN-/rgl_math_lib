#include "../include/rglMath/rglMatrix3.h" 
#include "../include/rglMath/rglMatrix2.h" 
#include "../include/rglMath/rglVector2.h"
#include "../include/rglMath/rglVector3.h"

rglMat3d_t md_identity3={1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f};
rglMat3f_t mf_identity3={1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f};
rglMat3d_t md_zero3={0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f};
rglMat3f_t mf_zero3={0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f,0.0f};
//--------------------------------MATRIX3-----------------------------------------------------------------------------------------------------
GLint rglMatrix3dInitd(rglMat3d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3,GLdouble m4,GLdouble m5,GLdouble m6,GLdouble m7,GLdouble m8)
{
	dest[0]=m0;dest[3]=m3;dest[6]=m6;
	dest[1]=m1;dest[4]=m4;dest[7]=m7;
	dest[2]=m2;dest[5]=m5;dest[8]=m8;	
	return 1;
}

GLint rglMatrix3fInitf(rglMat3f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8)
{
	dest[0]=m0;dest[3]=m3;dest[6]=m6;
	dest[1]=m1;dest[4]=m4;dest[7]=m7;
	dest[2]=m2;dest[5]=m5;dest[8]=m8;	
	return 1;
}

GLint rglMatrix3dCopy(rglMat3d_t dest, rglMat3d_t src) 
{
		memcpy(dest, src,sizeof(*dest)*9); 						
   return 1;   
}

GLint rglMatrix3fCopy(rglMat3f_t dest, rglMat3f_t src) 
{
		memcpy(dest, src,sizeof(*dest)*9); 						
   return 1;   
}

GLint rglMatrix3dIdentity(rglMat3d_t dest)
{		
	memcpy(dest, md_identity3,sizeof(*dest)*9); 			
	return 1; 
}

GLint rglMatrix3fIdentity(rglMat3f_t dest)
{		
	memcpy(dest, mf_identity3,sizeof(*dest)*9); 			
	return 1; 
}



GLint rglMatrix3dMulInt(rglMat3d_t src, GLint d)
{
	rglMat3d_t mt;
	GLint i;
	for(i=0;i<9;i+=1)
		mt[i]=src[i]*d;
	rglMatrix3dCopy(src,mt);
    return 1;
}

GLint rglMatrix3fMulInt(rglMat3f_t src, GLint d)
{
	rglMat3f_t mt;
	GLint i;
	for(i=0;i<9;i+=1)
		mt[i]=src[i]*d;
	rglMatrix3fCopy(src,mt);
    return 1;
}

GLint rglMatrix3dMulFloat(rglMat3d_t src, GLdouble f)
{
	rglMat3d_t mt;
	GLint i;
	for(i=0;i<9;i+=1)
		mt[i]=src[i]*f;
	rglMatrix3dCopy(src,mt);
    return 1;
}

GLint rglMatrix3fMulFloat(rglMat3f_t src, GLfloat f)
{
	rglMat3f_t mt;
	GLint i;
	for(i=0;i<9;i+=1)
		mt[i]=src[i]*f;
	rglMatrix3fCopy(src,mt);
    return 1;
}

GLint rglMatrix3dMultiply(rglMat3d_t m1, rglMat3d_t m2)
{
	GLint n;
	rglMat3d_t mt={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
 	mt[0] = m1[0] * m2[0] + m1[3] * m2[1] + m1[6] * m2[2] ;
    mt[1] = m1[1] * m2[0] + m1[4] * m2[1] + m1[7] * m2[2] ;
    mt[2] = m1[2] * m2[0] + m1[5] * m2[1] + m1[8] * m2[2] ;
  
   
    mt[3] = m1[0] * m2[3] + m1[3] * m2[4] + m1[6] * m2[5];
    mt[4] = m1[1] * m2[3] + m1[4] * m2[4] + m1[7] * m2[5];    
    mt[5] = m1[2] * m2[3] + m1[5] * m2[4] + m1[8] * m2[5];
    mt[6] = m1[0] * m2[6] + m1[3] * m2[7] + m1[6] * m2[8];
    mt[7] = m1[1] * m2[6] + m1[4] * m2[7] + m1[7] * m2[8];
    mt[8] = m1[2] * m2[6] + m1[5] * m2[7] + m1[8] * m2[8] ;       
    for(n=0;n<9;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;
    rglMatrix3dCopy(m1,mt);  		 		      
    return 1;
}

GLint rglMatrix3fMultiply(rglMat3f_t m1, rglMat3f_t m2)
{
	GLint n;
	rglMat3f_t mt={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
 	mt[0] = m1[0] * m2[0] + m1[3] * m2[1] + m1[6] * m2[2] ;
    mt[1] = m1[1] * m2[0] + m1[4] * m2[1] + m1[7] * m2[2] ;
    mt[2] = m1[2] * m2[0] + m1[5] * m2[1] + m1[8] * m2[2] ;
  
   
    mt[3] = m1[0] * m2[3] + m1[3] * m2[4] + m1[6] * m2[5];
    mt[4] = m1[1] * m2[3] + m1[4] * m2[4] + m1[7] * m2[5];    
    mt[5] = m1[2] * m2[3] + m1[5] * m2[4] + m1[8] * m2[5];
    mt[6] = m1[0] * m2[6] + m1[3] * m2[7] + m1[6] * m2[8];
    mt[7] = m1[1] * m2[6] + m1[4] * m2[7] + m1[7] * m2[8];
    mt[8] = m1[2] * m2[6] + m1[5] * m2[7] + m1[8] * m2[8] ;    
    for(n=0;n<9;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;
    rglMatrix3fCopy(m1,mt);  		 		      
    return 1;
}

GLint rglMatrix3dTranspose(rglMat3d_t src) 
{
	rglMat3d_t mt;
   mt[0] = src[0]; mt[3] = src[1]; mt[6] = src[2]; 
   mt[1] = src[3]; mt[4] = src[4]; mt[7] = src[5];
   mt[2] = src[6]; mt[5] = src[7]; mt[8] = src[8];
   rglMatrix3dCopy(src,mt);  		 						
   return 1;
}

GLint rglMatrix3fTranspose(rglMat3f_t src) 
{
	rglMat3f_t mt;
   mt[0] = src[0]; mt[3] = src[1]; mt[6] = src[2]; 
   mt[1] = src[3]; mt[4] = src[4]; mt[7] = src[5];
   mt[2] = src[6]; mt[5] = src[7]; mt[8] = src[8];
   rglMatrix3fCopy(src,mt);  		 						
   return 1;
}


// m0 m3 m6
// m1 m4 m7
// m2 m5 m8
//
//D=(m0*m4*m8+m1*m5*m6+m3*m7*m2)-(m6*m4*m2+m1*m3*m8+m0*m5*m7)
GLdouble rglMatrix3dDet(rglMat3d_t m)
{
  GLdouble det= (m[0]*m[4]*m[8]+m[6]*m[1]*m[5]+m[3]*m[7]*m[2])-(m[6]*m[4]*m[2]+ m[0]*m[7]*m[5]+ m[3]*m[1]*m[8]) ;  							
  return   det;
}

GLfloat rglMatrix3fDet(rglMat3f_t m)
{
  GLfloat det= (m[0]*m[4]*m[8]+m[6]*m[1]*m[5]+m[3]*m[7]*m[2])-(m[6]*m[4]*m[2]+ m[0]*m[7]*m[5]+ m[3]*m[1]*m[8]) ;  							
  return   det;
}

GLint rglMatrix3dMinor(rglMat2d_t dest,rglMat3d_t src, GLint n) 
{
	
	GLint k,r,c=0;
	GLint j=n/3;
	GLint i=n%3;
	for (k=0;k<3;k+=1)
	for (r=0;r<3;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[r*3+k];
		c+=1;
		}
	}    						
   return 0;
}

GLint rglMatrix3fMinor(rglMat2f_t dest,rglMat3f_t src, GLint n) 
{
	
	GLint k,r,c=0;
	GLint j=n/3;
	GLint i=n%3;
	for (k=0;k<3;k+=1)
	for (r=0;r<3;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[r*3+k];
		c+=1;
		}
	}    						
   return 0;
}


GLdouble rglMatrix3dMinord(rglMat3d_t src, GLint n) 
{
	rglMat2d_t mt;
	rglMatrix3dMinor(mt,src,n);			
    return rglMatrix2dDet(mt);
}

GLdouble rglMatrix3fMinorf(rglMat3f_t src, GLint n) 
{
	rglMat2f_t mt;
	rglMatrix3fMinor(mt,src,n);			
    return rglMatrix2fDet(mt);
}

GLint rglMatrix3dAdjoin(rglMat3d_t dest,rglMat3d_t src) 
{
	GLint n;	
	for (n=0;n<9;n+=1)
	{		
		if (n%2==0) 		
		dest[n]=rglMatrix3dMinord(src,n);			
		else
		dest[n]=-rglMatrix3dMinord(src,n);
	}    						
   return 0;
}

GLint rglMatrix3fAdjoin(rglMat3f_t dest,rglMat3f_t src) 
{
	GLint n;	
	for (n=0;n<9;n+=1)
	{		
		if (n%2==0) 		
		dest[n]=rglMatrix3fMinorf(src,n);			
		else
		dest[n]=-rglMatrix3fMinorf(src,n);
	}    						
   return 0;
}
//Из этих утверждений следует алгоритм нахождения обратной матрицы:
//
 //   заменить каждый элемент исходной матрицы на его алгебраическое дополнение,
 //   транспонировать полученную матрицу - в результате будет получена союзная матрица,
 //   разделить каждый элемент союзной матрицы на определитель исходной матрицы.

GLint rglMatrix3dInverse(rglMat3d_t src)
{
  rglMat3d_t mt;
  GLdouble det= rglMatrix3dDet(src);
  if (det==0) return 0;
  rglMatrix3dAdjoin(mt,src);
  rglMatrix3dTranspose(mt);  
  rglMatrix3dMulFloat(mt, 1/det);
  rglMatrix3dCopy(src,mt); 
  return 0;
}

GLint rglMatrix3fInverse(rglMat3f_t src)
{
  rglMat3f_t mt;
  GLfloat det= rglMatrix3fDet(src);
  if (det==0) return 0;
  rglMatrix3fAdjoin(mt,src);
  rglMatrix3fTranspose(mt);  
  rglMatrix3fMulFloat(mt, 1/det);
  rglMatrix3fCopy(src,mt); 
  return 0;
}

//рабочий вариант для теста
/*
 GLint rglMatrix3Inverse(rglMat3f_t dest,rglMat3f_t src)
{
 
  GLfloat x= rglMatrix3fDet(src);
  if (x==0) return 1;

  dest[0]=(-src[7]*src[5]+src[4]*src[8])/x;
  dest[3]=( src[6]*src[5]-src[3]*src[8])/x;
  dest[6]=(-src[6]*src[4]+src[3]*src[7])/x;
  dest[1]=( src[7]*src[2]-src[1]*src[8])/x;
  dest[4]=(-src[6]*src[2]+src[0]*src[8])/x;
  dest[7]=( src[6]*src[1]-src[0]*src[7])/x;
  dest[2]=(-src[4]*src[2]+src[1]*src[5])/x;
  dest[5]=( src[3]*src[2]-src[0]*src[5])/x;
  dest[8]=(-src[3]*src[1]+src[0]*src[4])/x;

  return 0;
}
*/

GLint rglMatrix3dMulVector3d(const rglMat3d_t m, rglVec3d_t *v)
{   
	v->x =  v->x * m[0] + v->y * m[3] + v->z * m[6] ;
    v->y =  v->x * m[1] + v->y * m[4] + v->z * m[7];
    v->z =  v->x * m[2] + v->y * m[5] + v->z * m[8] ;
    return 0;
}

GLint rglMatrix3fMulVector3f(const rglMat3d_t m, rglVec3d_t *v)
{   
	v->x =  v->x * m[0] + v->y * m[3] + v->z * m[6] ;
    v->y =  v->x * m[1] + v->y * m[4] + v->z * m[7];
    v->z =  v->x * m[2] + v->y * m[5] + v->z * m[8] ;
    return 0;
}



GLint rglMatrix3dPrint(rglMat3d_t m, const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %4.8lf m[3] = %4.8lf m[6] = %4.8lf \n", m[0],m[3],m[6]);
	printf("m[1] = %4.8lf m[4] = %4.8lf m[7] = %4.8lf \n", m[1],m[4],m[7]);
	printf("m[2] = %4.8lf m[5] = %4.8lf m[8] = %4.8lf \n", m[2],m[5],m[8]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 0;
}

GLint rglMatrix3fPrint(rglMat3f_t m, const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %4.8f m[3] = %4.8f m[6] = %4.8f \n", m[0],m[3],m[6]);
	printf("m[1] = %4.8f m[4] = %4.8f m[7] = %4.8f \n", m[1],m[4],m[7]);
	printf("m[2] = %4.8f m[5] = %4.8f m[8] = %4.8f \n", m[2],m[5],m[8]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 0;
}
