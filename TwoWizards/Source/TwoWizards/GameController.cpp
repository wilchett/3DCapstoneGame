// Fill out your copyright notice in the Description page of Project Settings.

#include "TwoWizards.h"
#include "GameController.h"

AGameController* AGameController::instance = nullptr;

// Sets default values
AGameController::AGameController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AGameController::instance = this;
}

void AGameController::DisableActor(AActor * actor)
{
	actor->SetActorHiddenInGame(true);
	actor->SetActorEnableCollision(false);
	actor->PrimaryActorTick.bCanEverTick = false;
}


void AGameController::EnableActor(AActor * actor)
{
	actor->SetActorHiddenInGame(false);
	actor->SetActorEnableCollision(true);
	actor->PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGameController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGameController::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	for (AEnemy* enemy : enemies) {
	}
}

