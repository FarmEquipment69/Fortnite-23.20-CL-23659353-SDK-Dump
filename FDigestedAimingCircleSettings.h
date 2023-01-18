// ScriptStruct /Script/FortniteAI.DigestedAimingCircleSettings
// Size: 0x160
struct FDigestedAimingCircleSettings
{
	bool bUseAimingCircle; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float CircleCenterOffsetZ; // 0x4 (0x4)
	struct FScalableFloat MinCircleOpeningAngleVerticalCurve; // 0x8 (0x28)
	struct FScalableFloat MaxCircleOpeningAngleVerticalCurve; // 0x30 (0x28)
	struct FScalableFloat MinCircleOpeningAngleHorizontalCurve; // 0x58 (0x28)
	struct FScalableFloat MaxCircleOpeningAngleHorizontalCurve; // 0x80 (0x28)
	float MinCursorRotationSpeed; // 0xa8 (0x4)
	float MaxCursorRotationSpeed; // 0xac (0x4)
	float MinCursorUpdateInterval; // 0xb0 (0x4)
	float MaxCursorUpdateInterval; // 0xb4 (0x4)
	float MinCursorTrackingFrequency; // 0xb8 (0x4)
	float MaxCursorTrackingFrequency; // 0xbc (0x4)
	struct FScalableFloat CircleShrinkCurve; // 0xc0 (0x28)
	float MinDistanceForTimeBetweenHits; // 0xe8 (0x4)
	float MaxDistanceForTimeBetweenHits; // 0xec (0x4)
	float MinTimeBetweenHitsAtMinRange; // 0xf0 (0x4)
	float MaxTimeBetweenHitsAtMinRange; // 0xf4 (0x4)
	float MinTimeBetweenHitsAtMaxRange; // 0xf8 (0x4)
	float MaxTimeBetweenHitsAtMaxRange; // 0xfc (0x4)
	bool bForceMissEnabled; // 0x100 (0x1)
	bool bPreventHeadshots; // 0x101 (0x1)
	unsigned char unreflected_102[0x6]; // 0x102 (0x6) 
	struct FScalableFloat WeaponSpreadContributionToClampCurve; // 0x108 (0x28)
	float KillingBlowGracePeriodAtMinRange; // 0x130 (0x4)
	float KillingBlowGracePeriodAtMaxRange; // 0x134 (0x4)
	struct FScalableFloat ExtraHitOddsCurve; // 0x138 (0x28)
};

