//
// Created by yanxi on 2019/8/25.
//

#ifndef MANCHESTERUNITEDPLAYER_XLOG_H
#define MANCHESTERUNITEDPLAYER_XLOG_H


/**
 * 日志打印器接口类
 */
class XLog {

};
#ifdef ANDROID
#include <android/log.h>
//#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,"ManchesterUnitedPlayerDemo",__VA_ARGS__)
//#define LOGDT(...) __android_log_print(ANDROID_LOG_DEBUG,"texture",__VA_ARGS__)
//#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,"ManchesterUnitedPlayerDemo",__VA_ARGS__)
//#define LOGE(...) __android_log_print(ANDROID_LOG_INFO,"ManchesterUnitedPlayerDemo",__VA_ARGS__)
//#define LOGA(...) __android_log_print(ANDROID_LOG_ERROR,"SLAudioPlay",__VA_ARGS__)
//#define LOGS(...) __android_log_print(ANDROID_LOG_ERROR,"seek debug",__VA_ARGS__)

#define LOGD(...) ""
#define LOGDT(...) ""
#define LOGI(...) ""
#define LOGE(...) ""
#define LOGA(...) ""
#define LOGS(...) ""
#define LOGLOCK(...) __android_log_print(ANDROID_LOG_ERROR,"lock debug",__VA_ARGS__)
#else

#endif


#endif //MANCHESTERUNITEDPLAYER_XLOG_H
