// Copyright Epic Games, Inc. All Rights Reserved.

#include "EnigmaGameMode.h"
#include "EnigmaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEnigmaGameMode::AEnigmaGameMode()
{
	UE_LOG(LogTemp, Warning, TEXT("EnigmaGameMode"))
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
