// Class /Script/MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// Size: 0x4f0
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{
	struct FCachedAnimStateArray UmbrellaGliderOpenStateDataArray; // 0x460 (0x18)
	struct FVector WrapTranslation; // 0x478 (0x18)
	struct FRotator WrapRotation; // 0x490 (0x18)
	struct FRotator RootRotationOffset; // 0x4a8 (0x18)
	float LandingPredictedTimer; // 0x4c0 (0x4)
	bool bShouldUpdateYawCorrection; // 0x4c4 (0x1)
	bool bWasAcceleratingBeforeDodge; // 0x4c5 (0x1)
	unsigned char unreflected_4c6[0x2]; // 0x4c6 (0x2) 
	float UncleBrollyDeployCurveValue; // 0x4c8 (0x4)
	float DashChargeTier; // 0x4cc (0x4)
	float DashChargeAdditivePlayrate; // 0x4d0 (0x4)
	bool bIsUmbrellaFailing; // 0x4d4 (0x1)
	bool bIsMeleeGuarding; // 0x4d5 (0x1)
	bool bIsSprinting; // 0x4d6 (0x1)
	bool bIsInAir; // 0x4d7 (0x1)
	bool bIsLandingPredicted; // 0x4d8 (0x1)
	bool bIsJumping; // 0x4d9 (0x1)
	bool bIsDodging; // 0x4da (0x1)
	bool bIsDodgingEast; // 0x4db (0x1)
	bool bIsDodgingSouth; // 0x4dc (0x1)
	bool bIsDodgingWest; // 0x4dd (0x1)
	bool bIsDashing; // 0x4de (0x1)
	bool bIsDashCharging; // 0x4df (0x1)
	bool bIsDashPredictingEnd; // 0x4e0 (0x1)
	bool bIsChargeTier1; // 0x4e1 (0x1)
	bool bIsChargeTier2; // 0x4e2 (0x1)
	bool bIsChargeTier3; // 0x4e3 (0x1)
	bool bMeleeGuardingOrUmbrellaFailing; // 0x4e4 (0x1)
	bool bTransitionDefaulttoGuardLoop; // 0x4e5 (0x1)
	bool bTransitionDefaulttoGuardIntro; // 0x4e6 (0x1)
	bool bTransitionGuardIntrotoDefault; // 0x4e7 (0x1)
	bool bUpperBodyShouldPassThrough; // 0x4e8 (0x1)
	bool bUmbrellaGliderIsOpen; // 0x4e9 (0x1)
	unsigned char padding_4ea[0x6]; // 0x4ea (0x6)
};

