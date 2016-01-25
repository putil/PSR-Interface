
extern zend_class_entry *psr_http_message_serverrequestinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_ServerRequestInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withcookieparams, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, cookies, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withqueryparams, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, query, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withuploadedfiles, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, uploadedFiles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withparsedbody, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_getattribute, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, _default)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withattribute, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_serverrequestinterface_withoutattribute, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_serverrequestinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getServerParams, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getCookieParams, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withCookieParams, arginfo_psr_http_message_serverrequestinterface_withcookieparams)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getQueryParams, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withQueryParams, arginfo_psr_http_message_serverrequestinterface_withqueryparams)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getUploadedFiles, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withUploadedFiles, arginfo_psr_http_message_serverrequestinterface_withuploadedfiles)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getParsedBody, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withParsedBody, arginfo_psr_http_message_serverrequestinterface_withparsedbody)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getAttributes, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, getAttribute, arginfo_psr_http_message_serverrequestinterface_getattribute)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withAttribute, arginfo_psr_http_message_serverrequestinterface_withattribute)
	PHP_ABSTRACT_ME(Psr_Http_Message_ServerRequestInterface, withoutAttribute, arginfo_psr_http_message_serverrequestinterface_withoutattribute)
	PHP_FE_END
};
