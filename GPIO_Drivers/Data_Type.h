#ifndef DATA_TYPE
#define DATA_TYPE

/*
typedef unsigned char uint8_t ;
typedef char int8_t ;
typedef unsigned short uint16_t ;
typedef short int16_t ;
typedef unsigned long uint32_t ;
typedef long int32_t ;
*/
typedef enum {true=1, false=0} bool;
typedef float                 float32_t;
typedef double                float64_t;



/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)



#endif

