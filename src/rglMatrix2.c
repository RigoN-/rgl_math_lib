#include <rglMatrix2.h> 

rglMat2d_t md_identity2={1.0,0.0,0.0,1.0};
rglMat2f_t mf_identity2={1.0f,0.0f,0.0f,1.0f};
rglMat2d_t md_zero2={0.0,0.0,0.0,0.0};
rglMat2f_t mf_zero2={0.0f,0.0f,0.0f,0.0f};


//--------------------------------MATRIX2-----------------------------------------------------------------------------------------------------
GLint rglMatrixInit2d(rglMat2d_t dest, GLdouble m0, GLdouble m1,GLdouble m2,GLdouble m3)
{	
	dest[0]=m0;dest[2]=m2;
	dest[1]=m1;dest[3]=m3;	
	return 1;
}

GLint rglMatrixInit2f(rglMat2f_t dest, GLfloat m0, GLfloat m1,GLfloat m2,GLfloat m3)
{	
	dest[0]=m0;dest[2]=m2;
	dest[1]=m1;dest[3]=m3;	
	return 1;
}

GLint rglMatrixInitZero2d(rglMat2d_t dest)
{			
	memcpy(dest, md_zero2,sizeof(*dest)*4); 			
	return 1; 
}

GLint rglMatrixInitZero2f(rglMat2f_t dest)
{			
	memcpy(dest, mf_zero2,sizeof(*dest)*4); 			
	return 1; 
}


GLint rglMatrixIdentity2d(rglMat2d_t dest)
{			
	memcpy(dest, md_identity2,sizeof(*dest)*4); 			
	return 1; 
}

GLint rglMatrixIdentity2f(rglMat2f_t dest)
{			
	memcpy(dest, mf_identity2,sizeof(*dest)*4); 			
	return 1; 
}

GLint rglMatrixCopy2d(rglMat2d_t dest, rglMat2d_t src) 
{
		memcpy(dest, src,sizeof(*src)*4); 						
   return 1;   
}

GLint rglMatrixCopy2f(rglMat2f_t dest, rglMat2f_t src) 
{
		memcpy(dest, src,sizeof(*src)*4); 						
   return 1;   
}

GLdouble rglMatrixDet2d(rglMat2d_t src)
{
	return src[0]*src[3]-src[2]*src[1];
}

GLfloat rglMatrixDet2f(rglMat2f_t src)
{
	return src[0]*src[3]-src[2]*src[1];
}

GLint rglMatrixTranspose2d(rglMat2d_t src) 
{
	rglMat2d_t mt;
	mt[0] = src[0]; mt[2] = src[1]; 
	mt[1] = src[2];mt[3] = src[3];   
	rglMatrixCopy2d(src,mt);  		
	return 1;
}

GLint rglMatrixTranspose2f(rglMat2f_t src) 
{
	rglMat2f_t mt;
	mt[0] = src[0]; mt[2] = src[1]; 
	mt[1] = src[2];mt[3] = src[3];   
	rglMatrixCopy2f(src,mt);  		
	return 1;
}

GLint rglMatrixMultiply2d(rglMat2d_t m1, rglMat2d_t m2)
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
    rglMatrixCopy2d(m1,mt);  		 
    return 1;
}

GLint rglMatrixMultiply2f(rglMat2f_t m1, rglMat2f_t m2)
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
    rglMatrixCopy2f(m1,mt);  		 
    return 1;
}

GLint MatrixCmp2d(rglMat2d_t m1, rglMat2d_t m2)
{
	GLint result,i,n=0;
	for(i=0;i<4;i+=1) {
		if ((fabs(m1[i]-m2[i])<EPSd)){
				n+=1;			
		}
		else
		printf("m1[%i] = %0.12lf   m2[%i] = %0.12lf\n",i,m1[i],i,m2[i]);
	}
	if (n==4)
		result=0;
	else
		result=1;
		
	return result;
}

GLint MatrixCmp2f(rglMat2f_t m1, rglMat2f_t m2)
{
	GLint result,i,n=0;
	for(i=0;i<4;i+=1) {
		if ((fabs(m1[i]-m2[i])<EPSf)){
			n+=1;			
		}
		else
			printf("m1[%i] = %0.6f   m2[%i] = %0.6f\n",i,m1[i],i,m2[i]);
	}
	if (n==4)
		result=0;
	else
		result=1;
		
	return result;
}


GLint rglMatrixPrint2d(rglMat2d_t m, const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %0.12lf m[2] = %0.12f \n", m[0],m[2]);
	printf("m[1] = %0.12lf m[3] = %0.12f \n", m[1],m[3]);	
	printf("--------------------------------------------------------------------------------------------------\n");
	return 0;
}

GLint rglMatrixPrint2f(rglMat2f_t m, const char * header)
{
	if (header!=NULL)
		printf("%s:\n",header);
	printf("m[0] = %0.6f m[2] = %0.6f \n", m[0],m[2]);
	printf("m[1] = %0.6f m[3] = %0.6f \n", m[1],m[3]);	
	printf("--------------------------------------------------------------------------------------------------\n");
	return 0;
}
