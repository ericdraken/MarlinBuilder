#pragma once

// Eric Draken - the SIMAX3D 100K 3950 from Amazon
// Why /4 ? We need to downsample from 12-bits ADC to 10 bits ADC. See: https://reprap.org/forum/read.php?1,872228
// Why override table #2? To compare how far the drift is from expected table #11.
constexpr temp_entry_t temptable_2[] PROGMEM = {
    // Borrowed from table #11 to backfill the interpolation
    { OV(   1), 938 },
    // Real measurements
    { OV( (int)(117/4)  ), 255 },
    { OV( (int)(124/4)  ), 251 },
    { OV( (int)(133/4)  ), 246 },
    { OV( (int)(143/4)  ), 240 },
    { OV( (int)(193/4)  ), 225 },
    { OV( (int)(239/4)  ), 217 },
    { OV( (int)(274/4)  ), 209 },
    { OV( (int)(308/4)  ), 205 },
    { OV( (int)(314/4)  ), 200 },
    { OV( (int)(357/4)  ), 197 },
    { OV( (int)(359/4)  ), 195 },
    { OV( (int)(411/4)  ), 190 },
    { OV( (int)(410/4)  ), 188 },
    { OV( (int)(476/4)  ), 182 },
    { OV( (int)(562/4)  ), 176 },
    { OV( (int)(644/4)  ), 169 },
    { OV( (int)(757/4)  ), 162 },
    { OV( (int)(886/4)  ), 153 },
    { OV( (int)(1045/4) ), 145 },
    { OV( (int)(1209/4) ), 137 },
    { OV( (int)(1418/4) ), 129 },
    { OV( (int)(1632/4) ), 121 },
    { OV( (int)(1886/4) ), 112 },
    { OV( (int)(2150/4) ), 103 },
    { OV( (int)(2424/4) ),  94 },
    { OV( (int)(2729/4) ),  85 },
    { OV( (int)(2977/4) ),  76 },
    { OV( (int)(3222/4) ),  68 },
    { OV( (int)(3416/4) ),  59 },
    { OV( (int)(3622/4) ),  47 },
    { OV( (int)(3752/4) ),  39 },
    { OV( (int)(3862/4) ),  28 },
    { OV( (int)(3889/4) ),  27 },
    // Borrowed from thermistor_11.h for the zero crossing.
    // This doesn't matter in the grand scheme of things.
    { OV( 981),  23 },
    { OV( 991),  17 },
    { OV(1001),   9 },
    { OV(1021), -27 }
};
