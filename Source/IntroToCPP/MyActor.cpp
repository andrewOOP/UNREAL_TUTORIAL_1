// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TotalDamage = 200;
	DamageTimeInSeconds = 1.f;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	CalledFromCppWithImp();

	//TESTING FName
	FName nameA = FName("Test");
	FName nameB = FName("Test2");

	if (nameA.GetComparisonIndex() == nameB.GetComparisonIndex()) {
		UE_LOG(LogTemp, Log, TEXT("SAMER with id1: %i, id2: %i"), nameA.GetComparisonIndex(), nameB.GetComparisonIndex());
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("NOT SAMER with id1: %i, id2: %i"), nameA.GetComparisonIndex(), nameB.GetComparisonIndex());
	}

	//TESTING TArray
	TArray<int32> TestArray;

	for (int32 i = 0; i < 10; i++) {
		TestArray.Add(i);
	}

	for (int32& val : TestArray) {
		UE_LOG(LogTemp, Log, TEXT("%i \n"), val);
	}

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::PostInitProperties()
{
	Super::PostInitProperties();
	CalculateValues();

}

void AMyActor::CalledFromCppWithImp_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("If this function is defined in the blueprint, this won't run"));
}

#if WITH_EDITOR
void AMyActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	CalculateValues();

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

void AMyActor::CalculateValues() {
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;

}