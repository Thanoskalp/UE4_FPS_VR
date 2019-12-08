// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	/*  This function declaration allows you to override the StartPlay() function
	(inherited from the AActor class) so that you can print a log message to the
	screen when gameplay begins.  */

	virtual void StartPlay() override;
};

