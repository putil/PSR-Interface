
extern zend_class_entry *psr_http_message_uploadedfileinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Http_Message_UploadedFileInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_http_message_uploadedfileinterface_moveto, 0, 0, 1)
	ZEND_ARG_INFO(0, targetPath)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_http_message_uploadedfileinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, getStream, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, moveTo, arginfo_psr_http_message_uploadedfileinterface_moveto)
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, getSize, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, getError, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, getClientFilename, NULL)
	PHP_ABSTRACT_ME(Psr_Http_Message_UploadedFileInterface, getClientMediaType, NULL)
	PHP_FE_END
};
