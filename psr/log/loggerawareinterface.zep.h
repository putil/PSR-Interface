
extern zend_class_entry *psr_log_loggerawareinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Log_LoggerAwareInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_log_loggerawareinterface_setlogger, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, logger, Psr\\Log\\LoggerInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_log_loggerawareinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Log_LoggerAwareInterface, setLogger, arginfo_psr_log_loggerawareinterface_setlogger)
	PHP_FE_END
};
