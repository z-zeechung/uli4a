# include <string.h>

size_t strcspn(const char *s1, const char *s2) {
    // There won't be a platform where char is not 8 bits... should be?
    unsigned char lookup[1 << 8] = {0}; // Initialize the lookup table
    const char *s2_end = s2 + strlen(s2); // Calculate the end position of s2
    
    // Build the lookup table to quickly check for character existence in s2
    for (; s2 != s2_end; ++s2) {
        lookup[(unsigned char)*s2] = 1; // Mark the presence of the character in the lookup table
    }

    // Traverse s1 to find the first character that exists in s2
    const char *p1 = s1;
    do {
        if (lookup[(unsigned char)*p1]) { // If the current character in s1 exists in s2 (based on the lookup table)
            return p1 - s1; // Return the index of the first matching character in s1
        }
    } while (*++p1); // Move to the next character in s1 and continue checking until the end

    // If no matching character is found in s1, return the length of s1
    // Note: At this point, p1 points to the terminating null character of s1, so p1 - s1 represents the length of s1
    return p1 - s1; // Return the length of s1 without subtracting 1 (as originally incorrect)
}
