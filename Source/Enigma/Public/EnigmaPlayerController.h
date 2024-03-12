// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EnigmaPlayerController.generated.h"

class UEnigmaPlayerUI;

/**
 * 
 */
UCLASS()
class ENIGMA_API AEnigmaPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AEnigmaPlayerController();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UEnigmaPlayerUI> PlayerUIClass;
	
	TSoftObjectPtr<UEnigmaPlayerUI> PlayerUI;

	
};
