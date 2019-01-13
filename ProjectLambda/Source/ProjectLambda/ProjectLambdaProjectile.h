// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectLambdaProjectile.generated.h"

UCLASS(config=Game)
class AProjectLambdaProjectile : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category=Projectile )
	class UStaticMeshComponent* ProjectileMesh;

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

public:
	AProjectLambdaProjectile();

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

