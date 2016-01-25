
extern zend_class_entry *psr_http_message_responseinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_ResponseInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_responseinterface_withstatus, 0, 0, 1)
	ZEND_ARG_INFO(0, code)
	ZEND_ARG_INFO(0, reasonPhrase)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_responseinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_ResponseInterface, getStatusCode, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ResponseInterface, withStatus, arginfo_psr_http_message_responseinterface_withstatus)
	PHP_ABSTRACT_ME(Psr_Http_Message_ResponseInterface, getReasonPhrase, NULL)
	PHP_FE_END
};
