// ScriptStruct /Script/FortniteGame.LockOnInfo
// Size: 0x50
struct FLockOnInfo
{
	enum ELockOnState State; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct TWeakObjectPtr<class AFortWeapon> Weapon; // 0x4 (0x8)
	struct TWeakObjectPtr<class AActor> LockOnTarget; // 0xc (0x8)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FRotator CamRotAtTargetAcquisiton; // 0x18 (0x18)
	struct FVector2D LockOnCoords; // 0x30 (0x10)
	float TargetAcquisitionTime; // 0x40 (0x4)
	float TargetLockOnTime; // 0x44 (0x4)
	float TargetOutOfSightTime; // 0x48 (0x4)
	float CooldownStartTime; // 0x4c (0x4)
};

