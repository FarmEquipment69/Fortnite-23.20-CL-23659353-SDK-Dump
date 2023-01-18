// Class /Script/FortniteGame.FortPhysicsBall
// Size: 0xa58
class AFortPhysicsBall : public ABuildingGameplayActor
{
	bool bDetachRootChildrenOnServer; // 0x9d8 (0x1)
	bool bUpdateRotationOnlyIfRendered; // 0x9d9 (0x1)
	bool bRollingAudioFaded; // 0x9da (0x1)
	unsigned char unreflected_9db[0x1]; // 0x9db (0x1) 
	float UpdateRollingAudioRangeMeters; // 0x9dc (0x4)
	class USphereComponent* SphereCollision; // 0x9e0 (0x8)
	class USceneComponent* RotationPivot; // 0x9e8 (0x8)
	class UFortWaterInteractionComponent* WaterInteractionComponent; // 0x9f0 (0x8)
	class USceneComponent* RotatedComponent; // 0x9f8 (0x8)
	class UFortVehicleAudioVoice* RollingAudioComponent; // 0xa00 (0x8)
	unsigned char unreflected_a08[0x1c]; // 0xa08 (0x1c) 
	bool bEnableBackspinOnKick; // 0xa24 (0x1)
	bool bApplyingBackspin; // 0xa25 (0x1)
	unsigned char unreflected_a26[0x2]; // 0xa26 (0x2) 
	float BackspinRotationScale; // 0xa28 (0x4)
	bool bEnableLiftAndDrag; // 0xa2c (0x1)
	bool bStopLiftWhenFalling; // 0xa2d (0x1)
	bool bApplyingLift; // 0xa2e (0x1)
	unsigned char unreflected_a2f[0x1]; // 0xa2f (0x1) 
	float LiftFactor; // 0xa30 (0x4)
	float StopLiftHorizontalVelocityThreshold; // 0xa34 (0x4)
	float StopLiftVerticalVelocityThreshold; // 0xa38 (0x4)
	float StopLiftTimeDuration; // 0xa3c (0x4)
	float LiftDuration; // 0xa40 (0x4)
	float DragVelocityThreshold; // 0xa44 (0x4)
	float DragFactor; // 0xa48 (0x4)
	float WaterMinRotationSpeed; // 0xa4c (0x4)
	float WaterRotationInterpSpeed; // 0xa50 (0x4)
	float WaterAxisFlipSpeed; // 0xa54 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsBall.UpdateDirectionAndRotation (Underlying native function: UpdateDirectionAndRotation 0x8a79f84)
	void UpdateDirectionAndRotation(float& DeltaSeconds); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPhysicsBall.OnHitTarget (Has no native function)
	void OnHitTarget(struct FVector& StartPos, struct FVector& EndPos); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortPhysicsBall.AuthTriggerTargetHit (Underlying native function: AuthTriggerTargetHit 0x8a77a10)
	void AuthTriggerTargetHit(struct FVector& StartPos, struct FVector& EndPos); // (Net | NetReliable | Native | Event | Public | NetServer | HasDefaults | BlueprintCallable | 0x80000000)
};

