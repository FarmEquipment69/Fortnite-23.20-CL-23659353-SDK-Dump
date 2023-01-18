// Class /Script/Engine.BillboardComponent
// Size: 0x570
class UBillboardComponent : public UPrimitiveComponent
{
	class UTexture2D* Sprite; // 0x540 (0x8)
	unsigned char bIsScreenSizeScaled; // 0x548 (0x1)
	unsigned char unreflected_549[0x3]; // 0x549 (0x3) 
	float ScreenSize; // 0x54c (0x4)
	float U; // 0x550 (0x4)
	float UL; // 0x554 (0x4)
	float V; // 0x558 (0x4)
	float vL; // 0x55c (0x4)
	float OpacityMaskRefVal; // 0x560 (0x4)
	unsigned char padding_564[0xc]; // 0x564 (0xc)

	/* Functions */

	// Function /Script/Engine.BillboardComponent.SetUV (Underlying native function: SetUV 0x9ce2a5c)
	void SetUV(int& NewU, int& NewUL, int& NewV, int& NewVL); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetSpriteAndUV (Underlying native function: SetSpriteAndUV 0x9ce26ac)
	void SetSpriteAndUV(class UTexture2D*& NewSprite, int& NewU, int& NewUL, int& NewV, int& NewVL); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetSprite (Underlying native function: SetSprite 0x7a9d588)
	void SetSprite(class UTexture2D*& NewSprite); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.BillboardComponent.SetOpacityMaskRefVal (Underlying native function: SetOpacityMaskRefVal 0x9ce2304)
	void SetOpacityMaskRefVal(float& RefVal); // (Final | Native | Public | BlueprintCallable)
};

