// ScriptStruct /Script/FortniteGame.ProjectileHomingData
// Size: 0x58
struct FProjectileHomingData
{
	enum EFortHomingStyle HomingStyle; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MinTurnSpeed; // 0x4 (0x4)
	float MaxTurnSpeed; // 0x8 (0x4)
	float RampTimeFromMinToMaxTurnSpeed; // 0xc (0x4)
	float LockTargetDistanceThreshold; // 0x10 (0x4)
	int RandomSeed; // 0x14 (0x4)
	struct TWeakObjectPtr<class AActor> LockedOnTarget; // 0x18 (0x8)
	struct FVector LockedOnTargetPosition; // 0x20 (0x18)
	struct FVector TargetOffset; // 0x38 (0x18)
	bool bScaleTargetOffsetWithCapsuleHeight; // 0x50 (0x1)
	bool ResetTurnSpeedTimer; // 0x51 (0x1)
	unsigned char padding_52[0x6]; // 0x52 (0x6)
};

