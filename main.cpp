// #include "basic-tutorial.h"
#include "MediaPipeline.h"
#include "log.h"
int main (int argc, char *argv[])
{
  InFunLOG();
#if defined(__APPLE__) && TARGET_OS_MAC && !TARGET_OS_IPHONE
  return gst_macos_main (tutorial_main, argc, argv, NULL);
#else
  
  int32_t ret{};
  // AMZPlayer foo1{};
  // ret = foo1.StartUP(argc,argv); 
 
 
  
  return ret;
#endif
}