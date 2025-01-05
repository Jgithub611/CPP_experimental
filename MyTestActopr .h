#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTestActor.generated.h"

UCLASS()
class YUMEPROJECT_API AMyTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTestActor();
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "CustomValues") 
	int32 int32_value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	bool bool_value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	float float_value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	FString string_value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	FVector vector_value;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	FRotator rotator_value;

	UPROPERTY(EditAnywhere, Category = "CustomValues")
	FTransform transform_value; 

	UPROPERTY(EditAnywhere, Category = "CustomValues")
	FColor color_value;

	UPROPERTY(EditAnywhere, Category = "CustomValues")
	TArray<int32> array32_value;

	UPROPERTY(EditAnywhere, Category = "CustomValues")
	TMap<FString, int32> map_value;

	UPROPERTY(EditAnywhere, Category = "CustomValues")
	UObject* object_value; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	AActor* actor_value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CustomValues")
	USoundBase* sound_value;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
