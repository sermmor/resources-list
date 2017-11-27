#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreController.generated.h"

//Forward declarations: se pueden poner aqui como se hace normalemente
class UUserWidget;
class UUserWidget;
class UTextBlock;

UCLASS()
class YOURFIRSTPROJECT_API AScoreController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScoreController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// En el proyecto original ponen las FD aquí, en los typenames de los templates. Es lo mismo.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<UUserWidget> ScoreTextWidget;

	TWeakObjectPtr<UUserWidget> pScoreTextWidget;

	TWeakObjectPtr<UTextBlock> pScoreText;
};