// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/EnigmaInventoryUI.h"
#include "Enigma/EnigmaCharacter.h"
#include "Inventory/EnigmaInventoryComponent.h"
UEnigmaInventoryUI::UEnigmaInventoryUI()
{

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


	//if (AEnigmaCharacter* OwnerPawn = Cast<AEnigmaCharacter>(GetOwningPlayerPawn());
	//{

	//}
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
