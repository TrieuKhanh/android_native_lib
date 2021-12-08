#include <prim.hpp>
#include <android/log.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "main-libuser", __VA_ARGS__))
#define LOG_TAG __function__

int main(int argc, char ** argv)
{
	LOGI("argc: %i", argc);
	for (size_t i=0; i<argc; i++)
	{
		LOGI("arg: %s", *(argv+i));
	}
	tung::primitive::show_text();
}
