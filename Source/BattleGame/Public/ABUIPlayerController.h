// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BattleGame.h"
#include "GameFramework/PlayerController.h"
#include "ABUIPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEGAME_API AABUIPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadwrite, Category = UI)
	TSubclassOf<class UUserWidget> UIWidgetClass;

	UPROPERTY()
	class UUserWidget* UIWidgetInstance;
};
