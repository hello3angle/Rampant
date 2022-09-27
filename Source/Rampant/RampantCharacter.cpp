// Fill out your copyright notice in the Description page of Project Settings.


#include "RampantCharacter.h"

// Sets default values
ARampantCharacter::ARampantCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARampantCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARampantCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARampantCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

