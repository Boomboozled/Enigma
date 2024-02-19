// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EnigmaInventoryItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaInventoryItemDefinition : public UObject
{
	GENERATED_BODY()

public:
	FGameplayTagContainer* ItemTagContainer;

	uint32 MaxItemStackSize;

};
