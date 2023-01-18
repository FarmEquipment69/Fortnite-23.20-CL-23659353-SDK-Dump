// Class /Script/MantisRuntime.UncleBrollyWeaponAnimInstance
// Size: 0x390
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{
	class UClass* UncleBrollyItemLayer; // 0x348 (0x8)
	struct FRotator UmbrellaRotation; // 0x350 (0x18)
	float UmbrellaSpinSpeed; // 0x368 (0x4)
	float BlockDeployEndPlayrate; // 0x36c (0x4)
	float BlockDeployEndStartPosition; // 0x370 (0x4)
	bool bIsDodging; // 0x374 (0x1)
	bool bIsPlayingMeleeAnim; // 0x375 (0x1)
	bool bIsUmbrellaFailing; // 0x376 (0x1)
	bool bIsMeleeGuarding; // 0x377 (0x1)
	bool bIsInAir; // 0x378 (0x1)
	bool bIsDashing; // 0x379 (0x1)
	bool bIsSprinting; // 0x37a (0x1)
	bool bIsPredictingEnd; // 0x37b (0x1)
	bool bIsDashCharging; // 0x37c (0x1)
	bool bIsDashPredictingEnd; // 0x37d (0x1)
	bool bInAirAndMeleeGuarding; // 0x37e (0x1)
	bool bTransitionDefaulttoDeployStart; // 0x37f (0x1)
	bool bTransitionDeployStarttoDefault; // 0x380 (0x1)
	bool bTransitionFailtoFailToDeploy; // 0x381 (0x1)
	bool bTransitionFailLooptoDeployEnd; // 0x382 (0x1)
	unsigned char padding_383[0xd]; // 0x383 (0xd)
};

