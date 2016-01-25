
extern zend_class_entry *psr_http_message_streaminterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_StreamInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_streaminterface_seek, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
	ZEND_ARG_INFO(0, whence)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_streaminterface_write, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_streaminterface_read, 0, 0, 1)
	ZEND_ARG_INFO(0, length)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_streaminterface_getmetadata, 0, 0, 0)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_streaminterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, __toString, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, close, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, detach, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, getSize, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, tell, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, eof, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, isSeekable, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, seek, arginfo_psr_http_message_streaminterface_seek)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, rewind, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, isWritable, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, write, arginfo_psr_http_message_streaminterface_write)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, isReadable, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, read, arginfo_psr_http_message_streaminterface_read)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, getContents, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_StreamInterface, getMetadata, arginfo_psr_http_message_streaminterface_getmetadata)
	PHP_FE_END
};
