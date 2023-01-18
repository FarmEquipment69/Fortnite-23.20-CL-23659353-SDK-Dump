// Class /Script/Engine.CameraShakeBase
// Size: 0xf0
class UCameraShakeBase : public UObject
{
	bool bSingleInstance; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float ShakeScale; // 0x2c (0x4)
	class UCameraShakePattern* RootShakePattern; // 0x30 (0x8)
	class APlayerCameraManager* CameraManager; // 0x38 (0x8)
	unsigned char padding_40[0xb0]; // 0x40 (0xb0)

	/* Functions */

	// Function /Script/Engine.CameraShakeBase.SetRootShakePattern (Underlying native function: SetRootShakePattern 0x9cbfec0)
	void SetRootShakePattern(class UCameraShakePattern*& InPattern); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraShakeBase.GetRootShakePattern (Underlying native function: GetRootShakePattern 0x7399960)
	class UCameraShakePattern* GetRootShakePattern(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

