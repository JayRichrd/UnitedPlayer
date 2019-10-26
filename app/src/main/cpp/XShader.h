//
// Created by yanxi on 2019/9/15.
//

#ifndef MANCHESTERUNITEDPLAYER_XSHADER_H
#define MANCHESTERUNITEDPLAYER_XSHADER_H
//为了使和XTexture不关联
enum XShaderType {
    XSHDER_YUV420P = 0,//每4个像素Y4 U1 V1
    XSHDER_NV12 = 25, //每4个像素Y4 UV1
    XSHDER_NV21 = 26 //每4个像素Y4 VU1
};

class XShader {
public:
    virtual bool Init(XShaderType shaderType = XSHDER_YUV420P);

    void GetTexture(unsigned int index, int width, int height, unsigned char *buf);

    //避免头文件引入了OpenGL依赖
    unsigned int vsh = 0;
    unsigned int fsh = 0;
    unsigned int program = 0;
    //100层的纹理id数组
    unsigned int text[100] = {0};

    void Draw();
};


#endif //MANCHESTERUNITEDPLAYER_XSHADER_H
