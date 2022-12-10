#include <string>
#include <vector>

namespace config
{
#pragma region Window_Properties
    std::string window_title = "Gobblet Gobblers";
    std::vector<int> window_size {500, 400};
#pragma endregion Window_Properties

#pragma region Default_File_Routes
    std::string asset_file_route = "assets/";
    std::string fonts_file_route = asset_file_route + "fonts/";
    std::string textures_file_route = asset_file_route + "textures/";
#pragma endregion Default_File_Routes

#pragma region Resource_References   
    std::string default_font_file_route = fonts_file_route + "Imperator.ttf";
    int default_font_size = 50;
#pragma endregion Resource_References
}