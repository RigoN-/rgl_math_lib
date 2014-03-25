#include "../include/rglMath/rglMatrixGL.h" 
#include "../include/rglMath/rglMatrix4.h"
#include "../include/rglMath/rglMatrix3.h"
#include "../include/rglMath/rglVector3.h"

//--------------------------------OPENGL MATRIX-----------------------------------------------------------------------------------------------------
//матрица перспективной проекции аналог glFrustum
GLint  rglFrustumd(rglMat4d_t dest,GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{	
	   rglMatrixZeroInit4d(dest);
	   dest[0] = (2.0 * zNear / (right - left));    
       dest[5] = (2.0 * zNear / (top - bottom));
       dest[8] = ((right + left) / (right - left));
       dest[9] = ((top + bottom) / (top - bottom));
       dest[10] = -((zFar + zNear) / (zFar - zNear));
       dest[11] = -1.0;
       dest[14] = -(2.0 * zFar * zNear / (zFar - zNear));
	return 1;
	
}

GLint  rglFrustumf(rglMat4f_t dest,GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{	
	   rglMatrixZeroInit4f(dest);
	   dest[0] = (2.0f * zNear / (right - left));    
       dest[5] = (2.0f * zNear / (top - bottom));
       dest[8] = ((right + left) / (right - left));
       dest[9] = ((top + bottom) / (top - bottom));
       dest[10] = -((zFar + zNear) / (zFar - zNear));
       dest[11] = -1.0f;
       dest[14] = -(2.0f * zFar * zNear / (zFar - zNear));
	return 1;
	
}

//матрица перспективной проекции аналог gluPerspective
GLint  rglPerspectived(rglMat4d_t dest,GLdouble fov, GLdouble aspect, GLdouble znear, GLdouble zfar)
{	
	GLdouble fovr = fov * DEG2RAD;
	GLdouble ctan = cos(fovr/2.0)/sin(fovr/2.0);
	//GLdouble ctan = 1.0/tan(fovr/2.0);
	rglMatrixZeroInit4d(dest);			
	dest[0]=ctan/aspect;
	dest[5]=ctan;
	dest[10]=(znear+zfar)/(znear-zfar);
	dest[11]=-1.0;
	dest[14]=(2.0*znear*zfar)/(znear-zfar);						
	return 1;
}

GLint  rglPerspectivef(rglMat4f_t dest,GLfloat fov, GLfloat aspect, GLfloat znear, GLfloat zfar)
{	
	GLfloat fovr = fov * DEG2RAD;
	//GLfloat ctan = cos(fovr/2.0f)/sin(fovr/2.0f);
	GLfloat ctan = 1.0f/tan(fovr/2.0f);
	rglMatrixZeroInit4f(dest);			
	dest[0]=ctan/aspect;
	dest[5]=ctan;
	dest[10]=(znear+zfar)/(znear-zfar);
	dest[11]=-1.0f;
	dest[14]=(2.0f*znear*zfar)/(znear-zfar);						
	return 1;
}
//матрица ортографичекой проекции аналог glOrtho
GLint rglOrthod(rglMat4d_t dest, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble znear, GLdouble zfar)
{	
	
	rglMatrixZeroInit4d(dest);			
	dest[0]=2.0/(right - left);
	dest[5]=2.0/(top - bottom);
	dest[10]=-2.0/(zfar - znear);
	dest[12]=-(right + left)/(right - left);
	dest[13]=-(top+bottom)/(top - bottom);	
	dest[14]=-(zfar + znear)/(zfar - znear);	
	dest[15]=1.0;		
	return 1;
}

GLint rglOrthof(rglMat4f_t dest, GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat znear, GLfloat zfar)
{	
	
	rglMatrixZeroInit4f(dest);			
	dest[0]=2.0f/(right - left);
	dest[5]=2.0f/(top - bottom);
	dest[10]=-2.0f/(zfar - znear);
	dest[12]=-(right + left)/(right - left);
	dest[13]=-(top+bottom)/(top - bottom);	
	dest[14]=-(zfar + znear)/(zfar - znear);	
	dest[15]=1.0f;		
	return 1;
}

//матрица афинных преобразований - перемещение
GLint rglTranslated(rglMat4d_t dest, GLdouble x, GLdouble y, GLdouble z)
{
	rglMat4d_t m;
	rglMatrixIdentity4d(m);
	m[12]+=x;
	m[13]+=y;
	m[14]+=z;	
	rglMatrixMultiply4d(dest,m);	
	return 1;	
}

GLint rglTranslatef(rglMat4f_t dest, GLfloat x, GLfloat y, GLfloat z)
{
	rglMat4f_t m;
	rglMatrixIdentity4f(m);
	m[12]+=x;
	m[13]+=y;
	m[14]+=z;	
	rglMatrixMultiply4f(dest,m);	
	return 1;	
}

//матрица афинных преобразований - масштабирование
GLint rglScaled(rglMat4d_t dest, GLdouble x, GLdouble y, GLdouble z)
{
	rglMat4d_t m;
	rglMatrixIdentity4d(m);
	m[0]=x;
	m[5]=y;
	m[10]=z;	
	rglMatrixMultiply4d(dest,m);		
	return 1;		
}

GLint rglScalef(rglMat4f_t dest, GLfloat x, GLfloat y, GLfloat z)
{
	rglMat4f_t m;
	rglMatrixIdentity4f(m);
	m[0]=x;
	m[5]=y;
	m[10]=z;	
	rglMatrixMultiply4f(dest,m);		
	return 1;		
}

//матрица афинных преобразований - поворот
GLint rglRotated( rglMat4d_t dest, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    GLdouble rad = angle * DEG2RAD;
    GLdouble cosA = cos(rad);
    GLdouble sinA = sin(rad);
   
	rglMat4d_t m;
	rglMatrixIdentity4d(m);
    GLdouble ux = x;
	GLdouble uy = y;
	GLdouble uz = z;
	
	GLdouble l = sqrt(ux*ux +uy*uy + uz*uz);
     if (l != 1.0) 
	 	{ 
		 ux /= l; uy /= l; uz /= l; 
		 }	    
	m[0]  = (1.0-cosA) * (ux*ux) + cosA ;
	m[1]  = (1.0-cosA) * (ux*uy) + (sinA*uz);
	m[2]  = (1.0-cosA) * (ux*uz) - (sinA*uy);		
	m[4]  = (1.0-cosA) * (ux*uy) - (sinA*uz);
	m[5]  = (1.0-cosA) * (uy*uy) + cosA;
	m[6]  = (1.0-cosA) * (uy*uz) + (sinA*ux);		
	m[8]  = (1.0-cosA) * (ux*uz) + (sinA*uy);
	m[9]  = (1.0-cosA) * (uy*uz) - (sinA*ux);
	m[10] = (1.0-cosA) * (uz*uz)+ cosA;
	
	rglMatrixMultiply4d(dest,m);
	return 1;	
}

GLint rglRotatef( rglMat4f_t dest, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    GLfloat rad = angle * DEG2RAD;
    GLfloat cosA = cos(rad);
    GLfloat sinA = sin(rad);
   
	rglMat4f_t m;
	rglMatrixIdentity4f(m);
    GLfloat ux = x;
	GLfloat uy = y;
	GLfloat uz = z;
	
	GLfloat l = sqrt(ux*ux +uy*uy + uz*uz);
     if (l != 1.0f) 
	 	{ 
		 ux /= l; uy /= l; uz /= l; 
		 }	    
	m[0]  = (1.0f-cosA) * (ux*ux) + cosA ;
	m[1]  = (1.0f-cosA) * (ux*uy) + (sinA*uz);
	m[2]  = (1.0f-cosA) * (ux*uz) - (sinA*uy);		
	m[4]  = (1.0f-cosA) * (ux*uy) - (sinA*uz);
	m[5]  = (1.0f-cosA) * (uy*uy) + cosA;
	m[6]  = (1.0f-cosA) * (uy*uz) + (sinA*ux);		
	m[8]  = (1.0f-cosA) * (ux*uz) + (sinA*uy);
	m[9]  = (1.0f-cosA) * (uy*uz) - (sinA*ux);
	m[10] = (1.0f-cosA) * (uz*uz)+ cosA;
	
	rglMatrixMultiply4f(dest,m);
	return 1;	
}

//матрица просмотра(видовая матрица) аналог gluLookAT
GLint rglLookAtd(rglMat4d_t dest, rglVec3d_t v1, rglVec3d_t v2, rglVec3d_t v3)
{
	rglVec3d_t f,up,s,u;
	rglMat4d_t m1;
	rglMatrixIdentity4d(m1);
	rglVectorCopy3d(&f, v2);
	rglVectorSub3d(&f,v1);
	rglVectorNormalize3d(&f);
	rglVectorCopy3d(&up, v3);
	rglVectorNormalize3d(&up);
	rglVectorCross3d(&s,f,up);
	rglVectorNormalize3d(&s);
	rglVectorCross3d(&u,s,f);
	rglVectorNormalize3d(&u);
	m1[0] = s.x; m1[4] = s.y; m1[8] = s.z; m1[12] = 0.0;
    m1[1] = u.x; m1[5] = u.y; m1[9] = u.z; m1[13] = 0.0;
    m1[2] = -f.x; m1[6] = -f.y; m1[10] = -f.z; m1[14] = 0.0;
    m1[3] = 0.0; m1[7] = 0.0; m1[11] = 0.0; m1[15] = 1.0;
    rglTranslated(m1,-v1.x,-v1.y,-v1.z);
    rglMatrixMultiply4d(dest,m1);
	return 1;
	
}

GLint rglLookAtf(rglMat4f_t dest, rglVec3f_t v1, rglVec3f_t v2, rglVec3f_t v3)
{
	rglVec3f_t f,up,s,u;
	rglMat4f_t m1;
	rglMatrixIdentity4f(m1);
	rglVectorCopy3f(&f, v2);
	rglVectorSub3f(&f,v1);
	rglVectorNormalize3f(&f);
	rglVectorCopy3f(&up, v3);
	rglVectorNormalize3f(&up);
	rglVectorCross3f(&s,f,up);
	rglVectorNormalize3f(&s);
	rglVectorCross3f(&u,s,f);
	rglVectorNormalize3f(&u);
	m1[0] = s.x; m1[4] = s.y; m1[8] = s.z; m1[12] = 0.0;
    m1[1] = u.x; m1[5] = u.y; m1[9] = u.z; m1[13] = 0.0;
    m1[2] = -f.x; m1[6] = -f.y; m1[10] = -f.z; m1[14] = 0.0;
    m1[3] = 0.0; m1[7] = 0.0; m1[11] = 0.0; m1[15] = 1.0;
    rglTranslatef(m1,-v1.x,-v1.y,-v1.z);
    rglMatrixMultiply4f(dest,m1);
	return 1;
	
}

//нормал матрица для преобразования нормалей
GLint rglMatrixNormald(rglMat3d_t dest,rglMat4d_t src)
 {
	rglMatrix4ToMatrix3d(dest,src);
	rglMatrixInverse3d(dest);  
	rglMatrixTranspose3d(dest);		
	return 1;	
}

GLint rglMatrixNormalf(rglMat3f_t dest,rglMat4f_t src)
 {
	rglMatrix4ToMatrix3f(dest,src);
	rglMatrixInverse3f(dest);  
	rglMatrixTranspose3f(dest);		
	return 1;	
}

//перенести в test_lib

//вывод матрицы загруженной в память 
/*
GLint rglMatrixMemPrint4d(GLuint matrix_type, const char * header)
{
	rglMat4d_t m;	
	if (matrix_type==GL_MODELVIEW_MATRIX)
		glGetDoublev(GL_MODELVIEW_MATRIX, m);
	if (matrix_type==GL_PROJECTION_MATRIX)
		glGetDoublev(GL_PROJECTION_MATRIX, m);
	rglMatrixPrint4d(m,header);
	return 1;
}

GLint rglMatrixMemPrint4f(GLuint matrix_type, const char * header)
{
	rglMat4f_t m;	
	if (matrix_type==GL_MODELVIEW_MATRIX)
		glGetFloatv(GL_MODELVIEW_MATRIX, m);
	if (matrix_type==GL_PROJECTION_MATRIX)
		glGetFloatv(GL_PROJECTION_MATRIX, m);
	rglMatrixPrint4f(m,header);
	return 1;
}


//получение матрицы из памяти
GLint rglGetMatrixMem4d(GLuint matrix_type, rglMat4d_t dest)
{
	if (matrix_type==GL_MODELVIEW_MATRIX)
		glGetDoublev(GL_MODELVIEW_MATRIX, dest);
	if (matrix_type==GL_PROJECTION_MATRIX)
		glGetDoublev(GL_PROJECTION_MATRIX, dest);	
	return 1;
}

GLint rglGetMatrixMem4f(GLuint matrix_type, rglMat4f_t dest)
{
	if (matrix_type==GL_MODELVIEW_MATRIX)
		glGetFloatv(GL_MODELVIEW_MATRIX, dest);
	if (matrix_type==GL_PROJECTION_MATRIX)
		glGetFloatv(GL_PROJECTION_MATRIX, dest);	
	return 1;
}
*/
