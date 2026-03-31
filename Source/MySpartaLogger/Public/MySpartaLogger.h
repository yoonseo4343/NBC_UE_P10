// MySpartaLog.h

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

MYSPARTALOGGER_API DECLARE_LOG_CATEGORY_EXTERN(LogMySpartaModule, Log, All);

class FMySpartaLogger : public IModuleInterface
{
public:
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;
};