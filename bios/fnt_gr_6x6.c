/*
 * fnt_gr_6x6.c - a font in standard format
 *
 * Automatically generated by fntconv.c
 *
 * And then the font was "refined" a bit by GGN
 * because I always hated having ANSI characters from
 * MS-DOS on my STE instead of the copyright or TM characters!
 *
 * (BTW: original font comes from ELKAT)
 */

#include "portab.h"
#include "font.h"

static UWORD off_table[], dat_table[];

struct font_head fnt_gr_6x6 = {
    1,  /* font_id */
    8,  /* point */
    "6X6 system font",  /*   BYTE name[32]      */
    0,  /* first_ade */
    255,  /* last_ade */
    4,  /* top */
    4,  /* ascent */
    3,  /* half */
    1,  /* descent */
    1,  /* bottom */
    5,  /* max_char_width */
    6,  /* max_cell_width */
    0,  /* left_offset */
    2,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555, /* lighten */
    0x5555, /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_table,          /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    192,  /* form_width */
    6,  /* form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
};

static UWORD off_table[] =
{
    0x0000, 0x0006, 0x000c, 0x0012, 0x0018, 0x001e, 0x0024, 0x002a, 
    0x0030, 0x0036, 0x003c, 0x0042, 0x0048, 0x004e, 0x0054, 0x005a, 
    0x0060, 0x0066, 0x006c, 0x0072, 0x0078, 0x007e, 0x0084, 0x008a, 
    0x0090, 0x0096, 0x009c, 0x00a2, 0x00a8, 0x00ae, 0x00b4, 0x00ba, 
    0x00c0, 0x00c6, 0x00cc, 0x00d2, 0x00d8, 0x00de, 0x00e4, 0x00ea, 
    0x00f0, 0x00f6, 0x00fc, 0x0102, 0x0108, 0x010e, 0x0114, 0x011a, 
    0x0120, 0x0126, 0x012c, 0x0132, 0x0138, 0x013e, 0x0144, 0x014a, 
    0x0150, 0x0156, 0x015c, 0x0162, 0x0168, 0x016e, 0x0174, 0x017a, 
    0x0180, 0x0186, 0x018c, 0x0192, 0x0198, 0x019e, 0x01a4, 0x01aa, 
    0x01b0, 0x01b6, 0x01bc, 0x01c2, 0x01c8, 0x01ce, 0x01d4, 0x01da, 
    0x01e0, 0x01e6, 0x01ec, 0x01f2, 0x01f8, 0x01fe, 0x0204, 0x020a, 
    0x0210, 0x0216, 0x021c, 0x0222, 0x0228, 0x022e, 0x0234, 0x023a, 
    0x0240, 0x0246, 0x024c, 0x0252, 0x0258, 0x025e, 0x0264, 0x026a, 
    0x0270, 0x0276, 0x027c, 0x0282, 0x0288, 0x028e, 0x0294, 0x029a, 
    0x02a0, 0x02a6, 0x02ac, 0x02b2, 0x02b8, 0x02be, 0x02c4, 0x02ca, 
    0x02d0, 0x02d6, 0x02dc, 0x02e2, 0x02e8, 0x02ee, 0x02f4, 0x02fa, 
    0x0300, 0x0306, 0x030c, 0x0312, 0x0318, 0x031e, 0x0324, 0x032a, 
    0x0330, 0x0336, 0x033c, 0x0342, 0x0348, 0x034e, 0x0354, 0x035a, 
    0x0360, 0x0366, 0x036c, 0x0372, 0x0378, 0x037e, 0x0384, 0x038a, 
    0x0390, 0x0396, 0x039c, 0x03a2, 0x03a8, 0x03ae, 0x03b4, 0x03ba, 
    0x03c0, 0x03c6, 0x03cc, 0x03d2, 0x03d8, 0x03de, 0x03e4, 0x03ea, 
    0x03f0, 0x03f6, 0x03fc, 0x0402, 0x0408, 0x040e, 0x0414, 0x041a, 
    0x0420, 0x0426, 0x042c, 0x0432, 0x0438, 0x043e, 0x0444, 0x044a, 
    0x0450, 0x0456, 0x045c, 0x0462, 0x0468, 0x046e, 0x0474, 0x047a, 
    0x0480, 0x0486, 0x048c, 0x0492, 0x0498, 0x049e, 0x04a4, 0x04aa, 
    0x04b0, 0x04b6, 0x04bc, 0x04c2, 0x04c8, 0x04ce, 0x04d4, 0x04da, 
    0x04e0, 0x04e6, 0x04ec, 0x04f2, 0x04f8, 0x04fe, 0x0504, 0x050a, 
    0x0510, 0x0516, 0x051c, 0x0522, 0x0528, 0x052e, 0x0534, 0x053a, 
    0x0540, 0x0546, 0x054c, 0x0552, 0x0558, 0x055e, 0x0564, 0x056a, 
    0x0570, 0x0576, 0x057c, 0x0582, 0x0588, 0x058e, 0x0594, 0x059a, 
    0x05a0, 0x05a6, 0x05ac, 0x05b2, 0x05b8, 0x05be, 0x05c4, 0x05ca, 
    0x05d0, 0x05d6, 0x05dc, 0x05e2, 0x05e8, 0x05ee, 0x05f4, 0x05fa, 
    0x0600, 
};

static UWORD dat_table[] =
{
    0x0082, 0x0421, 0xCFB6, 0x0DE3, 0x04E3, 0x8150, 0xF987, 0xBCC3, 
    0xCC3E, 0x73E0, 0x381F, 0x8442, 0x00CD, 0x947B, 0x260C, 0x3184, 
    0x8800, 0x0006, 0x704F, 0x3C33, 0xC73E, 0x71C3, 0x0C18, 0x061C, 
    0x71CF, 0x1EF3, 0xEF9E, 0x89C0, 0x9242, 0x289C, 0xF1CF, 0x1EFA, 
    0x28A2, 0x8A2F, 0x9EC1, 0xE200, 0x6008, 0x0008, 0x0180, 0x8001, 
    0x2060, 0x0000, 0x0000, 0x0020, 0x0000, 0x0000, 0x0E31, 0xC400, 
    0x73CF, 0x08FB, 0xE89C, 0x7122, 0x228B, 0xE73E, 0xF3EF, 0xA222, 
    0x2A9C, 0x0380, 0x1C03, 0xE01C, 0x0007, 0x0003, 0xE000, 0x0000, 
    0x0000, 0x0000, 0x69A3, 0x4201, 0xE41A, 0x6941, 0x0869, 0xE7BD, 
    0x4BA9, 0xBC7B, 0xFF1C, 0x7BFC, 0x1EF3, 0x0D8E, 0xF9BF, 0xB6F9, 
    0xCD5E, 0x3BE0, 0x3ED8, 0xC000, 0x0081, 0x0850, 0x4208, 0x508B, 
    0xBFC6, 0xEBB1, 0xB886, 0x060C, 0xC21A, 0x3060, 0x0001, 0xC03E, 
    0x01C2, 0x0662, 0xAF2A, 0x1A17, 0x8682, 0x0150, 0xC880, 0x84C2, 
    0x0C02, 0x5367, 0x203F, 0x42F4, 0x00CD, 0xBEA3, 0x4D0C, 0x60C3, 
    0x0800, 0x000C, 0x98C0, 0x8252, 0x0802, 0x8A23, 0x0C31, 0xE326, 
    0x8A28, 0xA08A, 0x0820, 0x8880, 0x9443, 0x6CA2, 0x8A28, 0xA022, 
    0x28A2, 0x5221, 0x1860, 0x6700, 0x61CF, 0x1C79, 0xC21E, 0xB181, 
    0x2421, 0x4F1C, 0xF1E7, 0x0E72, 0x28A2, 0x4A27, 0x8C30, 0xCE88, 
    0x8A28, 0x1480, 0x48A2, 0x2145, 0x36C8, 0x08A2, 0x8902, 0x2271, 
    0x4AA2, 0xEA44, 0x9078, 0xCF12, 0x2241, 0x9289, 0x873E, 0x71F3, 
    0xBE8A, 0xE9A2, 0xB2C4, 0x8C72, 0xC22C, 0xB002, 0x1CEB, 0x38D7, 
    0x012D, 0x8C08, 0x618C, 0x31BD, 0x861B, 0xE7C6, 0xD9B9, 0xB618, 
    0x6D56, 0x186F, 0xE6D8, 0xA216, 0x8BA7, 0xBE20, 0x8722, 0x8A24, 
    0x5044, 0x4451, 0x47E1, 0x9810, 0xC02C, 0x4880, 0x0700, 0x6000, 
    0x0362, 0x3BDF, 0x6E1C, 0xB297, 0x84DE, 0xE150, 0xC88F, 0xBEC3, 
    0xEF8E, 0x7320, 0xB760, 0x6294, 0x00C9, 0x1470, 0x8618, 0x60C7, 
    0xBE01, 0xE018, 0xA847, 0x1C93, 0xCF04, 0x71E0, 0x0060, 0x018C, 
    0xBBEF, 0x208B, 0xCF26, 0xF880, 0x9842, 0xAAA2, 0xF22F, 0x1C22, 
    0x28AA, 0x2142, 0x1830, 0x6D80, 0x3028, 0xA08B, 0xE7A2, 0xC881, 
    0x3823, 0xE8A2, 0x8A24, 0x9822, 0x28AA, 0x3221, 0x1830, 0x6B9C, 
    0xFBC8, 0x22F0, 0x8FBE, 0x2188, 0xAAA9, 0xC8A2, 0xF082, 0x14A8, 
    0x871C, 0x93C3, 0x1CF1, 0x049E, 0x2387, 0x928B, 0x08A2, 0x8A46, 
    0x088A, 0xA62A, 0x71C5, 0x96BA, 0xE71C, 0x7000, 0x08EA, 0xDB55, 
    0x4927, 0x0C18, 0x6D8C, 0x19BD, 0x8618, 0x6646, 0xD9BD, 0x9CD8, 
    0x6F56, 0x1866, 0xF671, 0xC72D, 0xAA4F, 0x1220, 0x88A2, 0x8AA7, 
    0xDC7C, 0x444E, 0x3886, 0x0630, 0xCF80, 0x31C3, 0x0450, 0xC300, 
    0x008D, 0x8662, 0xACAA, 0xE2DF, 0xDC93, 0xA358, 0xD9CC, 0x06D8, 
    0x698C, 0xDBEF, 0xA440, 0x2168, 0x00C0, 0x3E29, 0x6E80, 0x60C3, 
    0x0830, 0x0330, 0xC848, 0x02F8, 0x2888, 0x8823, 0x0C31, 0xE30C, 
    0xB228, 0xA08A, 0x0822, 0x8888, 0x9442, 0x29A2, 0x822A, 0x0222, 
    0x2536, 0x5084, 0x1818, 0x6000, 0x03E8, 0xA08A, 0x021E, 0x8881, 
    0x2422, 0xA8A2, 0x8A24, 0x0622, 0x252A, 0x31E2, 0x0C30, 0xC132, 
    0x8A28, 0x2281, 0x08A2, 0x2148, 0xA298, 0x08A2, 0x8102, 0x0871, 
    0x4200, 0x9223, 0x2282, 0x04A2, 0x2248, 0x9251, 0xC8A2, 0x8A21, 
    0x8A8A, 0xA22A, 0x0A26, 0x9AA2, 0xC8A2, 0x8800, 0x086A, 0xF8C0, 
    0x4BAD, 0x8C38, 0x6D8C, 0x19BD, 0x8018, 0x6646, 0xD9B1, 0x8ED0, 
    0x6C56, 0x1866, 0xC631, 0xCDAD, 0xAA48, 0x1220, 0x88A2, 0x8AA4, 
    0x5044, 0x4444, 0x0000, 0x0030, 0xC01A, 0x0083, 0x3401, 0xE300, 
    0x0087, 0x0421, 0xC9B6, 0x4210, 0x3C18, 0xE75C, 0xD9CC, 0x06F8, 
    0x6D8C, 0xD867, 0x3C71, 0xEEF0, 0x0000, 0x14F2, 0x6D00, 0x3184, 
    0x8830, 0x0320, 0x704F, 0xBC13, 0xC708, 0x71C3, 0x0418, 0x0600, 
    0x822F, 0x1EF3, 0xE81E, 0x89C7, 0x127A, 0x289C, 0x81C9, 0xBC21, 
    0xE222, 0x888F, 0x9E09, 0xE000, 0x01EF, 0x1C79, 0xC202, 0x89C1, 
    0x2272, 0x289C, 0xF1E4, 0x1C11, 0xE236, 0x4827, 0x8E31, 0xC03E, 
    0x8BC8, 0x3EFB, 0xE89C, 0x7128, 0xA28B, 0xE722, 0x83E2, 0x0822, 
    0x223E, 0xFBC4, 0x9C7B, 0x049C, 0x3228, 0x9E23, 0x0722, 0xF1C7, 
    0x0C73, 0xE73E, 0xFA24, 0x8C79, 0xEFBE, 0x8800, 0x082B, 0x1A40, 
    0x482C, 0xBE68, 0x6D8C, 0x19BF, 0x80F1, 0xE6DE, 0x73FF, 0xBEC0, 
    0x6FF6, 0x1867, 0xC632, 0x889A, 0x73E7, 0x9230, 0xC71C, 0x71C4, 
    0x5F44, 0xE384, 0x7FE7, 0x9E30, 0x822C, 0x01E0, 0x1C00, 0x0000, 
    0x0082, 0x0000, 0x0000, 0x01E3, 0x1810, 0xB64C, 0xF9CF, 0xBE1B, 
    0xEF8C, 0xF860, 0x0758, 0xAC00, 0x00C0, 0x0020, 0x0680, 0x0000, 
    0x0060, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0800, 0x000C, 
    0x7800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0060, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x003E, 0x0000, 0x0000, 0x003C, 0x000E, 
    0x0000, 0x0000, 0x8020, 0x0000, 0x0000, 0x03C0, 0x0030, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0203, 0x0001, 0xC000, 0x0000, 0x2001, 0xC000, 0x8000, 
    0x0000, 0x8C88, 0x79CB, 0x1000, 0x08A2, 0x7000, 0x0029, 0xE780, 
    0x10C0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00C0, 
    0x0000, 0x0000, 0x0001, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0033, 0x0000, 0x0000, 0x0800, 0x0000, 
};
