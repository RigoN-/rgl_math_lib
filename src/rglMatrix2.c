#include "rglMatrix2.h" 

//--------------------------------MATRIX2-----------------------------------------------------------------------------------------------------
GLint rglMatrix2Init(rglMat2 dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3)
{
	
	dest[0]=m0;dest[2]=m2;
	dest[1]=m1;dest[3]=m3;	
	return 1;
}

GLint rglMatrix2Identity(rglMat2 dest)
{	
	rglMat3 m_identity2={1.0,0.0,0.0,1.0};	
	memcpy(dest, m_identity2,sizeof(dest)*4); 			
	return 1; 
}

GLint rglMatrix2Copy(rglMat2 dest, rglMat2 src) 
{
		memcpy(&dest[0], &src[0],sizeof(src)*4); 						
   return 1;   
}

GLfloat rglMatrix2Det(rglMat2 src)
{
	return src[0]*src[3]-src[2]*src[1];
}
GLint rglMatrix2Transpose(rglMat2 src) 
{
	rglMat2 mt;
   mt[0] = src[0]; mt[2] = src[1]; 
   mt[1] = src[2];mt[3] = src[3];   
   rglMatrix2Copy(src,mt);  		
   return 1;
	}

GLint rglMatrix2Multiply(rglMat2 m1, rglMat2 m2)
{	
	rglMat2 dest;
	GLint n;	
 	dest[0] = m1[0] * m2[0] + m1[2] * m2[1] ;
    dest[1] = m1[1] * m2[0] + m1[3] * m2[1]  ;
    dest[2] = m1[1] * m2[2] + m1[3] * m2[3] ;
    dest[3] = m1[1] * m2[2] + m1[3] * m2[3]  ;  
     for(n=0;n<4;n+=1)
      if(fabs(dest[n])<1e-6)
      	dest[n]=0.0;
    rglMatrix2Copy(m1,dest);  		 
    return 1;
}
