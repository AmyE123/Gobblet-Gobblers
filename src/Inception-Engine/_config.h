#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <vector>

namespace config
{
// -- Window_Properties --

    /// <summary>
    /// The windows title
    /// </summary>
    extern std::string window_title;

    /// <summary>
    /// The windows size, [0] = Width, [1] = Height
    /// </summary>
    extern std::vector<int> window_size;

// -- Default_File_Routes --

    /// <summary>
    /// The string route to the asset file
    /// </summary>
    extern std::string asset_file_route;

    /// <summary>
    /// The string route to the fonts file
    /// </summary>
    extern std::string fonts_file_route;

    /// <summary>
    /// The string route to the textures file
    /// </summary>
    extern std::string textures_file_route;

// -- Resource_References --

    /// <summary>
    /// The string route to the default font file
    /// </summary>
    extern std::string default_font_file_route;

    /// <summary>
    /// The default font size
    /// </summary>
    extern int default_font_size;
}
#endif