#include <sys/syscall.h>
#include <unistd.h>
#include "measurements.h"

long slob_get_total_alloc_mem(void){
	return( syscall(__NR_slob_get_total_alloc_mem));
}
