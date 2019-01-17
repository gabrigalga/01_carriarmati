// Fill out your copyright notice in the Description page of Project Settings.

#include "AimingCPP.h"


// Sets default values for this component's properties
UAimingCPP::UAimingCPP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAimingCPP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAimingCPP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAimingCPP::AimAt(FVector HitLocation)
{
	UE_LOG(LogTemp, Warning, TEXT("il Carro %s mira a %s con il comp %s"), *GetOwner()->GetName(), *HitLocation.ToString(),*Cannone->GetComponentLocation().ToString());


}

void UAimingCPP::SetCannone(UStaticMeshComponent* Set)
{
	Cannone = Set;
}