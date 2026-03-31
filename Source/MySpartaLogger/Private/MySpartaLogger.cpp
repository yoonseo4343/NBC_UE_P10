// MySpartaLog.cpp

#include "MySpartaLogger.h"
#include "Modules/ModuleManager.h"

DEFINE_LOG_CATEGORY(LogMySpartaModule);

void FMySpartaLogger::StartupModule()
{
  UE_LOG(LogMySpartaModule, Warning, TEXT("MySpartaLog is Start"));
}

void FMySpartaLogger::ShutdownModule() {}

IMPLEMENT_MODULE(FMySpartaLogger, MySpartaLogger);