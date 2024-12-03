// Copyright Epic Games, Inc. All Rights Reserved.

#include "TX_Homework_2PickUpComponent.h"

UTX_Homework_2PickUpComponent::UTX_Homework_2PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UTX_Homework_2PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UTX_Homework_2PickUpComponent::OnSphereBeginOverlap);
}

void UTX_Homework_2PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ATX_Homework_2Character* Character = Cast<ATX_Homework_2Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
