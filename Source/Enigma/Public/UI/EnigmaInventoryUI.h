// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/EnigmaUserWidget.h"
#include "EnigmaInventoryUI.generated.h"

class UUniformGridPanel;
class UEnigmaInventorySlot;

/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaInventoryUI : public UEnigmaUserWidget
{
	GENERATED_BODY()

	UEnigmaInventoryUI();

protected:
	virtual bool Initialize() override; //ensure dependencies.

	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* InventoryGrid;


	TArray<UEnigmaInventorySlot*> InventorySlots;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnigmaInventorySlot> InventorySlotClass;

	int Columns;
	int Rows;

	class UEnigmaInventoryComponent* GetPlayerInventoryComponent();


	
};
