PHP_ARG_ENABLE(psr, whether to enable psr, [ --enable-psr   Enable Psr])

if test "$PHP_PSR" = "yes"; then

	

	if ! test "x" = "x"; then
		PHP_EVAL_LIBLINE(, PSR_SHARED_LIBADD)
	fi

	AC_DEFINE(HAVE_PSR, 1, [Whether you have Psr])
	psr_sources="psr.c kernel/main.c kernel/memory.c kernel/exception.c kernel/hash.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/extended/array.c kernel/string.c kernel/fcall.c kernel/extended/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/math.c kernel/concat.c kernel/variables.c kernel/filter.c kernel/iterator.c kernel/time.c kernel/exit.c psr/http/message/messageinterface.zep.c
	psr/log/loggerinterface.zep.c
	psr/cache/cacheexception.zep.c
	psr/http/message/requestinterface.zep.c
	psr/log/abstractlogger.zep.c
	psr/cache/cacheiteminterface.zep.c
	psr/cache/cacheitempoolinterface.zep.c
	psr/cache/invalidargumentexception.zep.c
	psr/http/message/responseinterface.zep.c
	psr/http/message/serverrequestinterface.zep.c
	psr/http/message/streaminterface.zep.c
	psr/http/message/uploadedfileinterface.zep.c
	psr/http/message/uriinterface.zep.c
	psr/log/invalidargumentexception.zep.c
	psr/log/loglevel.zep.c
	psr/log/loggerawareinterface.zep.c
	psr/log/nulllogger.zep.c "
	PHP_NEW_EXTENSION(psr, $psr_sources, $ext_shared,, )
	PHP_SUBST(PSR_SHARED_LIBADD)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([psr], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([psr], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS

	PHP_INSTALL_HEADERS([ext/psr], [php_PSR.h])

fi
