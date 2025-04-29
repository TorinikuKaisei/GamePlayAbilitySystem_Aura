// Study 

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags]
 *
 * singleton containing native gameplay tags
 */


struct FAuraGmaeplayTags
{
public:
	static FAuraGmaeplayTags& Get() { return GameplayTags;}
	static  void InitializeNativeGameplayTags();
protected:

private:
	static FAuraGmaeplayTags GameplayTags;
};
