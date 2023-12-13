// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Привязка функций к клавишам
	InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
	InputComponent->BindAxis("MoveBackward", this, &AMyPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
	InputComponent->BindAxis("MoveLeft", this, &AMyPlayerController::MoveRight);
}

void AMyPlayerController::MoveForward(float Value)
{
	// Логика движения вперед
	FVector Direction = FVector::ForwardVector;
	GetPawn()->AddMovementInput(Direction, Value);
}

void AMyPlayerController::MoveRight(float Value)
{
	// Логика движения вправо
	FVector Direction = FVector::RightVector;
	GetPawn()->AddMovementInput(Direction, Value);
}