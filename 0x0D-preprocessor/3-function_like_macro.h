#ifndef ABS_H
#define ABS_H
#if ((x) < 0)
#define ABS(x) ((x) * -1)
#elif ((x) >= 0)
#define ABS(x) ((x) * 1)
#endif /*(x < 0)*/
#endif /*ABS_H*/
