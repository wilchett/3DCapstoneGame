// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "TwoWizardsCharacter.h"
#include "GameFramework/Actor.h"
#include "GameController.generated.h"

UCLASS()
class TWOWIZARDS_API AGameController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameController();

	static AGameController* instance;

	ATwoWizardsCharacter* player1;

	ATwoWizardsCharacter* player2;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
