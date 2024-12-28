// Fill out your copyright notice in the Description page of Project Settings.
#include "remote_component.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ShapeComponent.h"
#include "Components/PointLightComponent.h"

// Sets default values
Aremote_component::Aremote_component()//Constructor
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	cooldown = 0.0f;
	Do_once = false;
	MeshControl = CreateDefaultSubobject<UStaticMeshComponent>("Mesh_Control");
	CollisionControl = CreateDefaultSubobject<UShapeComponent>("Collision_Control");
	PointLightControl = CreateDefaultSubobject<UPointLightComponent>("Light_Control");
	PointLightControl->SetRelativeLocation(FVector(1.0f, 2.0f, 5.0f));
	//PointLightControl->SetupAttachment(GetRootComponent());
	//CollisionControl->SetupAttachment(GetRootComponent());


}

// Called when the game starts or when spawned
void Aremote_component::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("¡Hola desde Unreal Engine 5! GG"));
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Green, TEXT("Hello C++ GG"));
	UE_LOG(LogTemp, Warning, TEXT("cooldown: %f"), cooldown);

	
	if (Do_once) {
		UE_LOG(LogTemp, Warning, TEXT("Do once enabled"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Do once disabled"));
	}


	
}

// Called every frame
void Aremote_component::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	
}