//
// Created by yanxi on 2019/9/1.
//

#ifndef MANCHESTERUNITEDPLAYER_FFDECODE_H
#define MANCHESTERUNITEDPLAYER_FFDECODE_H


#include "XParameter.h"
#include "IDecode.h"

struct AVCodecContext;

class FFDecode :public IDecode{
public:
    //打开解码器
    virtual bool Open(XParameter xParameter);
    //Future模式
    virtual bool SendPacket(XData pkt);
    //从线程中获取解码结果
    virtual XData RecvFrame();

protected:
    AVCodecContext *codecContext = 0;
    AVFrame *avFrame = 0;
};


#endif //MANCHESTERUNITEDPLAYER_FFDECODE_H
