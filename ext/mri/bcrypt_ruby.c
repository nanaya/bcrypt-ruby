#include <ow-crypt.h>

char *bcrypt_ruby_crypt_ra(const char *key, const char *setting,
    void **data, int *size)
{
    return crypt_ra(key, setting, data, size);
}
char *bcrypt_ruby_crypt_gensalt_ra(const char *prefix, unsigned long count,
    const char *input, int size)
{
    return crypt_gensalt_ra(prefix, count, input, size);
}
