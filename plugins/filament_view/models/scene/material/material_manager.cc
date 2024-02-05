
#include "material_manager.h"

namespace plugin_filament_view {
MaterialManager::MaterialManager(void* context,
                                 CustomModelViewer* model_viewer,
                                 const std::string& flutter_assets_path)
    : context_(context),
      model_viewer_(model_viewer),
      flutterAssetsPath_(flutter_assets_path) {}

}  // namespace plugin_filament_view