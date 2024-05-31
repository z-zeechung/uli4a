/*
����һ�����ܴ������֣�����Э���û�����һ��C���Կ��<string.h>�������������¿��õĺ�����
	void* malloc(size_t);
	void* memcpy(void*, const void*, size_t);
	void free(void*);
�����������������д��int memcmp(const void *, const void *, size_t);��������
*/

# ifndef H_ULI4A_STRING
# define H_ULI4A_STRING

	# include <stddef.h>
	# include <uli4a/mem.h>
	
	// NULL defined in <stddef.h>
	
	// size_t defined in <stddef.h>
	
	// TODO: locale_t
	
	// �����ڴ棬���ҵ�ָ���ַ�ʱ��ֹ
	# define memccpy(a, b, i, size) uli4a_memccpy(a, b, i, size)
	extern void* uli4a_memccpy(void *, const void *, int, size_t);
	
	// �����ֽ�
	# define memchr(a, i, size) uli4a_memchr(a, i, size)
	extern void* uli4a_memchr(const void *, int, size_t);
	
	// �Ƚ��ڴ�����
	# define memcmp(a, b, size) uli4a_memcmp(a, b, size) 
	extern int uli4a_memcmp(const void *, const void *, size_t);
	
	// �����ڴ�
	// memcpy defined in <uli4a/mem.h>

# endif