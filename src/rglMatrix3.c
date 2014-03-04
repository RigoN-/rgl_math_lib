#include "../include/rglMatrix3.h" 
#include "../include/rglMatrix2.h" 
#include "../include/rglVector2.h"
#include "../include/rglVector3.h"

//--------------------------------MATRIX3-----------------------------------------------------------------------------------------------------
GLint rglMatrix3Initf(rglMat3_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3,GLfloat m4,GLfloat m5,GLfloat m6,GLfloat m7,GLfloat m8)
{
	dest[0]=m0;dest[3]=m3;dest[6]=m6;
	dest[1]=m1;dest[4]=m4;dest[7]=m7;
	dest[2]=m2;dest[5]=m5;dest[8]=m8;	
	return 1;
}

GLint rglMatrix3Identity(rglMat3_t dest)
{	
	rglMat3_t m_identity3={1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0};	
	memcpy(dest, m_identity3,sizeof(dest)*9); 			
	return 1; 
}

GLint rglMatrix4to3(rglMat3_t dest, rglMat4_t src)
{
	
 	dest[0] =  src[0];
    dest[1] =  src[1];
    dest[2] =  src[2];
    dest[3] =  src[4];
    dest[4] =  src[5];
    dest[5] =  src[6];;
    dest[6] =  src[8];;
    dest[7] =  src[9];
    dest[8] =  src[10];   
  return 1;
}

GLint rglMatrix3Copy(rglMat3_t dest, rglMat3_t src) 
{
		memcpy(&dest[0], &src[0],sizeof(dest)*9); 						
   return 1;   
}

GLint rglMatrix3Multiply(rglMat3_t m1, rglMat3_t m2)
{
	GLint n;
	rglMat3_t dest={0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
 	dest[0] = m1[0] * m2[0] + m1[3] * m2[1] + m1[6] * m2[2] ;
    dest[1] = m1[1] * m2[0] + m1[4] * m2[1] + m1[7] * m2[2] ;
    dest[2] = m1[2] * m2[0] + m1[5] * m2[1] + m1[8] * m2[2] ;
  
   
    dest[3] = m1[0] * m2[3] + m1[3] * m2[4] + m1[6] * m2[5];
    dest[4] = m1[1] * m2[3] + m1[4] * m2[4] + m1[7] * m2[5];    
    dest[5] = m1[2] * m2[3] + m1[5] * m2[4] + m1[8] * m2[5];
    dest[6] = m1[0] * m2[6] + m1[3] * m2[7] + m1[6] * m2[8];
    dest[7] = m1[1] * m2[6] + m1[4] * m2[7] + m1[7] * m2[8];
    dest[8] = m1[2] * m2[6] + m1[5] * m2[7] + m1[8] * m2[8] ;    
    for(n=0;n<9;n+=1)
      if(fabs(dest[n])<1e-6)
      	dest[n]=0.0;
    rglMatrix3Copy(m1,dest);  		 		      
    return 1;
}

GLint rglMatrix3MulInt(rglMat3_t src, int d)
{
	int i;
	for(i=0;i<9;i+=1)
		src[i]=src[i]*d;
    return 1;
}

GLint rglMatrix3MulFloat(rglMat3_t src, GLfloat f)
{
	int i;
	for(i=0;i<9;i+=1)
		src[i]=src[i]*f;
    return 1;
}

GLint rglMatrix3Transpose(rglMat3_t src) 
{
	rglMat3_t mt;
   mt[0] = src[0]; mt[3] = src[1]; mt[6] = src[2]; 
   mt[1] = src[3]; mt[4] = src[4]; mt[7] = src[5];
   mt[2] = src[6]; mt[5] = src[7]; mt[8] = src[8];
   rglMatrix3Copy(src,mt);  		 						
   return 1;
}

// m0 m3 m6
// m1 m4 m7
// m2 m5 m8
//
//D=(m0*m4*m8+m1*m5*m6+m3*m7*m2)-(m6*m4*m2+m1*m3*m8+m0*m5*m7)
GLfloat rglMatrix3Det(rglMat3_t m)
{
  GLfloat det= (m[0]*m[4]*m[8]+m[6]*m[1]*m[5]+m[3]*m[7]*m[2])-(m[6]*m[4]*m[2]+ m[0]*m[7]*m[5]+ m[3]*m[1]*m[8]) ;
  							
  return   det;
}

GLint rglMatrix3Minor(rglMat2_t dest,rglMat3_t src, int n) 
{
	
	int k,r,c=0;
	int j=n/3;
	int i=n%3;
	for (k=0;k<3;k+=1)
	for (r=0;r<3;r+=1)
	{
		if((k!=i) && r!=j)
		{
		dest[c]=src[r*3+k];
		c+=1;
		}
	}    						
   return 1;
}

GLfloat rglMatrix3Minorf(rglMat3_t src, int n) 
{
	rglMat2_t dest;
	rglMatrix3Minor(dest,src,n);			
    return rglMatrix2Det(dest);
}

GLint rglMatrix3Adjoin(rglMat3_t dest,rglMat3_t src) 
{
	
	int n;
	
	for (n=0;n<9;n+=1)
	{		
		if (n%2==0) 		
		dest[n]=rglMatrix3Minorf(src,n);			
		else
		dest[n]=-rglMatrix3Minorf(src,n);
	}    						
   return 1;
}

//Из этих утверждений следует алгоритм нахождения обратной матрицы:
//
 //   заменить каждый элемент исходной матрицы на его алгебраическое дополнение,
 //   транспонировать полученную матрицу - в результате будет получена союзная матрица,
 //   разделить каждый элемент союзной матрицы на определитель исходной матрицы.

 GLint rglMatrix3Inverse(rglMat3_t src)
{
  rglMat3_t mt;
  GLfloat det= rglMatrix3Det(src);
  if (det==0) return 0;
  rglMatrix3Adjoin(mt,src);
  rglMatrix3Transpose(mt);  
  rglMatrix3MulFloat(mt, 1/det);
  rglMatrix3Copy(src,mt); 
  return 1;
}
 /*
 GLint rglMatrix3Inverse(rglMat3_t dest,rglMat3_t src)
{
 
  GLfloat x= rglMatrix3Det(src);
  if (x==0) return 0;

  dest[0]=(-src[7]*src[5]+src[4]*src[8])/x;
  dest[3]=( src[6]*src[5]-src[3]*src[8])/x;
  dest[6]=(-src[6]*src[4]+src[3]*src[7])/x;
  dest[1]=( src[7]*src[2]-src[1]*src[8])/x;
  dest[4]=(-src[6]*src[2]+src[0]*src[8])/x;
  dest[7]=( src[6]*src[1]-src[0]*src[7])/x;
  dest[2]=(-src[4]*src[2]+src[1]*src[5])/x;
  dest[5]=( src[3]*src[2]-src[0]*src[5])/x;
  dest[8]=(-src[3]*src[1]+src[0]*src[4])/x;

  return 1;
}
*/


GLint rglMatrix3Print(rglMat3_t m)
{
	printf("m[0] = %5.2f m[3] = %5.2f m[6] = %5.2f \n", m[0],m[3],m[6]);
	printf("m[1] = %5.2f m[4] = %5.2f m[7] = %5.2f \n", m[1],m[4],m[7]);
	printf("m[2] = %5.2f m[5] = %5.2f m[8] = %5.2f \n", m[2],m[5],m[8]);
	printf("--------------------------------------------------------------------------------------------------\n");
	return 1;
}
