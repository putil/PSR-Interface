
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "psr.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *psr_http_message_messageinterface_ce;
zend_class_entry *psr_log_loggerinterface_ce;
zend_class_entry *psr_cache_cacheexception_ce;
zend_class_entry *psr_http_message_requestinterface_ce;
zend_class_entry *psr_cache_cacheiteminterface_ce;
zend_class_entry *psr_cache_cacheitempoolinterface_ce;
zend_class_entry *psr_cache_invalidargumentexception_ce;
zend_class_entry *psr_http_message_responseinterface_ce;
zend_class_entry *psr_http_message_serverrequestinterface_ce;
zend_class_entry *psr_http_message_streaminterface_ce;
zend_class_entry *psr_http_message_uploadedfileinterface_ce;
zend_class_entry *psr_http_message_uriinterface_ce;
zend_class_entry *psr_log_loggerawareinterface_ce;
zend_class_entry *psr_log_abstractlogger_ce;
zend_class_entry *psr_log_invalidargumentexception_ce;
zend_class_entry *psr_log_loglevel_ce;
zend_class_entry *psr_log_nulllogger_ce;

ZEND_DECLARE_MODULE_GLOBALS(psr)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(psr)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Psr_Http_Message_MessageInterface);
	ZEPHIR_INIT(Psr_Log_LoggerInterface);
	ZEPHIR_INIT(Psr_Cache_CacheException);
	ZEPHIR_INIT(Psr_Http_Message_RequestInterface);
	ZEPHIR_INIT(Psr_Cache_CacheItemInterface);
	ZEPHIR_INIT(Psr_Cache_CacheItemPoolInterface);
	ZEPHIR_INIT(Psr_Cache_InvalidArgumentException);
	ZEPHIR_INIT(Psr_Http_Message_ResponseInterface);
	ZEPHIR_INIT(Psr_Http_Message_ServerRequestInterface);
	ZEPHIR_INIT(Psr_Http_Message_StreamInterface);
	ZEPHIR_INIT(Psr_Http_Message_UploadedFileInterface);
	ZEPHIR_INIT(Psr_Http_Message_UriInterface);
	ZEPHIR_INIT(Psr_Log_LoggerAwareInterface);
	ZEPHIR_INIT(Psr_Log_AbstractLogger);
	ZEPHIR_INIT(Psr_Log_InvalidArgumentException);
	ZEPHIR_INIT(Psr_Log_LogLevel);
	ZEPHIR_INIT(Psr_Log_NullLogger);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(psr)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_psr_globals *psr_globals TSRMLS_DC)
{
	psr_globals->initialized = 0;

	/* Memory options */
	psr_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	psr_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	psr_globals->cache_enabled = 1;

	/* Recursive Lock */
	psr_globals->recursive_lock = 0;

	/* Static cache */
	memset(psr_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

static PHP_RINIT_FUNCTION(psr)
{

	zend_psr_globals *psr_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(psr_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(psr_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(psr)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(psr)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PSR_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PSR_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PSR_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PSR_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_PSR_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(psr)
{
	php_zephir_init_globals(psr_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(psr)
{

}


zend_function_entry php_psr_functions[] = {
ZEND_FE_END

};

zend_module_entry psr_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_PSR_EXTNAME,
	php_psr_functions,
	PHP_MINIT(psr),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(psr),
#else
	NULL,
#endif
	PHP_RINIT(psr),
	PHP_RSHUTDOWN(psr),
	PHP_MINFO(psr),
	PHP_PSR_VERSION,
	ZEND_MODULE_GLOBALS(psr),
	PHP_GINIT(psr),
	PHP_GSHUTDOWN(psr),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_PSR
ZEND_GET_MODULE(psr)
#endif
