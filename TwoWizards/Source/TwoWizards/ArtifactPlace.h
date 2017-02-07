// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/Actor.h"
#include "TwoWizardsCharacter.h"
#include "ArtifactPlace.generated.h"

UCLASS()
class TWOWIZARDS_API AArtifactPlace : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArtifactPlace();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UShapeComponent* TBox;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* TBoxMesh;

	ATwoWizardsCharacter* playerController;

	void PutDown();

	void GetPlayer(AActor* player);

	bool bPlayerIsWithinRange = false;
	
	UFUNCTION()
		void TriggerEnter(UPrimitiveComponent * overlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void TriggerExit(UPrimitiveComponent * overlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
