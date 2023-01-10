//---------------------------------------------------------------------------
#ifndef rmqsMutexH
#define rmqsMutexH
//---------------------------------------------------------------------------
#include <stdint.h>
//---------------------------------------------------------------------------
#ifdef __WIN32__
#include <windows.h>
#else
#include <pthread.h>
#endif
//---------------------------------------------------------------------------
typedef struct
{
#ifdef __WIN32__
    CRITICAL_SECTION CS;
#else
    pthread_mutex_t mutex;
#endif
}
rmqsMutex_t;
//---------------------------------------------------------------------------
rmqsMutex_t * rmqsMutexCreate(void);
void rmqsMutexDestroy(rmqsMutex_t *Mutex);
void rmqsMutexLock(rmqsMutex_t *Mutex);
void rmqsMutexUnlock(rmqsMutex_t *Mutex);
uint8_t rmqsMutexTryLock(rmqsMutex_t *Mutex);
//---------------------------------------------------------------------------
#endif
//--------------------------------------------------------------------------
