// Class /Script/Engine.InputDeviceProperty
// Size: 0x30
class UInputDeviceProperty : public UObject
{
	float PropertyDuration; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)

	/* Functions */

	// Function /Script/Engine.InputDeviceProperty.ResetDeviceProperty (Underlying native function: ResetDeviceProperty 0x6048540)
	void ResetDeviceProperty(struct FPlatformUserId& PlatformUser); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.InputDeviceProperty.EvaluateDeviceProperty (Underlying native function: EvaluateDeviceProperty 0x6047e70)
	void EvaluateDeviceProperty(struct FPlatformUserId& PlatformUser, float& DeltaTime, float& Duration); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Engine.InputDeviceProperty.ApplyDeviceProperty (Underlying native function: ApplyDeviceProperty 0x6047dd0)
	void ApplyDeviceProperty(struct FPlatformUserId& UserId); // (Native | Public)
};

