// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class INTROTOCPP_API AMyActor : public AActor
{
	GENERATED_BODY()

private:

public:
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 TotalDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float DamageTimeInSeconds;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float DamagePerSecond;

	UFUNCTION(BlueprintCallable, Category = "Damage")
		void CalculateValues();

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
		void CalledFromCpp();

	UFUNCTION(BlueprintNativeEvent, Category = "Damage")
		void CalledFromCppWithImp();

	void CalledFromCppWithImp_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitProperties() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent&) override;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
