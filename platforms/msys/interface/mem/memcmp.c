int uli4a_memcmp(const void *vl, const void *vr, unsigned int n)
{
    const unsigned char *left = (const unsigned char *)vl;
    const unsigned char *right = (const unsigned char *)vr;
    unsigned i=0;
    for(;i<n;i++){
    	if(left[i]<right[i]) return -1;
    	if(left[i]>right[i]) return 1;
    }
    return 0;
}