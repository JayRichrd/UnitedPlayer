//
// Created by yanxi on 2019/9/1.
//

#ifndef MANCHESTERUNITEDPLAYER_XPARAMETER_H
#define MANCHESTERUNITEDPLAYER_XPARAMETER_H

//todo 为什么不引用头文件而这样写？
struct AVCodecParameters;

class XParameter {
public:
    AVCodecParameters *parameters = 0;
};


#endif //MANCHESTERUNITEDPLAYER_XPARAMETER_H
