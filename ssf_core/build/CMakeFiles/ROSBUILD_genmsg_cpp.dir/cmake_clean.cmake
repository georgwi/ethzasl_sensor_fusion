FILE(REMOVE_RECURSE
  "../src/ssf_core/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/ssf_core/ext_state.h"
  "../msg_gen/cpp/include/ssf_core/ext_ekf.h"
  "../msg_gen/cpp/include/ssf_core/ext_imu.h"
  "../msg_gen/cpp/include/ssf_core/DoubleArrayStamped.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
