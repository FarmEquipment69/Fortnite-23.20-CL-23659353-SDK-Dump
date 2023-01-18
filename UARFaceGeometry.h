// Class /Script/AugmentedReality.ARFaceGeometry
// Size: 0x2c0
class UARFaceGeometry : public UARTrackedGeometry
{
	struct FVector LookAtTarget; // 0x158 (0x18)
	bool bIsTracked; // 0x170 (0x1)
	unsigned char unreflected_171[0x7]; // 0x171 (0x7) 
	struct TMap<enum EARFaceBlendShape, float> BlendShapes; // 0x178 (0x50)
	unsigned char unreflected_1c8[0x38]; // 0x1c8 (0x38) 
	struct FTransform LeftEyeTransform; // 0x200 (0x60)
	struct FTransform RightEyeTransform; // 0x260 (0x60)

	/* Functions */

	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform (Underlying native function: GetWorldSpaceEyeTransform 0x97bca70)
	struct FTransform GetWorldSpaceEyeTransform(enum EAREye& Eye); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform (Underlying native function: GetLocalSpaceEyeTransform 0x97bb404)
	struct FTransform GetLocalSpaceEyeTransform(enum EAREye& Eye); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue (Underlying native function: GetBlendShapeValue 0x97babb0)
	float GetBlendShapeValue(enum EARFaceBlendShape& BlendShape); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes (Underlying native function: GetBlendShapes 0x97bac40)
	struct TMap<enum EARFaceBlendShape, float> GetBlendShapes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

