// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/EnigmaInventoryItemInstance.h"

UEnigmaInventoryItemInstance::UEnigmaInventoryItemInstance()
{
	ItemStackSize = 1;
}

FGameplayTagContainer* UEnigmaInventoryItemInstance::GetTagContainer()
{
	return InventoryItemDefinition->ItemTagContainer;

}
