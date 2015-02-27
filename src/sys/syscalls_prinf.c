/*
 * syscalls_prinf.c
 *
 *  Created on: 10/gen/2015
 *      Author: clone
 */

// https://sites.google.com/site/stm32discovery/open-source-development-with-the-stm32-discovery/getting-newlib-to-work-with-stm32-and-code-sourcery-lite-eabi

#include <sys/unistd.h>
#include <errno.h>
//#include <stm32f4xx_usart.h>

#undef errno
extern int errno;

// usa la USART2
#define STDUSART USART2

/*
 read
 Read a character to a file. `libc' subroutines will use this system routine for input from all files, including stdin
 Returns -1 on error or blocks until the number of characters have been read.
 */
int _read(int file, char *ptr, int len) {
	return 0;
//    int n;
//    int num = 0;
//    switch (file) {
//    case STDIN_FILENO:
//        for (n = 0; n < len; n++) {
//#if   STDIN_USART == 1
//            while ((USART1->SR & USART_FLAG_RXNE) == (uint16_t)RESET) {}
//            char c = (char)(USART1->DR & (uint16_t)0x01FF);
//#elif STDIN_USART == 2
//            while ((USART2->SR & USART_FLAG_RXNE) == (uint16_t) RESET) {}
//            char c = (char) (USART2->DR & (uint16_t) 0x01FF);
//#elif STDIN_USART == 3
//            while ((USART3->SR & USART_FLAG_RXNE) == (uint16_t)RESET) {}
//            char c = (char)(USART3->DR & (uint16_t)0x01FF);
//#endif
//            *ptr++ = c;
//            num++;
//        }
//        break;
//    default:
//        errno = EBADF;
//        return -1;
//    }
//    return num;
}

/*
 write
 Write a character to a file. `libc' subroutines will use this system routine for output to all files, including stdout
 Returns -1 on error or number of bytes sent
 */
int _write(int file, char *ptr, int len) {
return 0;
//	unsigned int n;
//	switch (file) {
//	case STDOUT_FILENO: /*stdout*/
//	case STDERR_FILENO: /* stderr */
//		for (n = 0; n < len; n++) {
//			while ((STDUSART->SR & USART_FLAG_TC) == (uint16_t)RESET) {}
//			STDUSART->DR = (*ptr++ & (uint16_t)0x01FF);
//		}
//		break;
//	default:
//		errno = EBADF;
//		return -1;
//	}
//
//	return len;





//    int n;
//    switch (file) {
//    case STDOUT_FILENO: /*stdout*/
//        for (n = 0; n < len; n++) {
//#if STDOUT_USART == 1
//            while ((USART1->SR & USART_FLAG_TC) == (uint16_t)RESET) {}
//            USART1->DR = (*ptr++ & (uint16_t)0x01FF);
//#elif  STDOUT_USART == 2
//            while ((USART2->SR & USART_FLAG_TC) == (uint16_t) RESET) {
//            }
//            USART2->DR = (*ptr++ & (uint16_t) 0x01FF);
//#elif  STDOUT_USART == 3
//            while ((USART3->SR & USART_FLAG_TC) == (uint16_t)RESET) {}
//            USART3->DR = (*ptr++ & (uint16_t)0x01FF);
//#endif
//        }
//        break;
//    case STDERR_FILENO: /* stderr */
//        for (n = 0; n < len; n++) {
//#if STDERR_USART == 1
//            while ((USART1->SR & USART_FLAG_TC) == (uint16_t)RESET) {}
//            USART1->DR = (*ptr++ & (uint16_t)0x01FF);
//#elif  STDERR_USART == 2
//            while ((USART2->SR & USART_FLAG_TC) == (uint16_t) RESET) {
//            }
//            USART2->DR = (*ptr++ & (uint16_t) 0x01FF);
//#elif  STDERR_USART == 3
//            while ((USART3->SR & USART_FLAG_TC) == (uint16_t)RESET) {}
//            USART3->DR = (*ptr++ & (uint16_t)0x01FF);
//#endif
//        }
//        break;
//    default:
//        errno = EBADF;
//        return -1;
//    }
//    return len;
}


