
extern zend_class_entry *psr_log_nulllogger_ce;

ZEPHIR_INIT_CLASS(Psr_Log_NullLogger);

PHP_METHOD(Psr_Log_NullLogger, log);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_nulllogger_log, 0, 0, 2)
	ZEND_ARG_INFO(0, level)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_ARRAY_INFO(0, context, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_log_nulllogger_method_entry) {
	PHP_ME(Psr_Log_NullLogger, log, arginfo_psr_log_nulllogger_log, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
