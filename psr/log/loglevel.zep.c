
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


/**
 * Describes log levels.
 */
ZEPHIR_INIT_CLASS(Psr_Log_LogLevel) {

	ZEPHIR_REGISTER_CLASS(Psr\\Log, LogLevel, psr, log_loglevel, NULL, 0);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("EMERGENCY"), "emergency" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("ALERT"), "alert" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("CRITICAL"), "critical" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("ERROR"), "error" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("WARNING"), "warning" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("NOTICE"), "notice" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("INFO"), "info" TSRMLS_CC);

	zend_declare_class_constant_string(psr_log_loglevel_ce, SL("DEBUG"), "debug" TSRMLS_CC);

	return SUCCESS;

}

