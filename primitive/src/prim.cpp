#include "prim.hpp"
#include <android/log.h>

namespace tung { namespace primitive {

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "native-lib-primitive", __VA_ARGS__))
#define LOG_TAG __function__

void show_text()
{
	LOGI("%s", "Nam Mo A Di Da Phat");
}

}}
