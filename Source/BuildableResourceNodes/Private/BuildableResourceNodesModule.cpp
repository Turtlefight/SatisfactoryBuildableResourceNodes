
#include "BuildableResourceNodesModule.h"

#include "SML/Public/Patching/NativeHookManager.h"


DEFINE_LOG_CATEGORY(LogBuildableResourceNodes);





void FBuildableResourceNodesModule::StartupModule() {
}

IMPLEMENT_GAME_MODULE(FBuildableResourceNodesModule, BuildableResourceNodes);
