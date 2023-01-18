// Class /Script/VerseDevices.VerseCreativeObject
// Size: 0x38
class UVerseCreativeObject : public UObject
{
	class ABuildingActor* SavedActor; // 0x28 (0x8)
	unsigned char padding_30[0x8]; // 0x30 (0x8)

	/* Functions */

	// Function /Script/VerseDevices.VerseCreativeObject.OnActorDestroyedReleaseQuotaToSpatialInterface (Underlying native function: OnActorDestroyedReleaseQuotaToSpatialInterface 0x6d4c528)
	void OnActorDestroyedReleaseQuotaToSpatialInterface(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)
};

