--- ../nginx-upload-module-aba1e3f34c/ngx_http_upload_module.c.orig     2016-10-31 15:40:43.325935288 +0300
+++ ../nginx-upload-module-aba1e3f34c/ngx_http_upload_module.c  2016-10-31 15:41:31.071931373 +0300
@@ -8,23 +8,13 @@
 #include <ngx_http.h>
 #include <nginx.h>

-#if (NGX_HAVE_OPENSSL_MD5_H)
 #include <openssl/md5.h>
-#else
-#include <md5.h>
-#endif

-#if (NGX_OPENSSL_MD5)
 #define  MD5Init    MD5_Init
 #define  MD5Update  MD5_Update
 #define  MD5Final   MD5_Final
-#endif

-#if (NGX_HAVE_OPENSSL_SHA1_H)
 #include <openssl/sha.h>
-#else
-#include <sha.h>
-#endif

 #define MULTIPART_FORM_DATA_STRING              "multipart/form-data"
 #define BOUNDARY_STRING                         "boundary="
