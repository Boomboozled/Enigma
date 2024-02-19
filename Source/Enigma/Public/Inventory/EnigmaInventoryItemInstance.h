// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Inventory/EnigmaInventoryItemDefinition.h"
#include "EnigmaInventoryItemInstance.generated.h"
/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaInventoryItemInstance : public UObject
{
	GENERATED_BODY()

public:

	UEnigmaInventoryItemInstance();

	UPROPERTY(VisibleAnywhere)
	TSubclassOf<UEnigmaInventoryItemDefinition> InventoryItemDefinitionClass;

	UEnigmaInventoryItemDefinition* InventoryItemDefinition;

	uint32 ItemStackSize;

public:
	FGameplayTagContainer* GetTagContainer();



};
