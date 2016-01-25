
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Describes a logger-aware instance.
 */
ZEPHIR_INIT_CLASS(Psr_Log_LoggerAwareInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Log, LoggerAwareInterface, psr, log_loggerawareinterface, psr_log_loggerawareinterface_method_entry);

	return SUCCESS;

}

/**
 * Sets a logger instance on the object.
 *
 * @param LoggerInterface $logger
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerAwareInterface, setLogger);

