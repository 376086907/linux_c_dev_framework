/* 
 * 本软件为免费、开源软件。
 * 本软件的版权(包括源码及二进制发布版本)归一切公众所有。
 * 您可以自由使用、传播本软件。
 * 您也可以以任何形式、任何目的使用本软件(包括源码及二进制发布版本)，而不受任何版权限制。
 * =====================
 * 作者: 孙明保
 * 邮箱: sunmingbao@126.com
 */

#ifndef  __TIMER_UTILS_H__
#define  __TIMER_UTILS_H__
#include <signal.h>
#include <time.h>

int create_posix_timer(timer_t *timerid, void *timer_handler, int sec, int nano_sec);
void itimer_init(int s, int us);
#endif

