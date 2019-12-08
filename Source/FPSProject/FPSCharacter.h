// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles input for moving forward and backward.
	UFUNCTION()
		void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
		void MoveRight(float value);

	// The UFUNCTION macro (located above each of these functions) makes the engine aware of these 
	// functions so that they can be included in serialization and other engine functionality.

	// you'll notice that there is built-in support for character jumping. Character jumping is tied to the bPressedJump variable, 
	// so all we need to do is set that boolean to true when the jump action is pressed, and false when the jump action is released.

	// Sets jump flag when key is pressed.
	UFUNCTION()
		void StartJump();

	// Cheers jump flag when key is released.
	UFUNCTION()
		void StopJump();

	// Function that handles firing projectiles.
	UFUNCTION()
		void Fire();

	// FPS camera.
	// !Note: in new version of UE4 don't forget to put the "class" keyword
	UPROPERTY(VisibleAnywhere)
		class UCameraComponent* FPSCameraComponent;




	// First-person mesh (arms), visible only to the owning player.
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* FPSMesh;




	// Gun muzzle's offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		class TSubclassOf<class AFPSProjectile> ProjectileClass;


};
