
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Exception interface for all exceptions thrown by an Implementing Library.
 */
ZEPHIR_INIT_CLASS(Psr_Cache_CacheException) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Cache, CacheException, psr, cache_cacheexception, NULL);

	return SUCCESS;

}

