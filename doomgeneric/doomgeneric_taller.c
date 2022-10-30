#include <stddef.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/stat.h>

#include "doomkeys.h"
#include "doomgeneric.h"
#include "m_argv.h"

void DG_Init() {}

void DG_DrawFrame()
{
	//TODO
	//DG_ScreenBuffer
}

void DG_SleepMs(uint32_t ms)
{
	//TODO
}

uint32_t DG_GetTicksMs()
{
	//TODO
	return 0;
}

int DG_GetKey(int *pressed, unsigned char *doomKey)
{
	//TODO
	return 0;
}

void DG_SetWindowTitle(const char *title)
{
	(void)title;
}

/* exit.c:(.text.exit+0x2c): undefined reference to `_exit'
 * <artificial>:(.text+0x56b0): undefined reference to `mkdir'
 * fstatr.c:(.text._fstat_r+0x1c): undefined reference to `_fstat'
 * openr.c:(.text._open_r+0x24): undefined reference to `_open'
 * sbrkr.c:(.text._sbrk_r+0x18): undefined reference to `_sbrk'
 * unlinkr.c:(.text._unlink_r+0x18): undefined reference to `_unlink'
 * writer.c:(.text._write_r+0x24): undefined reference to `_write'
 * closer.c:(.text._close_r+0x18): undefined reference to `_close'
 * isattyr.c:(.text._isatty_r+0x18): undefined reference to `_isatty'
 * linkr.c:(.text._link_r+0x1c): undefined reference to `_link'
 * lseekr.c:(.text._lseek_r+0x24): undefined reference to `_lseek'
 * readr.c:(.text._read_r+0x24): undefined reference to `_read'
 * abort.c:(.text.abort+0x10): undefined reference to `_exit'
 * signalr.c:(.text._kill_r+0x1c): undefined reference to `_kill'
 * signalr.c:(.text._getpid_r+0x4): undefined reference to `_getpid'
 */

void __attribute__((noreturn)) _exit(int status)
{
	(void)status;
	while (1);
}

int mkdir(const char *path, mode_t mode)
{
	return -1;
}

int _fstat(int fd, struct stat *statbuf)
{
	return -1;
}

int _open(const char *name, int flags)
{
	return -1;
}

void *_sbrk(intptr_t increment)
{
	return NULL;
}

int _unlink(const char *name)
{
	return -1;
}

ssize_t _write(int fd, const void *buf, size_t count)
{
	return -1;
}

int _close(int fd)
{
	return -1;
}

int _isatty(int fd)
{
	return 0;
}

int _link(const char *old, const char *new)
{
	return -1;
}

off_t _lseek(int fd, off_t offset, int whence)
{
	return (off_t) -1;
}

ssize_t _read(int fd, void *buf, size_t count)
{
	return -1;
}

int _kill(pid_t pid, int sig)
{
	return -1;
}

pid_t _getpid(void)
{
	return 1;
}
