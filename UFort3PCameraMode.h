// Class /Script/FortniteGame.Fort3PCameraMode
// Size: 0x1e8
class UFort3PCameraMode : public UFortCameraMode
{
	struct FViewOffsetData ViewOffsets; // 0x58 (0x48)
	float FOV; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FVector SafeLocationOffset; // 0xa8 (0x18)
	unsigned char bValidateSafeLoc; // 0xc0 (0x1)
	unsigned char bDoPredictiveAvoidance; // 0xc0 (0x1)
	unsigned char bPreventPenetration; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct TArray<struct FPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers; // 0xc8 (0x10)
	float PenetrationBlendInTime; // 0xd8 (0x4)
	float PenetrationBlendOutTime; // 0xdc (0x4)
	struct FVector PivotLocInterpSpeed; // 0xe0 (0x18)
	float PivotRotInterpSpeed; // 0xf8 (0x4)
	float FOVInterpSpeed; // 0xfc (0x4)
	float ViewOffsetInterpSpeed; // 0x100 (0x4)
	float SafeLocationInterpSpeed; // 0x104 (0x4)
	struct FVector LastActualViewOffset; // 0x108 (0x18)
	struct FVector LastIdealViewOffset; // 0x120 (0x18)
	struct FVector LastSafeLocationLocal; // 0x138 (0x18)
	struct FVector LastSafeLocation; // 0x150 (0x18)
	float LastSafeLocBlockedPct; // 0x168 (0x4)
	float LastPenetrationBlockedPct; // 0x16c (0x4)
	struct FVector LastActualPivotLoc; // 0x170 (0x18)
	struct FRotator LastActualPivotRot; // 0x188 (0x18)
	struct FVector LastIdealPivotLoc; // 0x1a0 (0x18)
	struct FRotator LastIdealPivotRot; // 0x1b8 (0x18)
	unsigned char padding_1d0[0x18]; // 0x1d0 (0x18)
};

