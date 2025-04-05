// Study 

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacter.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	//Enemy InterFace
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//end Enemy InterFace

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
};
