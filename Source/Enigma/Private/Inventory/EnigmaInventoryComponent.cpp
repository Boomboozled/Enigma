// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/EnigmaInventoryComponent.h"
#include "Inventory/EnigmaInventoryItemInstance.h"


// Sets default values for this component's properties
UEnigmaInventoryComponent::UEnigmaInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	MaxCapacity = 25;

	// ...
}


// Called when the game starts
void UEnigmaInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UEnigmaInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UEnigmaInventoryComponent::AddToInventory(UEnigmaInventoryItemInstance* ItemToAdd)
{
	Inventory.Add(ItemToAdd);
}

void UEnigmaInventoryComponent::RemoveFromInventory(UEnigmaInventoryItemInstance* ItemToRemove)
{
	Inventory.Remove(ItemToRemove);
}

bool UEnigmaInventoryComponent::CanAddToInventory(UEnigmaInventoryItemInstance* ItemToAdd)
{
	if (!IsValid(ItemToAdd))
	{
		UE_LOG(LogTemp, Warning, TEXT("InventoryItemInstance is not valid."))
		return false;
	}
		
	/*
	*  5 - potion
	* 
	* iteminstance stack size overflow. do remainder division to get the remainder of the size, then check.
	*/
	
	//find matching items
	//if ( )


	if (Inventory.Num() >= MaxCapacity) //what if the stack size overflows, and creates
	{
		return false;
	}

	//if ()
	//{

	//}
	


	//check tags: for example: QuestItem, Unique
	return false;
}

bool UEnigmaInventoryComponent::CanRemoveFromInventory(UEnigmaInventoryItemInstance* ItemToRemove)
{
	return false;
}

