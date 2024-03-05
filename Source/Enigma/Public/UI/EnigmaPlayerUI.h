// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/EnigmaUserWidget.h"
#include "UI/EnigmaInventoryUI.h"
#include "EnigmaPlayerUI.generated.h"


/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaPlayerUI : public UEnigmaUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;
	
	virtual bool Initialize() override;


	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UEnigmaInventoryUI* EnigmaInventoryUI;





};
