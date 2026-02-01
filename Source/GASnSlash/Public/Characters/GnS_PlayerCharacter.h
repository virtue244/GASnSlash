// Copyright Vertiu

#pragma once

#include "CoreMinimal.h"
#include "GnS_BaseCharacter.h"
#include "GnS_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class GASNSLASH_API AGnS_PlayerCharacter : public AGnS_BaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGnS_PlayerCharacter();

private:

	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<UCameraComponent> FollowCamera;

};
