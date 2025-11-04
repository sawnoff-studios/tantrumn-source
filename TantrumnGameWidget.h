// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TantrumnGameWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANTRUMN_API UTantrumnGameWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
    void StartCountdown(float CountdownTime, class ATantrumnGameModeBase* GameMode);

	UFUNCTION(BlueprintImplementableEvent)
    void LevelComplete();
};
