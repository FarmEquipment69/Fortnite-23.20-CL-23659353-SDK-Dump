// Class /Script/FortniteGame.GameplayEffectVolume
// Size: 0x330
class AGameplayEffectVolume : public APhysicsVolume
{
	class UClass* GameplayEffect; // 0x2d0 (0x8)
	int GameplayEffectLevel; // 0x2d8 (0x4)
	unsigned char padding_2dc[0x54]; // 0x2dc (0x54)

	/* Functions */

	// Function /Script/FortniteGame.GameplayEffectVolume.RemoveGameplayEffect (Underlying native function: RemoveGameplayEffect 0x90104ac)
	void RemoveGameplayEffect(class AActor*& Actor); // (Final | Native | Public)

	// Function /Script/FortniteGame.GameplayEffectVolume.ApplyGameplayEffect (Underlying native function: ApplyGameplayEffect 0x900cdd8)
	void ApplyGameplayEffect(class AActor*& Actor); // (Final | Native | Public)
};

