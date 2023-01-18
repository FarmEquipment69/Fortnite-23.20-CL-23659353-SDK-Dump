// Class /Script/FortniteUI.FortSimpleMaterialProgressBar
// Size: 0x360
class UFortSimpleMaterialProgressBar : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnFillAnimationFinished; // 0x290 (0x10)
	bool bOverrideDefaultColorA; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	struct FLinearColor CachedColorA; // 0x2a4 (0x10)
	bool bOverrideDefaultColorB; // 0x2b4 (0x1)
	unsigned char unreflected_2b5[0x3]; // 0x2b5 (0x3) 
	struct FLinearColor CachedColorB; // 0x2b8 (0x10)
	bool bOverrideDefaultColorBackground; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	struct FLinearColor CachedColorBackground; // 0x2cc (0x10)
	bool bOverrideDefaultEnableColoredSegments; // 0x2dc (0x1)
	bool bCachedEnableColoredSegments; // 0x2dd (0x1)
	bool bOverrideDefaultSegmentColor; // 0x2de (0x1)
	unsigned char unreflected_2df[0x1]; // 0x2df (0x1) 
	struct FLinearColor CachedSegmentColor; // 0x2e0 (0x10)
	bool bOverrideDefaultSegments; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x3]; // 0x2f1 (0x3) 
	int Segments; // 0x2f4 (0x4)
	bool bOverrideDefaultSegmentEdge; // 0x2f8 (0x1)
	unsigned char unreflected_2f9[0x3]; // 0x2f9 (0x3) 
	float SegmentEdge; // 0x2fc (0x4)
	bool bOverrideDefaultFillEdgeSoftness; // 0x300 (0x1)
	unsigned char unreflected_301[0x3]; // 0x301 (0x3) 
	float FillEdgeSoftness; // 0x304 (0x4)
	bool bOverrideDefaultGlowEdge; // 0x308 (0x1)
	unsigned char unreflected_309[0x3]; // 0x309 (0x3) 
	float GlowEdge; // 0x30c (0x4)
	bool bOverrideDefaultGlowSoftness; // 0x310 (0x1)
	unsigned char unreflected_311[0x3]; // 0x311 (0x3) 
	float GlowSoftness; // 0x314 (0x4)
	bool bOverrideDefaultOutlineScale; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	float OutlineScale; // 0x31c (0x4)
	bool bUseStroke; // 0x320 (0x1)
	unsigned char unreflected_321[0x7]; // 0x321 (0x7) 
	class UMaterialInterface* StrokeMaterial; // 0x328 (0x8)
	class UMaterialInterface* NoStrokeMaterial; // 0x330 (0x8)
	struct FName ProgressParamName; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	class UImage* ImageBar; // 0x340 (0x8)
	class UWidgetAnimation* BoundAnimFillBar; // 0x348 (0x8)
	class UMaterialInstanceDynamic* CachedMID; // 0x350 (0x8)
	unsigned char padding_358[0x8]; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetStartProgress (Underlying native function: SetStartProgress 0xa622f18)
	void SetStartProgress(float& StartProgress); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetSegments (Underlying native function: SetSegments 0xa622b14)
	void SetSegments(int& NumSegments); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetSegmentColor (Underlying native function: SetSegmentColor 0x61b47f0)
	void SetSegmentColor(struct FLinearColor& SegmentColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetProgress (Underlying native function: SetProgress 0xef5064)
	void SetProgress(float& Progress); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetEnableColoredSegments (Underlying native function: SetEnableColoredSegments 0x61b4740)
	void SetEnableColoredSegments(bool& bEnableColoredSegments); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetColorBackground (Underlying native function: SetColorBackground 0x20b58e4)
	void SetColorBackground(struct FLinearColor& ColorBackground); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetColorB (Underlying native function: SetColorB 0x1fd3e54)
	void SetColorB(struct FLinearColor& ColorB); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.SetColorA (Underlying native function: SetColorA 0x1fd3d04)
	void SetColorA(struct FLinearColor& ColorA); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortSimpleMaterialProgressBar.OnFillAnimationFinished__DelegateSignature (Has no native function)
	void OnFillAnimationFinishedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.AnimateProgressFromStart (Underlying native function: AnimateProgressFromStart 0xa61bba0)
	void AnimateProgressFromStart(float& Start, float& End, float& AnimSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSimpleMaterialProgressBar.AnimateProgressFromCurrent (Underlying native function: AnimateProgressFromCurrent 0x2815078)
	void AnimateProgressFromCurrent(float& End, float& AnimSpeed); // (Final | Native | Public | BlueprintCallable)
};

