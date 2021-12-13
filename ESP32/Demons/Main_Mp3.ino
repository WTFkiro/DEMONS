/* MP3模块 文件目录
KA: 1
    00 Driver ON
    01 Deal
    02 Add
    03 decideup
    04 dominate
    05 dominate2
    06 finish
    07 more
    08 requiem
    09 charge

LO: 2
    01 loop
    02 loop Add
    03 loop more

S： 3
    01 spider
    02 bata
    03 lex
    04 lion

B： 4
    01 spider
    02 bata
    03 lex
    04 lion

PU：5
    01 push spider
    02 push bata
    03 push lex
    04 push lion
    05 push finish
    06 push Add

LI: 6
    01 line1
    02 self1
    03 self2
    04 self3
    05 line2
    06 fight
    07 out
*/

void playmusic(int folder, unsigned char Track)
{
    //播放选中目录下的曲目，0x01是第一首
    if (folder == 1) //KA
    {
        unsigned char PLAY[16] = {0xAA, 0x08, 0x0C, 0x02, 0x2F, 0x4B, 0x41, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, 0x1B + Track};
        MySerial.write(PLAY, 16);
    }
    else if (folder == 2) //LO
    {
        unsigned char PLAY[16] = {0xAA, 0x08, 0x0C, 0x02, 0x2F, 0x4C, 0x4F, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, Track + 0x2A};
        MySerial.write(PLAY, 16);
    }
    else if (folder == 3) //S
    {
        unsigned char PLAY[15] = {0xAA, 0x08, 0x0B, 0x02, 0x2F, 0x53, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, 0xE1 + Track};
        MySerial.write(PLAY, 15);
    }
    else if (folder == 4) //B
    {
        unsigned char PLAY[15] = {0xAA, 0x08, 0x0B, 0x02, 0x2F, 0x42, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, 0xD0 + Track};
        MySerial.write(PLAY, 15);
    }
    else if (folder == 5) //PU
    {
        unsigned char PLAY[16] = {0xAA, 0x08, 0x0C, 0x02, 0x2F, 0x50, 0x55, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, 0x34 + Track};
        MySerial.write(PLAY, 16);
    }
    else if (folder == 6) //LI
    {
        unsigned char PLAY[16] = {0xAA, 0x17, 0x0C, 0x02, 0x2F, 0x4C, 0x49, 0x2A, 0x2F, 0x30, Track + 0x30, 0x2A, 0x3F, 0x3F, 0x3F, 0x33 + Track};
        MySerial.write(PLAY, 16);
    }
}

void playmode(unsigned char mode)
// 0x00全盘循环 0x01单曲循环 0x02单曲停止 0x03全盘随机 0x04目录循环 0x05目录随机 0x06目录顺序 0x07顺序播放
{
    unsigned char Mode[5] = {0xAA, 0x18, 0x01, mode, mode + 0xC3};
    MySerial.write(Mode, 5);
}

void looptime(unsigned char loop)
{
    unsigned char Mode[5] = {0xAA, 0x19, 0x02, loop, loop + 0xC3};
    MySerial.write(Mode, 5);
}

void volume(unsigned char vol)
{
    unsigned char volume[5] = {0xAA, 0x13, 0x01, vol, vol + 0xBE}; //0xBE=0xAA+0x13+0x01,即最后一位为校验和
    MySerial.write(volume, 5);
}

void volume_add()
{
    unsigned char addvolume[4] = {0xAA, 0x14, 0x00, 0xBE};
    MySerial.write(addvolume, 4);
}

void volume_decrease()
{
    unsigned char decrease[4] = {0xAA, 0x15, 0x00, 0xBF};
    MySerial.write(decrease, 4);
}

void insertmusic(int nowanimal)
{
    unsigned char cut[16] = {0xAA, 0x17, 0x0C, 0x02, 0x2F, 0x50, 0x55, 0x2A, 0x2F, 0x30, 0x30 + nowanimal, 0x2A, 0x3F, 0x3F, 0x3F, 0x43 + nowanimal};
    MySerial.write(cut, 16);
}
