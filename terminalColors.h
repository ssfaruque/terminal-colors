
/* terminal colors */
namespace tc
{
    #ifdef __linux__

    const char* normal    = "\033[0m";
    const char* reset     = normal;
    const char* bold      = "\033[1m";
    const char* faint     = "\033[2m";
    const char* italic    = "\033[3m";
    const char* underline = "\033[4m";

    /* not supported in Ubuntu */
    const char* slow_blink  = "\033[5m";
    const char* rapid_blink = "\033[6m";

    const char* reverse = "\033[7m";
    const char* conceal = "\033[8m";

    /* not supported in Ubuntu */
    const char* crossed = "\033[9m";

    const char* default_font = "\033[10m";

    const char* alt_font1 = "\033[11m";
    const char* alt_font2 = "\033[12m";
    const char* alt_font3 = "\033[13m";
    const char* alt_font4 = "\033[14m";
    const char* alt_font5 = "\033[15m";
    const char* alt_font6 = "\033[16m";
    const char* alt_font7 = "\033[17m";
    const char* alt_font8 = "\033[18m";
    const char* alt_font9 = "\033[19m";

    /* not supported in Ubuntu */
    const char* fraktur          = "\033[20m";
    const char* double_underline = "\033[21m";

    const char* normal_color  = "\033[22m";
    const char* italic_off    = "\033[23m";
    const char* underline_off = "\033[24m";
    const char* revfeal       = "\033[28m";

    const char* fg_black   = "\033[30m";
    const char* fg_red     = "\033[31m";
    const char* fg_green   = "\033[32m";
    const char* fg_yellow  = "\033[33m";
    const char* fg_blue    = "\033[34m";
    const char* fg_magenta = "\033[35m";
    const char* fg_cyan    = "\033[36m";
    const char* fg_white   = "\033[37m";
    const char* fg_default = "\033[39m";

    const char* bg_black   = "\033[40m";
    const char* bg_red     = "\033[41m";
    const char* bg_green   = "\033[42m";
    const char* bg_yellow  = "\033[43m";
    const char* bg_blue    = "\033[44m";
    const char* bg_magenta = "\033[45m";
    const char* bg_cyan    = "\033[46m";
    const char* bg_white   = "\033[47m";
    const char* bg_default = "\033[49m";

    /* not supported in Ubuntu */
    const char* framed    = "\033[51m";
    const char* encricled = "\033[52m";
    const char* overlined = "\033[53m";

    #endif
}