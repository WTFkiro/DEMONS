int Demons_Add()
{
    fill_solid(leds, 64, CRGB::Black);
    FastLED.show();
    leds[26] = CRGB(255, 0, 0);
    leds[29] = CRGB(255, 0, 0);
    leds[34] = CRGB(255, 0, 0);
    leds[42] = CRGB(255, 0, 0);
    leds[43] = CRGB(255, 0, 255);
    leds[44] = CRGB(255, 0, 0);
    leds[51] = CRGB(255, 0, 0);
    leds[52] = CRGB(255, 0, 255);
    FastLED.show();
    delay(33);
    button_state = 10;
    leds[3] = CRGB(0, 0, 255);
    leds[4] = CRGB(0, 0, 255);
    leds[10] = CRGB(255, 0, 255);
    leds[11] = CRGB(0, 0, 255);
    leds[12] = CRGB(0, 0, 255);
    leds[13] = CRGB(255, 0, 255);
    leds[17] = CRGB(255, 0, 0);
    leds[18] = CRGB(255, 0, 255);
    leds[19] = CRGB(0, 0, 255);
    leds[20] = CRGB(0, 0, 255);
    leds[21] = CRGB(255, 0, 255);
    leds[22] = CRGB(255, 0, 0);
    leds[25] = CRGB(255, 0, 0);
    leds[26] = CRGB(255, 0, 255);
    leds[27] = CRGB(0, 0, 255);
    leds[28] = CRGB(0, 0, 255);
    leds[29] = CRGB(255, 0, 255);
    leds[30] = CRGB(255, 0, 0);
    leds[33] = CRGB(255, 0, 0);
    leds[34] = CRGB(255, 0, 255);
    leds[35] = CRGB(0, 0, 255);
    leds[36] = CRGB(0, 0, 255);
    leds[37] = CRGB(255, 0, 255);
    leds[38] = CRGB(255, 0, 0);
    leds[41] = CRGB(255, 0, 0);
    leds[42] = CRGB(255, 0, 255);
    leds[43] = CRGB(0, 0, 255);
    leds[44] = CRGB(0, 0, 255);
    leds[45] = CRGB(255, 0, 255);
    leds[46] = CRGB(255, 0, 0);
    leds[50] = CRGB(142, 68, 251);
    leds[51] = CRGB(0, 0, 255);
    leds[52] = CRGB(0, 0, 255);
    leds[53] = CRGB(255, 0, 255);
    leds[59] = CRGB(0, 0, 255);
    leds[60] = CRGB(0, 0, 255);
    FastLED.show();
    delay(33);
    leds[2] = CRGB(30, 22, 100);
    leds[16] = CRGB(255, 0, 255);
    leds[25] = CRGB(255, 73, 134);
    leds[32] = CRGB(255, 0, 0);
    leds[38] = CRGB(255, 73, 134);
    leds[39] = CRGB(255, 73, 134);
    leds[40] = CRGB(255, 73, 134);
    leds[41] = CRGB(255, 73, 134);
    leds[47] = CRGB(255, 73, 134);
    leds[48] = CRGB(142, 68, 251);
    leds[49] = CRGB(0, 0, 255);
    leds[54] = CRGB(142, 68, 251);
    leds[55] = CRGB(255, 73, 134);
    leds[57] = CRGB(142, 68, 251);
    leds[58] = CRGB(0, 0, 255);
    leds[61] = CRGB(0, 0, 255);
    leds[62] = CRGB(0, 0, 255);
    FastLED.show();
    delay(33);
    if (button_state == 7)
    {
        return 0;
    }
    leds[1] = CRGB(255, 0, 255);
    leds[2] = CRGB(80, 62, 251);
    leds[5] = CRGB(0, 0, 255);
    leds[6] = CRGB(255, 0, 255);
    leds[8] = CRGB(167, 113, 218);
    leds[9] = CRGB(255, 0, 255);
    leds[10] = CRGB(0, 0, 255);
    leds[13] = CRGB(80, 61, 255);
    leds[14] = CRGB(255, 0, 255);
    leds[15] = CRGB(167, 113, 218);
    leds[17] = CRGB(255, 0, 255);
    leds[18] = CRGB(0, 0, 255);
    leds[21] = CRGB(0, 0, 255);
    leds[22] = CRGB(255, 0, 255);
    leds[23] = CRGB(167, 113, 218);
    leds[24] = CRGB(167, 113, 218);
    leds[25] = CRGB(255, 0, 255);
    leds[26] = CRGB(0, 0, 255);
    leds[29] = CRGB(0, 0, 255);
    leds[30] = CRGB(255, 0, 255);
    leds[31] = CRGB(167, 113, 218);
    leds[32] = CRGB(167, 113, 218);
    leds[33] = CRGB(255, 0, 255);
    leds[34] = CRGB(0, 0, 255);
    leds[37] = CRGB(0, 0, 255);
    leds[38] = CRGB(255, 0, 255);
    leds[39] = CRGB(167, 113, 218);
    leds[40] = CRGB(167, 113, 218);
    leds[41] = CRGB(255, 0, 255);
    leds[42] = CRGB(0, 0, 255);
    leds[45] = CRGB(0, 0, 255);
    leds[46] = CRGB(255, 0, 255);
    leds[47] = CRGB(255, 0, 255);
    leds[49] = CRGB(255, 0, 255);
    leds[50] = CRGB(0, 0, 255);
    leds[53] = CRGB(0, 0, 255);
    leds[54] = CRGB(255, 0, 255);
    leds[56] = CRGB(106, 70, 137);
    leds[57] = CRGB(255, 0, 255);
    leds[62] = CRGB(255, 0, 255);
    leds[63] = CRGB(78, 27, 99);
    FastLED.show();
    delay(33);
    FastLED.show();
    delay(33);
    if (button_state == 7)
    {
        return 0;
    }
    leds[0] = CRGB(165, 114, 218);
    leds[1] = CRGB(0, 0, 0);
    leds[2] = CRGB(0, 0, 0);
    leds[7] = CRGB(169, 113, 218);
    leds[10] = CRGB(67, 52, 212);
    leds[11] = CRGB(0, 0, 0);
    leds[12] = CRGB(0, 0, 0);
    leds[13] = CRGB(46, 36, 151);
    leds[21] = CRGB(0, 0, 0);
    leds[36] = CRGB(0, 0, 0);
    leds[37] = CRGB(30, 22, 100);
    leds[41] = CRGB(0, 0, 0);
    leds[42] = CRGB(39, 29, 126);
    leds[53] = CRGB(0, 0, 0);
    leds[54] = CRGB(0, 0, 255);
    leds[56] = CRGB(255, 0, 255);
    leds[57] = CRGB(0, 0, 255);
    leds[59] = CRGB(0, 0, 0);
    leds[63] = CRGB(255, 0, 255);
    FastLED.show();
    delay(33);
    leds[1] = CRGB(0, 0, 255);
    leds[6] = CRGB(0, 0, 255);
    leds[9] = CRGB(0, 0, 255);
    leds[10] = CRGB(46, 36, 151);
    leds[13] = CRGB(0, 0, 255);
    leds[14] = CRGB(0, 0, 255);
    leds[17] = CRGB(0, 0, 255);
    leds[20] = CRGB(0, 0, 0);
    leds[25] = CRGB(0, 0, 255);
    leds[29] = CRGB(0, 0, 0);
    leds[30] = CRGB(0, 0, 255);
    leds[33] = CRGB(0, 0, 255);
    leds[35] = CRGB(0, 0, 0);
    leds[37] = CRGB(0, 0, 0);
    leds[38] = CRGB(0, 0, 255);
    leds[42] = CRGB(0, 0, 0);
    leds[46] = CRGB(0, 0, 255);
    leds[49] = CRGB(0, 0, 255);
    leds[51] = CRGB(0, 0, 0);
    leds[52] = CRGB(0, 0, 0);
    leds[59] = CRGB(0, 0, 255);
    leds[62] = CRGB(0, 0, 255);
    FastLED.show();
    delay(33);
    leds[3] = CRGB(0, 0, 0);
    leds[7] = CRGB(0, 0, 255);
    leds[8] = CRGB(0, 0, 255);
    leds[13] = CRGB(0, 0, 0);
    leds[19] = CRGB(0, 0, 0);
    leds[22] = CRGB(0, 0, 255);
    leds[23] = CRGB(0, 0, 255);
    leds[24] = CRGB(0, 0, 255);
    leds[28] = CRGB(0, 0, 0);
    leds[33] = CRGB(0, 0, 0);
    leds[34] = CRGB(0, 0, 0);
    leds[39] = CRGB(0, 0, 255);
    leds[40] = CRGB(0, 0, 255);
    leds[41] = CRGB(0, 0, 255);
    leds[42] = CRGB(39, 29, 126);
    leds[43] = CRGB(0, 0, 0);
    leds[44] = CRGB(0, 0, 0);
    leds[50] = CRGB(0, 0, 0);
    leds[55] = CRGB(0, 0, 255);
    leds[56] = CRGB(0, 0, 255);
    leds[59] = CRGB(0, 0, 0);
    leds[60] = CRGB(30, 22, 100);
    FastLED.show();
    delay(33);
    leds[0] = CRGB(0, 0, 255);
    leds[4] = CRGB(0, 0, 0);
    leds[10] = CRGB(67, 52, 212);
    leds[15] = CRGB(0, 0, 255);
    leds[16] = CRGB(0, 0, 255);
    leds[18] = CRGB(50, 40, 159);
    leds[27] = CRGB(0, 0, 0);
    leds[31] = CRGB(0, 0, 255);
    leds[32] = CRGB(0, 0, 255);
    leds[33] = CRGB(0, 0, 255);
    leds[42] = CRGB(0, 0, 0);
    leds[45] = CRGB(30, 22, 100);
    leds[47] = CRGB(0, 0, 255);
    leds[48] = CRGB(0, 0, 255);
    leds[60] = CRGB(0, 0, 0);
    leds[61] = CRGB(0, 0, 0);
    leds[63] = CRGB(0, 0, 255);
    if (button_state == 7)
    {
        return 0;
    }
    FastLED.show();
    delay(33);
    FastLED.show();
    delay(33);
    FastLED.show();
    delay(33);
    leds[5] = CRGB(0, 0, 0);
    leds[10] = CRGB(0, 0, 0);
    leds[18] = CRGB(0, 0, 0);
    leds[26] = CRGB(0, 0, 0);
    leds[45] = CRGB(0, 0, 0);
    leds[58] = CRGB(0, 0, 0);
    FastLED.show();
    for (i = 0; i <= 10; i++)
    {
        if (button_state == 7)
        {
            return 0;
        }
        delay(100);
    }
}
