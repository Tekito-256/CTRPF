#pragma once

#include <string>

#include "CTRPluginFramework.hpp"

#define TOOL_ITEMS_OFFSET 0x8f4 

extern "C" void _ZN18CTRPluginFramework15PluginMenuTools8InitMenuEv();

namespace CTRPluginFramework {

  struct ToolItem {
    std::string name;
    u8 offset;
  };

  const std::vector< std::vector<ToolItem> > tool_menus =
  {
    // Tools main menu
    {
      { "About", 3 },
      { "Hex Editor", 3 },
      { "Gateway RAM Dumper", 3 },
      { "Screenshots", 2 },
      { "Miscellaneous", 2 },
      { "Settings", 2 },
      { "Shutdown the 3DS", 3 },
      { "Reboot the 3DS", 3 }
    },

    // Screenshots menu
    {
      { "Change screenshot settings", 2 },
      { "Screenshot:", 9 }
    },

    // Miscellaneous menu
    {
      { "Display loaded files", 2 },
      { "Write loaded files to file", 2 },
      { "Display touch cursor", 3 },
      { "Display touch coord", 2 },
      { "Display top screen's fps", 3 },
      { "Display bottom screen's fps", 3 }
    },

    // Settings menu
    {
      { "Change menu hotkeys", 2 },
      { "Use floating button", 3 },
      { "Auto save enabled cheats", 3 },
      { "Auto save favorites", 3 },
      { "Auto load enabled cheats at starts", 3 },
      { "Auto load favorites at starts", 2 },
      { "Load enabled cheats now", 2 },
      { "Load favorites now", 0 }
    }
  };
}
