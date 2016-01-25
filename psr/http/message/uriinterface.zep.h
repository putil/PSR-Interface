
extern zend_class_entry *psr_http_message_uriinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_UriInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withscheme, 0, 0, 1)
	ZEND_ARG_INFO(0, scheme)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withuserinfo, 0, 0, 1)
	ZEND_ARG_INFO(0, user)
	ZEND_ARG_INFO(0, password)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withhost, 0, 0, 1)
	ZEND_ARG_INFO(0, host)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withport, 0, 0, 1)
	ZEND_ARG_INFO(0, port)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withpath, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withquery, 0, 0, 1)
	ZEND_ARG_INFO(0, query)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uriinterface_withfragment, 0, 0, 1)
	ZEND_ARG_INFO(0, fragment)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_uriinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getScheme, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getAuthority, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getUserInfo, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getHost, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getPort, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getPath, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getQuery, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, getFragment, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withScheme, arginfo_psr_http_message_uriinterface_withscheme)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withUserInfo, arginfo_psr_http_message_uriinterface_withuserinfo)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withHost, arginfo_psr_http_message_uriinterface_withhost)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withPort, arginfo_psr_http_message_uriinterface_withport)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withPath, arginfo_psr_http_message_uriinterface_withpath)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withQuery, arginfo_psr_http_message_uriinterface_withquery)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, withFragment, arginfo_psr_http_message_uriinterface_withfragment)
	PHP_ABSTRACT_ME(Psr_Http_Message_UriInterface, __toString, NULL)
	PHP_FE_END
};
