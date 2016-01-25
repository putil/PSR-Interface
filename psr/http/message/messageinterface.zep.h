
extern zend_class_entry *psr_http_message_messageinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_MessageInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_withprotocolversion, 0, 0, 1)
	ZEND_ARG_INFO(0, version)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_hasheader, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_getheaderline, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_withheader, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_withaddedheader, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_withoutheader, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_messageinterface_withbody, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, body, Psr\\Http\\Message\\StreamInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_messageinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, getProtocolVersion, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, withProtocolVersion, arginfo_psr_http_message_messageinterface_withprotocolversion)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, getHeaders, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, hasHeader, arginfo_psr_http_message_messageinterface_hasheader)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, getHeader, arginfo_psr_http_message_messageinterface_getheader)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, getHeaderLine, arginfo_psr_http_message_messageinterface_getheaderline)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, withHeader, arginfo_psr_http_message_messageinterface_withheader)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, withAddedHeader, arginfo_psr_http_message_messageinterface_withaddedheader)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, withoutHeader, arginfo_psr_http_message_messageinterface_withoutheader)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, getBody, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_MessageInterface, withBody, arginfo_psr_http_message_messageinterface_withbody)
	PHP_FE_END
};
