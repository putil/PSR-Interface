
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * Describes a logger instance.
 *
 * The message MUST be a string or object implementing __toString().
 *
 * The message MAY contain placeholders in the form: {foo} where foo
 * will be replaced by the context data in key "foo".
 *
 * The context array can contain arbitrary data. The only assumption that
 * can be made by implementors is that if an Exception instance is given
 * to produce a stack trace, it MUST be in a key named "exception".
 *
 * See https://github.com/php-fig/fig-standards/blob/master/accepted/PSR-3-logger-interface.md
 * for the full interface specification.
 */
ZEPHIR_INIT_CLASS(Psr_Log_LoggerInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Log, LoggerInterface, psr, log_loggerinterface, psr_log_loggerinterface_method_entry);

	return SUCCESS;

}

/**
 * System is unusable.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, emergency);

/**
 * Action must be taken immediately.
 *
 * Example: Entire website down, database unavailable, etc. This should
 * trigger the SMS alerts and wake you up.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, alert);

/**
 * Critical conditions.
 *
 * Example: Application component unavailable, unexpected exception.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, critical);

/**
 * Runtime errors that do not require immediate action but should typically
 * be logged and monitored.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, error);

/**
 * Exceptional occurrences that are not errors.
 *
 * Example: Use of deprecated APIs, poor use of an API, undesirable things
 * that are not necessarily wrong.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, warning);

/**
 * Normal but significant events.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, notice);

/**
 * Interesting events.
 *
 * Example: User logs in, SQL logs.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, info);

/**
 * Detailed debug information.
 *
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, debug);

/**
 * Logs with an arbitrary level.
 *
 * @param mixed  level
 * @param string message
 * @param array  context
 *
 * @return null
 */
ZEPHIR_DOC_METHOD(Psr_Log_LoggerInterface, log);

