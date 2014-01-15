#include "rglOGLmat.h" 


//--------------------------------OPENGL MATRIX-----------------------------------------------------------------------------------------------------

GLint  rglFrustum(rglMat4 dest,GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{	
	
	    dest[0] = (2 * zNear / (right - left));
        dest[1] = 0.0;
        dest[2] = 0.0;
        dest[3] = 0.0;

       dest[4] = 0.0;
       dest[5] = (2 * zNear / (top - bottom));
       dest[6] = 0.0;
       dest[7] = 0.0;

       dest[8] = ((right + left) / (right - left));
       dest[9] = ((top + bottom) / (top - bottom));
       dest[10] = -((zFar + zNear) / (zFar - zNear));
       dest[11] = -1;

       dest[12] = 0.0;
       dest[13]= 0.0;
       dest[14] = -(2 * zFar * zNear / (zFar - zNear));
       dest[15] = 0.0;	
	return 1;
	
}


GLint  rglPerspective(rglMat4 dest,GLfloat fov, GLfloat aspect, GLfloat znear, GLfloat zfar)
{	
	
	GLfloat rad = fov * DEG2RAD;
	for (GLint i =0; i<16; i++)
			dest[i]=0.0;			
	dest[0]=1.0f/(tan(rad/2.0f)*aspect);
	dest[5]=1.0/tan(rad/2.0f);
	dest[10]=(znear+zfar)/(znear-zfar);
	dest[11]=-1.0f;
	dest[14]=(2.0f*znear*zfar)/(znear-zfar);	
	dest[15]=1.0;			
	return 1;
}

GLint rglOrtho(rglMat4 dest, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat znear, GLfloat zfar)
{	
	
	for (GLint i =0; i<16; i++)
			dest[i]=0.0;			
	dest[0]=2.0/(right - left);
	dest[5]=2.0/(top - bottom);
	dest[10]=-2.0/(zfar - znear);
	dest[12]=-(right + left)/(right - left);
	dest[13]=-(top+bottom)/(top - bottom);	
	dest[14]=-(zfar + znear)/(zfar - znear);	
	dest[15]=1.0;		
	return 1;
}

GLint rglTranslate(rglMat4 dest, GLfloat x, GLfloat y, GLfloat z)
{
	rglMat4 m;
	rglMatrix4Identity(m);
	m[12]+=x;
	m[13]+=y;
	m[14]+=z;
	
	rglMatrix4Multiply(dest,m);	
	return 1;	
}

GLint rglScale(rglMat4 dest, GLfloat x, GLfloat y, GLfloat z)
{
	rglMat4 m;
	rglMatrix4Identity(m);
	m[0]=x;
	m[5]=y;
	m[10]=z;	
	rglMatrix4Multiply(dest,m);		
	return 1;		
}

GLint rglRotate( rglMat4 dest, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    GLfloat rad = angle * DEG2RAD;
    GLfloat cosA = cos(rad);
    GLfloat sinA = sin(rad);
   
	rglMat4 m;
	rglMatrix4Identity(m);
    GLfloat ux =x;
	GLfloat uy = y;
	GLfloat uz = z;
	
	 double l = sqrt(ux*ux +uy*uy + uz*uz);
     if (l != 1.0) 
	 	{ 
		 ux /= l; uy /= l; uz /= l; 
		 }	    
	m[0]  = (1-cosA) * (ux*ux) + cosA ;
	m[1]  = (1-cosA) * (ux*uy) + (sinA*uz);
	m[2]  = (1-cosA) * (ux*uz) - (sinA*uy);		
	m[4]  = (1-cosA) * (ux*uy) - (sinA*uz);
	m[5]  = (1-cosA) * (uy*uy) + cosA;
	m[6]  = (1-cosA) * (uy*uz) + (sinA*ux);		
	m[8]  = (1-cosA) * (ux*uz) + (sinA*uy);
	m[9]  = (1-cosA) * (uy*uz) - (sinA*ux);
	m[10] = (1-cosA) * (uz*uz)+ cosA;
	
	rglMatrix4Multiply(dest,m);
	return 1;
	
}

GLint rglLookAt(rglMat4 dest, rglVec3 v1, rglVec3 v2, rglVec3 v3)
{
	
	rglVec3 f,up,x,y;
	rglMat4 m1;
	rglMatrix4Identity(m1);
    f=rglVector3Sub(v2,v1);
    f=rglVector3Normalize(f);	
	up=rglVector3Normalize(v3);	
    x=rglVector3Cross(f,up);
	x=rglVector3Normalize(x);	
    y= rglVector3Cross(x,f);  
    y=rglVector3Normalize(y);	
    m1[0] = x.x; m1[4] = x.y; m1[8] = x.z; m1[12] = 0.0;
    m1[1] = y.x; m1[5] = y.y; m1[9] = y.z; m1[13] = 0.0;
    m1[2] = -f.x; m1[6] = -f.y; m1[10] = -f.z; m1[14] = 0.0;
    m1[3] = 0.0; m1[7] = 0.0; m1[11] = 0.0; m1[15] = 1.0;
   	rglTranslate(m1,-v1.x,-v1.y,-v1.z);	   	
	rglMatrix4Multiply(dest,m1);
	return 1;
	
}

GLint rglMatrixNormal(rglMat3 dest,rglMat4 src)
 {
	rglMatrix4to3(dest,src);
	rglMatrix3Inverse(dest);  
	rglMatrix3Transpose(dest);		
	return 1;	
}
