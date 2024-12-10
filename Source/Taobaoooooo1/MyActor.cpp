// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	

	UStaticMeshComponent* CylinderMesh;
	// Dynamically create the mesh component and attach it
	CylinderMesh = NewObject<UStaticMeshComponent>(this,

	FName(*FString::Printf(TEXT("CylinderMesh%d"), 1))
	);
		
	CylinderMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	CylinderMesh->RegisterComponent();  // Registers the component with the World so it gets rendered and updated

	CylinderMesh->SetWorldScale3D(FVector(1, 1, 100));
	
	CylinderMesh->SetStaticMesh(
		link_use_static_meshlinkMesh
	);

	CylinderMesh->SetWorldLocation(
	FVector(1, 1, 1)
				);
			
		
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

