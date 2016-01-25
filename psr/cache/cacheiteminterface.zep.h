
extern zend_class_entry *psr_cache_cacheiteminterface_ce;

ZEPHIR_INIT_CLASS(Psr_Cache_CacheItemInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheiteminterface_set, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheiteminterface_expiresat, 0, 0, 1)
	ZEND_ARG_INFO(0, expiration)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_psr_cache_cacheiteminterface_expiresafter, 0, 0, 1)
	ZEND_ARG_INFO(0, time)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(psr_cache_cacheiteminterface_method_entry) {
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, getKey, NULL)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, get, NULL)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, isHit, NULL)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, set, arginfo_psr_cache_cacheiteminterface_set)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, expiresAt, arginfo_psr_cache_cacheiteminterface_expiresat)
	PHP_ABSTRACT_ME(Psr_Cache_CacheItemInterface, expiresAfter, arginfo_psr_cache_cacheiteminterface_expiresafter)
	PHP_FE_END
};
