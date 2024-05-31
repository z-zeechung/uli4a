/*
你是一个智能代码助手，正在协助用户开发一个C语言库的<string.h>。现在你有如下可用的函数：
	void* malloc(size_t);
	void* memcpy(void*, const void*, size_t);
	void free(void*);
请基于上述函数，编写“int memcmp(const void *, const void *, size_t);”函数。
*/

# ifndef H_ULI4A_STRING
# define H_ULI4A_STRING

	# include <stddef.h>
	# include <uli4a/mem.h>
	
	// NULL defined in <stddef.h>
	
	// size_t defined in <stddef.h>
	
	// TODO: locale_t
	
	// 复制内存，在找到指定字符时终止
	# define memccpy(a, b, i, size) uli4a_memccpy(a, b, i, size)
	extern void* uli4a_memccpy(void *, const void *, int, size_t);
	
	// 查找字节
	# define memchr(a, i, size) uli4a_memchr(a, i, size)
	extern void* uli4a_memchr(const void *, int, size_t);
	
	// 比较内存内容
	# define memcmp(a, b, size) uli4a_memcmp(a, b, size) 
	extern int uli4a_memcmp(const void *, const void *, size_t);
	
	// 拷贝内存
	// memcpy defined in <uli4a/mem.h>

# endif