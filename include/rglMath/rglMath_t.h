#ifndef _MATH_TYPE_H
#define _MATH_TYPE_H
#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 
#include <string.h> 


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

//const----------------------------------------------------------------------------------------------------------------------------------
#define PI 		3.141592653589793238462643383279502884
			
#define PI2		6.283185307179586476925287
#define PI3		9.424777960769379715387930
#define PIPI	9.869604401089358618834491
#define PI_2	1.570796326794896619231321691639751442
#define PI_3	1.047197551196397746154214
#define PI_4	0.785398163397448309615660845819875721
#define E		2.718281828459045235360287471352662498
#define EPSILON 0.000001
#define EPS	0.000001
#define EPSf	0.000001
#define EPSd	0.000000000001
#define SQRT2   1.414213562373095048801688724209698079
#define SQRT3   1.7320508075688772935
#define SQRT5   2.2360679774997896964
#define SQRT7   2.6457513110645905905
#define SQRTPI  1.772453850905516027298167



# define M_El		2.718281828459045235360287471352662498L /* e */
# define M_LOG2El	1.442695040888963407359924681001892137L /* log_2 e */
# define M_LOG10El	0.434294481903251827651128918916605082L /* log_10 e */
# define M_LN2l		0.693147180559945309417232121458176568L /* log_e 2 */
# define M_LN10l	2.302585092994045684017991454684364208L /* log_e 10 */
# define M_PIl		3.141592653589793238462643383279502884L /* pi */
# define M_PI_2l	1.570796326794896619231321691639751442L /* pi/2 */
# define M_PI_4l	0.785398163397448309615660845819875721L /* pi/4 */
# define M_1_PIl	0.318309886183790671537767526745028724L /* 1/pi */
# define M_2_PIl	0.636619772367581343075535053490057448L /* 2/pi */
# define M_2_SQRTPIl	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define M_SQRT2l	1.414213562373095048801688724209698079L /* sqrt(2) */
# define M_SQRT1_2l	0.707106781186547524400844362104849039L /* 1/sqrt(2) */






#define DEG2RAD (PI / 180.0)
#define RAD2DEG (180.0 / PI)


//standart type---------------------------------------------------

struct rglVec2 {
	GLfloat x;
	GLfloat y;  
} ;
typedef struct  rglVec2  rglVec2_t;

struct rglVec3 {
    GLfloat x;
	GLfloat y;  
	GLfloat z;  
} ;
typedef struct  rglVec3  rglVec3_t;

struct rglVec4 {
   	GLfloat x;
	GLfloat y;  
	GLfloat z; 
	GLfloat w;   
} ;
typedef struct  rglVec4  rglVec4_t;


typedef  GLfloat  rglMat4_t [16];
typedef  GLfloat  rglMat3_t [9];
typedef  GLfloat  rglMat2_t [4];


//double type---------------------------------------------------


struct rglVec2d {
	GLdouble x;
	GLdouble y;  
} ;
typedef struct  rglVec2d  rglVec2d_t;

struct rglVec3d {
    	GLdouble x;
	GLdouble y;  
	GLdouble z;  
} ;
typedef struct  rglVec3d  rglVec3d_t;

struct rglVec4d {
   	GLdouble x;
	GLdouble y;  
	GLdouble z; 
	GLdouble w;   
} ;
typedef struct  rglVec4d  rglVec4d_t;

typedef  GLdouble  rglMat4d_t [16];
typedef  GLdouble  rglMat3d_t [9];
typedef  GLdouble  rglMat2d_t [4];


//float type---------------------------------------------------

struct rglVec2f {
	GLfloat x;
	GLfloat y;  
} ;
typedef struct  rglVec2f  rglVec2f_t;

struct rglVec3f {
    	GLfloat x;
	GLfloat y;  
	GLfloat z;  
} ;
typedef struct  rglVec3f  rglVec3f_t;

struct rglVec4f {
   	GLfloat x;
	GLfloat y;  
	GLfloat z; 
	GLfloat w;   
} ;
typedef struct  rglVec4f  rglVec4f_t;

typedef  GLfloat  rglMat4f_t [16];
typedef  GLfloat  rglMat3f_t [9];
typedef  GLfloat  rglMat2f_t [4];

//integer type----------------------------------------

struct rglVec2i{
	GLint x;
	GLint y;  
} ;
typedef struct  rglVec2i  rglVec2i_t;

struct rglVec3i {
    GLint x;
	GLint y;  
	GLint z;  
} ;
typedef struct  rglVec3i  rglVec3i_t;

struct rglVec4i {
   	GLint x;
	GLint y;  
	GLint z; 
	GLint w;   
} ;
typedef struct  rglVec4i  rglVec4i_t;

typedef  GLint  rglMat4i_t [16];
typedef  GLint  rglMat3i_t [9];
typedef  GLint  rglMat2i_t [4];



#endif
