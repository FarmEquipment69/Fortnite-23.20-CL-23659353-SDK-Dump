// Class /Script/FortniteGame.FortStormShieldComponent
// Size: 0x2c0
class UFortStormShieldComponent : public USceneComponent
{
	struct FMulticastInlineDelegate OnStormShieldStatusChanged; // 0x2a0 (0x10)
	bool bCareAboutEdgeOfStorm; // 0x2b0 (0x1)
	bool bDisabled; // 0x2b1 (0x1)
	unsigned char unreflected_2b2[0x2]; // 0x2b2 (0x2) 
	float DistanceFromEdgeOfStormShield; // 0x2b4 (0x4)
	unsigned char padding_2b8[0x8]; // 0x2b8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortStormShieldComponent.StormShieldDestroyed (Underlying native function: StormShieldDestroyed 0x8eacd68)
	void StormShieldDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortStormShieldComponent.StormShieldCreated (Underlying native function: StormShieldCreated 0x8eacb98)
	void StormShieldCreated(class AFortMissionStormShield*& Shield); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortStormShieldComponent.OwnerDestroyed (Underlying native function: OwnerDestroyed 0x8eac378)
	void OwnerDestroyed(class AActor*& InOwner); // (Final | Native | Protected)
};

