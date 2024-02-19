// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnigmaInventoryComponent.generated.h"

class UEnigmaInventoryItemInstance;
struct FGameplayTagContainer;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ENIGMA_API UEnigmaInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnigmaInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	
	UPROPERTY(EditAnywhere)
	uint8 MaxCapacity;

	TArray<UEnigmaInventoryItemInstance*> Inventory;

	void AddToInventory(UEnigmaInventoryItemInstance* ItemToAdd);

	void RemoveFromInventory(UEnigmaInventoryItemInstance* ItemToRemove);

	


	FGameplayTagContainer* RestrictedItemTags; //For items that cannot be added to the inventory given certain restrictions.



	

	bool CanAddToInventory(UEnigmaInventoryItemInstance* ItemToAdd);

	bool CanRemoveFromInventory(UEnigmaInventoryItemInstance* ItemToRemove);

};
