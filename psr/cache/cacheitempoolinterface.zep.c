
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * CacheItemPoolInterface generates CacheItemInterface objects.
 *
 * The primary purpose of Cache\CacheItemPoolInterface is to accept a key from
 * the Calling Library and return the associated Cache\CacheItemInterface object.
 * It is also the primary point of interaction with the entire cache collection.
 * All configuration and initialization of the Pool is left up to an
 * Implementing Library.
 *
 */
ZEPHIR_INIT_CLASS(Psr_Cache_CacheItemPoolInterface) {

	ZEPHIR_REGISTER_INTERFACE(Psr\\Cache, CacheItemPoolInterface, psr, cache_cacheitempoolinterface, psr_cache_cacheitempoolinterface_method_entry);

	return SUCCESS;

}

/**
 * Returns a Cache Item representing the specified key.
 *
 * This method must always return a CacheItemInterface object, even in case of
 * a cache miss. It MUST NOT return null.
 *
 * @param string $key
 *   The key for which to return the corresponding Cache Item.
 *
 * @throws InvalidArgumentException
 *   If the $key string is not a legal value a \Psr\Cache\InvalidArgumentException
 *   MUST be thrown.
 *
 * @return CacheItemInterface
 *   The corresponding Cache Item.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, getItem);

/**
 * Returns a traversable set of cache items.
 *
 * @param array $keys
 * An indexed array of keys of items to retrieve.
 *
 * @throws InvalidArgumentException
 *   If any of the keys in $keys are not a legal value a \Psr\Cache\InvalidArgumentException
 *   MUST be thrown.
 *
 * @return array|\Traversable
 *   A traversable collection of Cache Items keyed by the cache keys of
 *   each item. A Cache item will be returned for each key, even if that
 *   key is not found. However, if no keys are specified then an empty
 *   traversable MUST be returned instead.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, getItems);

/**
 * Confirms if the cache contains specified cache item.
 *
 * Note: This method MAY avoid retrieving the cached value for performance reasons.
 * This could result in a race condition with CacheItemInterface::get(). To avoid
 * such situation use CacheItemInterface::isHit() instead.
 *
 * @param string $key
 *    The key for which to check existence.
 *
 * @throws InvalidArgumentException
 *   If the $key string is not a legal value a \Psr\Cache\InvalidArgumentException
 *   MUST be thrown.
 *
 * @return bool
 *  True if item exists in the cache, false otherwise.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, hasItem);

/**
 * Deletes all items in the pool.
 *
 * @return bool
 *   True if the pool was successfully cleared. False if there was an error.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, clear);

/**
 * Removes the item from the pool.
 *
 * @param string $key
 *   The key for which to delete
 *
 * @throws InvalidArgumentException
 *   If the $key string is not a legal value a \Psr\Cache\InvalidArgumentException
 *   MUST be thrown.
 *
 * @return bool
 *   True if the item was successfully removed. False if there was an error.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, deleteItem);

/**
 * Removes multiple items from the pool.
 *
 * @param array $keys
 *   An array of keys that should be removed from the pool.
 * @throws InvalidArgumentException
 *   If any of the keys in $keys are not a legal value a \Psr\Cache\InvalidArgumentException
 *   MUST be thrown.
 *
 * @return bool
 *   True if the items were successfully removed. False if there was an error.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, deleteItems);

/**
 * Persists a cache item immediately.
 *
 * @param CacheItemInterface $item
 *   The cache item to save.
 *
 * @return bool
 *   True if the item was successfully persisted. False if there was an error.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, save);

/**
 * Sets a cache item to be persisted later.
 *
 * @param CacheItemInterface $item
 *   The cache item to save.
 *
 * @return bool
 *   False if the item could not be queued or if a commit was attempted and failed. True otherwise.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, saveDeferred);

/**
 * Persists any deferred cache items.
 *
 * @return bool
 *   True if all not-yet-saved items were successfully saved or there were none. False otherwise.
 */
ZEPHIR_DOC_METHOD(Psr_Cache_CacheItemPoolInterface, commit);

