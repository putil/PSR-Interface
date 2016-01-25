
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


/**
 * This Logger can be used to avoid conditional log calls.
 *
 * Logging should always be optional, and if no logger is provided to your
 * library creating a NullLogger instance to have something to throw logs at
 * is a good way to avoid littering your code with `if ($this->logger) { }`
 * blocks.
 */
ZEPHIR_INIT_CLASS(Psr_Log_NullLogger) {

	ZEPHIR_REGISTER_CLASS_EX(Psr\\Log, NullLogger, psr, log_nulllogger, psr_log_abstractlogger_ce, psr_log_nulllogger_method_entry, 0);

	return SUCCESS;

}

/**
 * Logs with an arbitrary level.
 *
 * @param mixed  $level
 * @param string $message
 * @param array  $context
 *
 * @return null
 */
PHP_METHOD(Psr_Log_NullLogger, log) {

	zval *context = NULL;
	zval *level, *message, *context_param = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &level, &message, &context_param);

	if (!context_param) {
		ZEPHIR_INIT_VAR(context);
		array_init(context);
	} else {
		zephir_get_arrval(context, context_param);
	}



}

