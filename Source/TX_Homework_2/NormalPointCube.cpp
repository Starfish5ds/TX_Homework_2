// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalPointCube.h"
#include "TX_Homework_2Projectile.h"

// Sets default values
ANormalPointCube::ANormalPointCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticComp"));
	StaticComp->SetupAttachment(RootComponent);
	StaticComp->OnComponentBeginOverlap.AddDynamic(this, &ANormalPointCube::CheckActor);
}

// Called when the game starts or when spawned
void ANormalPointCube::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANormalPointCube::CheckActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ATX_Homework_2Projectile* projectile = Cast<ATX_Homework_2Projectile>(OtherActor);

	if (projectile == nullptr)
	{
		return;
	}
	else
	{
		this->Destroy();
	}
}

// Called every frame
void ANormalPointCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
