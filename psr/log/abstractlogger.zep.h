
extern zend_class_entry *psr_log_abstractlogger_ce;

ZEPHIR_INIT_CLASS(Psr_Log_AbstractLogger);

PHP_METHOD(Psr_Log_AbstractLogger, emergency);
PHP_METHOD(Psr_Log_AbstractLogger, alert);
PHP_METHOD(Psr_Log_AbstractLogger, critical);
PHP_METHOD(Psr_Log_AbstractLogger, error);
PHP_METHOD(Psr_Log_AbstractLogger, warning);
PHP_METHOD(Psr_Log_AbstractLogger, notice);
PHP_METHOD(Psr_Log_AbstractLogger, info);
PHP_METHOD(Psr_Log_AbstractLogger, debug);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_emergency, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_alert, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_critical, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_error, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_warning, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_notice, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_info, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_abstractlogger_debug, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_log_abstractlogger_method_entry) {
	PHP_ME(Psr_Log_AbstractLogger, emergency, arginfo_psr_log_abstractlogger_emergency, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, alert, arginfo_psr_log_abstractlogger_alert, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, critical, arginfo_psr_log_abstractlogger_critical, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, error, arginfo_psr_log_abstractlogger_error, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, warning, arginfo_psr_log_abstractlogger_warning, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, notice, arginfo_psr_log_abstractlogger_notice, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, info, arginfo_psr_log_abstractlogger_info, ZEND_ACC_PUBLIC)
	PHP_ME(Psr_Log_AbstractLogger, debug, arginfo_psr_log_abstractlogger_debug, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
