
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Exception interface for invalid cache arguments.
 *
 * Any time an invalid argument is passed into a method it must throw an
 * exception class which implements Psr\Cache\InvalidArgumentException.
 */
ZEPHIR_INIT_CLASS(Psr_Cache_InvalidArgumentException) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Cache, InvalidArgumentException, psr, cache_invalidargumentexception, NULL);

	zend_class_implements(psr_cache_invalidargumentexception_ce TSRMLS_CC, 1, psr_cache_cacheexception_ce);
	return SUCCESS;

}

