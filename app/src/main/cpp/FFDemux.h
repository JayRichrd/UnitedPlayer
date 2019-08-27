//
// Created by yanxi on 2019/8/25.
//

#ifndef MANCHESTERUNITEDPLAYER_FFDEMUX_H
#define MANCHESTERUNITEDPLAYER_FFDEMUX_H


#include "XData.h"
#include "IDemux.h"
struct AVFormatContext;

class FFDemux :public IDemux{

public:
    //打开文件或者流媒体 rmtp rtsp http
    virtual bool Open(const char *url);

    //读取一帧数据（注意防止内存泄漏）
    virtual XData Read();

    FFDemux();

private:

    AVFormatContext *ic = 0;
};


#endif //MANCHESTERUNITEDPLAYER_FFDEMUX_H
