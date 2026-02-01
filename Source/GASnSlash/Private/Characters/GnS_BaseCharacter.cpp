// Copyright Vertiu


#include "GASnSlash/Public/Characters/GnS_BaseCharacter.h"


// Sets default values
AGnS_BaseCharacter::AGnS_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Tick and refresh bone transforms whether rendered or not - for bone updates on a dedicated server
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}



