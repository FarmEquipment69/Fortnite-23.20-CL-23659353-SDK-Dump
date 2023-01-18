// Class /Script/GrappleParentRuntime.FortCameraModifier_Swinging
// Size: 0x288
class UFortCameraModifier_Swinging : public UCameraModifier
{
	float MaxVelocityDeltaPerSecond; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UCurveFloat* BlendInCurve; // 0x50 (0x8)
	class UCurveFloat* BlendOutCurve; // 0x58 (0x8)
	struct FSpeedScaledAxisOffsetData ForwardOffsetData; // 0x60 (0x60)
	struct FVector2D TotalForwardOffsetBounds; // 0xc0 (0x10)
	struct FSpeedScaledAxisOffsetData RightOffsetData; // 0xd0 (0x60)
	struct FVector2D RightForwardOffsetMultiplierBounds; // 0x130 (0x10)
	struct FSpeedScaledAxisOffsetData UpOffsetData; // 0x140 (0x60)
	struct FVector2D UpPositiveForwardOffsetMultiplierBounds; // 0x1a0 (0x10)
	struct FVector2D UpNegativeForwardOffsetMultiplierBounds; // 0x1b0 (0x10)
	float FOVInterpSpeed; // 0x1c0 (0x4)
	unsigned char unreflected_1c4[0x4]; // 0x1c4 (0x4) 
	struct FVector2D FOVBounds; // 0x1c8 (0x10)
	class UCurveFloat* BoostCurve; // 0x1d8 (0x8)
	struct FScalableFloat BoostModifier; // 0x1e0 (0x28)
	float AttachBoostDuration; // 0x208 (0x4)
	float AttachBoostMagnitude; // 0x20c (0x4)
	float DetachBoostDuration; // 0x210 (0x4)
	float DetachBoostMagnitude; // 0x214 (0x4)
	class UCurveFloat* SlidingHeightCurve; // 0x218 (0x8)
	struct FGameplayTag SlidingGameplayTag; // 0x220 (0x4)
	float SlideHeightTransitionDuration; // 0x224 (0x4)
	float MaxSlidingSpeedMultiplierOffset; // 0x228 (0x4)
	unsigned char unreflected_22c[0x4]; // 0x22c (0x4) 
	class AFortPlayerPawnAthena* CachedPlayer; // 0x230 (0x8)
	class AFortWeaponRangedDualSwing* CachedWeapon; // 0x238 (0x8)
	unsigned char padding_240[0x48]; // 0x240 (0x48)

	/* Functions */

	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager (Underlying native function: RemoveSelfFromCameraManager 0x7264818)
	void RemoveSelfFromCameraManager(); // (Final | Native | Protected)

	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers (Underlying native function: CalculateDynamicMultipliers 0x7264568)
	void CalculateDynamicMultipliers(float& OutFOVBoundsMultiplier, float& OutBoostOffsetMultiplier); // (Native | Event | Protected | HasOutParms | BlueprintEvent | Const)
};

