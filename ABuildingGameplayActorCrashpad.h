// Class /Script/FortniteGame.BuildingGameplayActorCrashpad
// Size: 0xb28
class ABuildingGameplayActorCrashpad : public ABuildingGameplayActor
{
	struct FScalableFloat UseNativeCollisionHandling; // 0x9d8 (0x28)
	struct FCrashpadStaticParams StaticParams; // 0xa00 (0x128)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorCrashpad.HandleCollision (Underlying native function: HandleCollision 0x8092364)
	void HandleCollision(struct FCrashpadDynamicParams& DynamicParams); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActorCrashpad.DoBounceMulticast (Has no native function)
	void DoBounceMulticast(struct FVector& BounceLocation, float& BounceIntensity, class AActor*& BouncingActor); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorCrashpad.DestroyCrashpad (Has no native function)
	void DestroyCrashpad(); // (Event | Public | BlueprintEvent)
};

