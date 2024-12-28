// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "remote_component.generated.h"

UCLASS(Blueprintable)
//class DL_2025_v0API Aremote_component : public AActor
class ADL_2025_v0API Aremote_component : public AActor {

};
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Mesh")
	TObjectPtr<UStaticMeshComponent> MeshControl{
	};
	
	UPROPERTY(EditAnywhere, Category = "Collision")
	TObjectPtr<UShapeComponent> CollisionControl{};

	UPROPERTY(EditAnywhere, Category = "ilumination")
	TObjectPtr<class UPointLightComponent> PointLightControl;

	UPROPERTY(EditAnywhere, Category = propertys)
	float cooldown;

	UPROPERTY(EditAnywhere, Category = propertys)
	bool Do_once;
	Aremote_component();
};