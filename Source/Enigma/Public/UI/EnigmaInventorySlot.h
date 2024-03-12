// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/EnigmaUserWidget.h"
#include "EnigmaInventorySlot.generated.h"

/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaInventorySlot : public UEnigmaUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UImage* SlotImage;

};
