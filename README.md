# nginx-upload-module
nginx-upload-module patch nginx 1.11.2++

# Makefile

.if ${PORT_OPTIONS:MHTTP_UPLOAD}
GIT_UPLOAD_VERSION=     aba1e3f34c
GH_ACCOUNT+=    vkholodkov:upload
GH_PROJECT+=    nginx-upload-module:upload
GH_TAGNAME+=    ${GIT_UPLOAD_VERSION}:upload
CONFIGURE_ARGS+=--add-module=${WRKSRC_upload}
+EXTRA_PATCHES+= ${PATCHDIR}/ngx_http_upload_module.c.patch
+EXTRA_PATCHES+= ${PATCHDIR}/ngx_http_upload_module.config.patch
-IGNORE=        HTTP_UPLOAD: a patch requires
+#IGNORE=        HTTP_UPLOAD: a patch requires
.endif
