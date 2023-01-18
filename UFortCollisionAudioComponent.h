// Class /Script/FortniteGame.FortCollisionAudioComponent
// Size: 0xc0
class UFortCollisionAudioComponent : public UActorComponent
{
	struct TArray<struct FFortCollisionAudioTriggerData> CollisionSounds; // 0xa0 (0x10)
	float CheckCollisionLeashInterval; // 0xb0 (0x4)
	unsigned char padding_b4[0xc]; // 0xb4 (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortCollisionAudioComponent.SetCollisionSoundAtIndex (Underlying native function: SetCollisionSoundAtIndex 0x23ad280)
	void SetCollisionSoundAtIndex(int& Index, class USoundBase*& SoundToUse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCollisionAudioComponent.OnCollision (Underlying native function: OnCollision 0x1ebf9d8)
	void OnCollision(struct FVector& HitLocation, struct FVector& HitNormalImpulse, bool& outResult, float& OutMagnitude); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

