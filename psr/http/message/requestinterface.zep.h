
extern zend_class_entry *psr_http_message_requestinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_RequestInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_requestinterface_withrequesttarget, 0, 0, 1)
	ZEND_ARG_INFO(0, requestTarget)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_requestinterface_withmethod, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_requestinterface_withuri, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, uri, Psr\\Http\\Message\\UriInterface, 0)
	ZEND_ARG_INFO(0, preserveHost)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_requestinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, getRequestTarget, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, withRequestTarget, arginfo_psr_http_message_requestinterface_withrequesttarget)
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, getMethod, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, withMethod, arginfo_psr_http_message_requestinterface_withmethod)
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, getUri, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_RequestInterface, withUri, arginfo_psr_http_message_requestinterface_withuri)
	PHP_FE_END
};
