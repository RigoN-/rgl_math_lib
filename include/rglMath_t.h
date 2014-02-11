#ifndef _MATH_TYPE_H
#define _MATH_TYPE_H
#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 


//const----------------------------------------------------------------------------------------------------------------------------------
#define PI 		3.14159265358979323846
#define PI2		6.283185307179586476925287
#define PI3		9.424777960769379715387930
#define PIPI	9.869604401089358618834491
#define PI_2	1.570796326794896619231322
#define PI_3	1.047197551196397746154214
#define PI_4	0.7853981633974483096156608
#define E		2.718281828459045235360287
#define EPSILON 0.000001
#define EPS		0.00001
#define SQRT2   1.4142135623730950488
#define SQRT3   1.7320508075688772935
#define SQRT5   2.2360679774997896964
#define SQRT7   2.6457513110645905905
#define SQRTPI  1.772453850905516027298167


#define DEG2RAD (PI / 180.0)
#define RAD2DEG (180.0 / PI)


#define ABS(x) (x < 0 ? -(x) : (x))
// sign(x) = 1 -> x > 0, sign(x) = -1 ->  x < 0, sign(x) = 0 ->  x = 0
#define SIGN(x) (x < 0 ? (-1) : ( x > 0 ? 1 : 0 ))
// min (a,b)
#define MIN(x,y) (x < y ? x : y)
// max (a,b)
#define MAX(x,y) (x > y ? x : y)
// clamp x to [a,b]
#define CLAMP(x,a,b) (x < a ? a : ( x > b ? b : x ))
// linear interpolation
#define LERP(a,b,t) (a + (b - a) * t)

//type------------------------------------------------------------------------------------------------------------------------------------
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void			GLvoid;
typedef signed char		GLbyte;		/* 1-byte signed */
typedef short			GLshort;	/* 2-byte signed */
typedef int				GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int				GLsizei;	/* 4-byte signed */
typedef float			GLfloat;	/* single precision float */
typedef float			GLclampf;	/* single precision float in [0,1] */
typedef double			GLdouble;	/* double precision float */
typedef double			GLclampd;	/* double precision float in [0,1] */


struct rglPoint {
	GLfloat x;
	GLfloat y;  
} ;
typedef struct  rglPoint  rglPoint_t;

struct rglVec2 {
	GLfloat x;
	GLfloat y;  
} ;
typedef struct  rglVec2  rglVec2_t;

struct rglTex2 {
   	GLfloat s;
	GLfloat t;  
} ;
typedef struct  rglTex2  rglTex2_t;

struct rglVec3 {
    GLfloat x;
	GLfloat y;  
	GLfloat z;  
} ;
typedef struct  rglVec3  rglVec3_t;

struct rglTex3 {
    GLfloat s;
	GLfloat t;  
	GLfloat r;  
} ;
typedef struct  rglTex3  rglTex3_t;

struct rglCol3 {
    GLfloat r;
	GLfloat g;  
	GLfloat b;  
} ;
typedef struct  rglCol3  rglCol3_t;


struct rglVec4 {
   	GLfloat x;
	GLfloat y;  
	GLfloat z; 
	GLfloat w;   
} ;
typedef struct  rglVec4  rglVec4_t;

struct rglCol4 {
    GLfloat r;
	GLfloat g;  
	GLfloat b; 
	GLfloat a;   
} ;
typedef struct  rglCol4  rglCol4_t;

typedef  GLfloat  rglMat4_t [16];
typedef  GLfloat  rglMat3_t [9];
typedef  GLfloat  rglMat2_t [4];







#endif
