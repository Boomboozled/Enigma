// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/EnigmaInventoryUI.h"
#include "Enigma/EnigmaCharacter.h"
#include "EnigmaPlayerController.h"
#include "Inventory/EnigmaInventoryComponent.h"
#include "Components/UniformGridPanel.h"
#include "UI/EnigmaInventorySlot.h"

UEnigmaInventoryUI::UEnigmaInventoryUI()
{
	Columns = 5;
	Rows = 0;
}

bool UEnigmaInventoryUI::Initialize()
{
	UE_LOG(LogTemp, Warning, TEXT("UEnigmaInventoryUI::Initialize()"))
	const bool bSuccessfulInit = Super::Initialize();
	UEnigmaInventoryComponent* PlayerInventoryComponent = GetPlayerInventoryComponent();
	if (!PlayerInventoryComponent)
	{
		return false;
	}

	AEnigmaPlayerController* EnigmaPlayerController = Cast<AEnigmaPlayerController>(GetOwningPlayer());

	int Row = 0;
	int Column = 0;

	for (int i = 0; i < PlayerInventoryComponent->MaxCapacity; i++)
	{
		if (InventorySlotClass)
		{
			/*todo pointer types*/
			UEnigmaInventorySlot* InventorySlot = CreateWidget<UEnigmaInventorySlot>(GetOwningPlayer(), InventorySlotClass);
			Column = i % Columns;
			Row = i / Columns;
			InventoryGrid->AddChildToUniformGrid(InventorySlot, Row, Column);
		}
		else
		{
			break;
		}
	}
	return bSuccessfulInit;
}

UEnigmaInventoryComponent* UEnigmaInventoryUI::GetPlayerInventoryComponent()
{
	AEnigmaCharacter* OwnerPawn = Cast<AEnigmaCharacter>(GetOwningPlayerPawn());
	if (OwnerPawn)
	{
		return OwnerPawn->GetInventoryComponent();
	}
	return nullptr;
}
