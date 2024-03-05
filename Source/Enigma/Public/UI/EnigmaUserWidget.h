// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnigmaUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ENIGMA_API UEnigmaUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual bool Initialize() override;
	
};
