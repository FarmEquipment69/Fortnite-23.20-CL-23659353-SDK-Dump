// Class /Script/Engine.RectLightComponent
// Size: 0x430
class URectLightComponent : public ULocalLightComponent
{
	float SourceWidth; // 0x408 (0x4)
	float SourceHeight; // 0x40c (0x4)
	float BarnDoorAngle; // 0x410 (0x4)
	float BarnDoorLength; // 0x414 (0x4)
	class UTexture* SourceTexture; // 0x418 (0x8)
	unsigned char padding_420[0x10]; // 0x420 (0x10)

	/* Functions */

	// Function /Script/Engine.RectLightComponent.SetSourceWidth (Underlying native function: SetSourceWidth 0x9cfa668)
	void SetSourceWidth(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.RectLightComponent.SetSourceTexture (Underlying native function: SetSourceTexture 0x9cfa5c8)
	void SetSourceTexture(class UTexture*& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.RectLightComponent.SetSourceHeight (Underlying native function: SetSourceHeight 0x9cf95b4)
	void SetSourceHeight(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.RectLightComponent.SetBarnDoorLength (Underlying native function: SetBarnDoorLength 0x9cf8480)
	void SetBarnDoorLength(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.RectLightComponent.SetBarnDoorAngle (Underlying native function: SetBarnDoorAngle 0x9cf83fc)
	void SetBarnDoorAngle(float& NewValue); // (Final | Native | Public | BlueprintCallable)
};

