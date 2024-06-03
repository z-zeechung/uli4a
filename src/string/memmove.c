#include <string.h>

void *memmove(void *dest, const void *src, size_t n) {
    if (n == 0 || dest == src) {
        return dest;
    }

    void *ret = dest;

    // If the destination and source regions do not overlap, use memcpy directly
    if ((char *) dest < (char *) src || (char *) dest >= ((char *) src + n)) {
        memcpy(dest, src, n);
    } else {
        // If the destination and source regions overlap, use a custom copying method
        char *d = (char *) dest;
        const char *s = (const char *) src;

        if ((char *) dest < (char *) src) {
            // The destination region is after the source region
            // Copy the source region to the destination region
            while (n--) {
                *d++ = *s++;
            }
        } else {
            // The destination region is before the source region
            // Copy the source region in reverse order to the destination region
            d += n;
            s += n;
            while (n--) {
                *--d = *--s;
            }
        }
    }

    return ret;
}