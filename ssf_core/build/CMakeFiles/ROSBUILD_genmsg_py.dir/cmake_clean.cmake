FILE(REMOVE_RECURSE
  "../src/ssf_core/msg"
  "../msg_gen"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/ssf_core/msg/__init__.py"
  "../src/ssf_core/msg/_ext_state.py"
  "../src/ssf_core/msg/_ext_ekf.py"
  "../src/ssf_core/msg/_ext_imu.py"
  "../src/ssf_core/msg/_DoubleArrayStamped.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
