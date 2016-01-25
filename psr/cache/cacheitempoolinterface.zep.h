
extern zend_class_entry *psr_cache_cacheitempoolinterface_ce;

ZEPHIR_INIT_CLASS(Psr_Cache_CacheItemPoolInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_getitem, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_getitems, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, keys, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_hasitem, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_deleteitem, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_deleteitems, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, keys, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_save, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, item, Psr\\Cache\\CacheItemInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheitempoolinterface_savedeferred, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, item, Psr\\Cache\\CacheItemInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_cache_cacheitempoolinterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, getItem, arginfo_psr_cache_cacheitempoolinterface_getitem)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, getItems, arginfo_psr_cache_cacheitempoolinterface_getitems)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, hasItem, arginfo_psr_cache_cacheitempoolinterface_hasitem)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, clear, NULL)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, deleteItem, arginfo_psr_cache_cacheitempoolinterface_deleteitem)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, deleteItems, arginfo_psr_cache_cacheitempoolinterface_deleteitems)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, save, arginfo_psr_cache_cacheitempoolinterface_save)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, saveDeferred, arginfo_psr_cache_cacheitempoolinterface_savedeferred)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemPoolInterface, commit, NULL)
	PHP_FE_END
};
