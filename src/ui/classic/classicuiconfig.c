#include "fcitx-config/fcitx-config.h"
#include "classicui.h"

extern FcitxClassicUI classicui;

FilterNextTimeEffectBoolean(UseTray, classicui.bUseTrayIcon)

CONFIG_BINDING_BEGIN(FcitxClassicUI);
CONFIG_BINDING_REGISTER("ClassicUI", "Font", font);
CONFIG_BINDING_REGISTER("ClassicUI", "MenuFont", menuFont);
#ifndef _ENABLE_PANGO
CONFIG_BINDING_REGISTER("ClassicUI", "FontLocale", strUserLocale);
#endif
CONFIG_BINDING_REGISTER_WITH_FILTER("Program", "UseTray", bUseTrayIcon_, FilterCopyUseTray);
CONFIG_BINDING_REGISTER("ClassicUI", "ShowHintWindow", bHintWindow);
CONFIG_BINDING_REGISTER("ClassicUI", "SkinType", skinType);
CONFIG_BINDING_REGISTER("ClassicUI", "MainWindowHideMode", hideMainWindow);
CONFIG_BINDING_END()