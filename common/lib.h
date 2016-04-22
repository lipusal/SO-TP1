/* 
 * File:   lib.h
 * Author: juan_ (for now?)
 *
 * Common, general-purpose functions used in various places.
 */

#ifndef LIB_H
#define LIB_H

#include <stddef.h>

/**
 * Reads from the specified file descriptor to <i>dest</i>, ensuring to read
 * exactly <i>bytes</i> bytes.
 * 
 * @param void* dest Where to store the read bytes.
 * @param int bytes The number of bytes to read.
 * @param int fd File descriptor from which to read.
 * @return int 1 If the read was completed successfully or 0 on error.
 */
int ensureRead(void *dest, size_t bytes, int fd);

/**
 * Writes to the specified file descriptor from <i>dest</i>, ensuring to write
 * exactly <i>bytes</i> bytes.
 * 
 * @param void* src Where to read the bytes to write.
 * @param int bytes The number of bytes to write.
 * @param int fd File descriptor to write to.
 * @return int 1 If the write was completed successfully or 0 on error.
 */
int ensureWrite(const void *src, size_t bytes, int fd);

#endif /* LIB_H */

