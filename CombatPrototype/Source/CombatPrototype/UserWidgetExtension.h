// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetExtension.generated.h"

/**
 * 
 */
UCLASS()
class COMBATPROTOTYPE_API UUserWidgetExtension : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widget Extended Properties")
	AActor* OwningActor;

	void SetOwningActor(AActor* Actor);
	
};
