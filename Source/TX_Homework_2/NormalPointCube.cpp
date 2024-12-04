// Fill out your copyright notice in the Description page of Project Settings.

#include "NormalPointCube.h"
#include "TX_Homework_2Character.h"
#include "Kismet/GameplayStatics.h"
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
		//方块血量减少
		CurrentHealth--;
		//当子弹射中方块时，子弹销毁
		projectile->Destroy();
		bGrowing = true;
		if (CurrentHealth < 1) 
		{
			UWorld* world = GetWorld();
			if (world)
			{
				APlayerController* PlayerController = UGameplayStatics::GetPlayerController(world, 0);
				if (PlayerController) 
				{
					ATX_Homework_2Character* Character = Cast<ATX_Homework_2Character>(PlayerController->GetPawn());
					if (Character) 
					{
						Character->Point += GetPoint;
					}
				}
			}
			this->Destroy();
		}
	}
}

void ANormalPointCube::ChangeScale(float DeltaTime)
{
	float CurrentScale = StaticComp->GetComponentScale().X;
	//当子弹射中方块时，方块大小发生变化
	if (bGrowing)
	{
		CurrentScale -= (DeltaTime*10);
	}
	//方块的大小限定在0.5倍和2倍之间
	CurrentScale = FMath::Clamp(CurrentScale, 0.5f, 2.0f);
	StaticComp->SetWorldScale3D(FVector(CurrentScale));
}

// Called every frame
void ANormalPointCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//逐帧检测
	ChangeScale(DeltaTime);
}

