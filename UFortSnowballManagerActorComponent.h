// Class /Script/IceRuntime.FortSnowballManagerActorComponent
// Size: 0x108
class UFortSnowballManagerActorComponent : public UGameFrameworkComponent
{
	struct FScalableFloat GlobalMaxSnowballs; // 0xa0 (0x28)
	struct FScalableFloat MaxSnowballsPerPlayer; // 0xc8 (0x28)
	struct TArray<class ABuildingActor*> TrackedSnowballs; // 0xf0 (0x10)
	unsigned char padding_100[0x8]; // 0x100 (0x8)

	/* Functions */

	// Function /Script/IceRuntime.FortSnowballManagerActorComponent.TrackSnowball (Underlying native function: TrackSnowball 0x7450060)
	void TrackSnowball(class ABuildingActor*& Snowball); // (Final | Native | Public | BlueprintCallable)
};

