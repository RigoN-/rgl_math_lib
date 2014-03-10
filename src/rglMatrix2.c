#include "../include/rglMath/rglMatrix2.h" 

rglMat2d_t md_identity2={1.0f,0.0f,0.0f,1.0f};
rglMat2f_t mf_identity2={1.0f,0.0f,0.0f,1.0f};
rglMat2d_t md_zero2={0.0f,0.0f,0.0f,0.0f};
rglMat2f_t mf_zero2={0.0f,0.0f,0.0f,0.0f};


//--------------------------------MATRIX2-----------------------------------------------------------------------------------------------------
GLint rglMatrix2dInitd(rglMat2d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3)
{	
	dest[0]=m0;dest[2]=m2;
	dest[1]=m1;dest[3]=m3;	
	return 1;
}

GLint rglMatrix2fInitf(rglMat2f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3)
{	
	dest[0]=m0;dest[2]=m2;
	dest[1]=m1;dest[3]=m3;	
	return 1;
}

GLint rglMatrix2dIdentity(rglMat2d_t dest)
{			
	memcpy(dest, md_identity2,sizeof(*dest)*4); 			
	return 1; 
}

GLint rglMatrix2fIdentity(rglMat2f_t dest)
{			
	memcpy(dest, mf_identity2,sizeof(*dest)*4); 			
	return 1; 
}

GLint rglMatrix2dCopy(rglMat2d_t dest, rglMat2d_t src) 
{
		memcpy(dest, src,sizeof(*src)*4); 						
   return 1;   
}

GLint rglMatrix2fCopy(rglMat2f_t dest, rglMat2f_t src) 
{
		memcpy(dest, src,sizeof(*src)*4); 						
   return 1;   
}

GLdouble rglMatrix2dDet(rglMat2d_t src)
{
	return src[0]*src[3]-src[2]*src[1];
}

GLfloat rglMatrix2fDet(rglMat2f_t src)
{
	return src[0]*src[3]-src[2]*src[1];
}

GLint rglMatrix2dTranspose(rglMat2d_t src) 
{
	rglMat2d_t mt;
	mt[0] = src[0]; mt[2] = src[1]; 
	mt[1] = src[2];mt[3] = src[3];   
	rglMatrix2dCopy(src,mt);  		
	return 1;
}

GLint rglMatrix2fTranspose(rglMat2f_t src) 
{
	rglMat2f_t mt;
	mt[0] = src[0]; mt[2] = src[1]; 
	mt[1] = src[2];mt[3] = src[3];   
	rglMatrix2fCopy(src,mt);  		
	return 1;
}

GLint rglMatrix2dMultiply(rglMat2d_t m1, rglMat2d_t m2)
{	
	rglMat2d_t mt;
	GLint n;	
 	mt[0] = m1[0] * m2[0] + m1[2] * m2[1];
    mt[1] = m1[1] * m2[0] + m1[3] * m2[1];
    mt[2] = m1[1] * m2[2] + m1[3] * m2[3];
    mt[3] = m1[1] * m2[2] + m1[3] * m2[3];  
     for(n=0;n<4;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;
    rglMatrix2dCopy(m1,mt);  		 
    return 1;
}

GLint rglMatrix2fMultiply(rglMat2f_t m1, rglMat2f_t m2)
{	
	rglMat2f_t mt;
	GLint n;	
 	mt[0] = m1[0] * m2[0] + m1[2] * m2[1];
    mt[1] = m1[1] * m2[0] + m1[3] * m2[1];
    mt[2] = m1[1] * m2[2] + m1[3] * m2[3];
    mt[3] = m1[1] * m2[2] + m1[3] * m2[3];  
     for(n=0;n<4;n+=1)
      if(fabs(mt[n])<1e-6)
      	mt[n]=0.0;
    rglMatrix2fCopy(m1,mt);  		 
    return 1;
}
