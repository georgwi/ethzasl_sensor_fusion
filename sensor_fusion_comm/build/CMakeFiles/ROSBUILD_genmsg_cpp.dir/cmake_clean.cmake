FILE(REMOVE_RECURSE
  "../src/sensor_fusion_comm/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/sensor_fusion_comm/ExtState.h"
  "../msg_gen/cpp/include/sensor_fusion_comm/ExtEkf.h"
  "../msg_gen/cpp/include/sensor_fusion_comm/DoubleArrayStamped.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
