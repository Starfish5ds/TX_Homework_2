// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NormalPointCube.generated.h"

UCLASS()
class TX_HOMEWORK_2_API ANormalPointCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANormalPointCube();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Static")
	UStaticMeshComponent* StaticComp;
	
	UPROPERTY()
	int32 MaxHealth = 2;
	int32 CurrentHealth = MaxHealth;

	void ChangeScale(float DeltaTime);
	bool bGrowing = false;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void CheckActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
