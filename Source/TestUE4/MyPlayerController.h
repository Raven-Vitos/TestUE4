// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TESTUE4_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	void MoveForward(float Value);
	void MoveRight(float Value);

public:
	virtual void SetupInputComponent() override;
};
