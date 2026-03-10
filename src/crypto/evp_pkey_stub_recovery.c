/*
 * EVP_PKEY_from_keystore stub for TWRP recovery.
 * The Android keystore service is unavailable in recovery; always return NULL.
 */
#include <openssl/evp.h>

EVP_PKEY *EVP_PKEY_from_keystore(const char *key_id)
{
    (void)key_id;
    return NULL;
}
