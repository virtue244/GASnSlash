// Copyright Vertiu


#include "GASnSlash/Public/Characters/GnS_PlayerCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"


AGnS_PlayerCharacter::AGnS_PlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// TODO What exactly is a capsule used for?
	// Do it just hold the character, Is it perhaps used for collision?
	/*
	 * Characters primary collision body
	 * 
	 */
	GetCapsuleComponent()->InitCapsuleSize(42.f,96.f);

	// Set ACharacter class properties that are inherited from the APawn actor class
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// ACharacter class method to update another object within the ACharacter class, called UCharacterMovementComponent's properties
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 500.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.f;

	// Instantiate SpringArm Object
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	// Attach to Root Component
	CameraBoom->SetupAttachment(GetRootComponent());
	// Set Properties of the Object
	CameraBoom->TargetArmLength = 600.0f;
	CameraBoom->bUsePawnControlRotation = true;

	// Instantiate Camera Object
	FollowCamera = CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	// Attach to SpringArm - TODO Confused on the second Argument
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	// Set Properties of the Object
	FollowCamera->bUsePawnControlRotation = false;
}


