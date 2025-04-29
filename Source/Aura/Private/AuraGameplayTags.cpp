// Study 


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGmaeplayTags FAuraGmaeplayTags::GameplayTags;

void FAuraGmaeplayTags::InitializeNativeGameplayTags()
{
	UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"),FString("Reduces damage taken, improve Block Chance"));
}
