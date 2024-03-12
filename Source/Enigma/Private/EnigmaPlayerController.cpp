// Fill out your copyright notice in the Description page of Project Settings.


#include "EnigmaPlayerController.h"
#include "UI/EnigmaPlayerUI.h"

AEnigmaPlayerController::AEnigmaPlayerController()
{
}

void AEnigmaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp,Warning, TEXT("AEnigmaPlayerController::BeginPlay()"))
	if (PlayerUIClass)
	{
		PlayerUI = CreateWidget<UEnigmaPlayerUI>(this, PlayerUIClass);
	}
	if (PlayerUI)
	{
		PlayerUI->AddToPlayerScreen();
	}
}
