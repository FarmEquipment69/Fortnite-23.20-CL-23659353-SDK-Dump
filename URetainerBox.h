// Class /Script/UMG.RetainerBox
// Size: 0x190
class URetainerBox : public UContentWidget
{
	bool bRetainRender; // 0x160 (0x1)
	bool RenderOnInvalidation; // 0x161 (0x1)
	bool RenderOnPhase; // 0x162 (0x1)
	unsigned char unreflected_163[0x1]; // 0x163 (0x1) 
	int Phase; // 0x164 (0x4)
	int PhaseCount; // 0x168 (0x4)
	unsigned char unreflected_16c[0x4]; // 0x16c (0x4) 
	class UMaterialInterface* EffectMaterial; // 0x170 (0x8)
	struct FName TextureParameter; // 0x178 (0x4)
	unsigned char padding_17c[0x14]; // 0x17c (0x14)

	/* Functions */

	// Function /Script/UMG.RetainerBox.SetTextureParameter (Underlying native function: SetTextureParameter 0x9b11e04)
	void SetTextureParameter(struct FName& TextureParameter); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RetainerBox.SetRetainRendering (Underlying native function: SetRetainRendering 0x9b109f0)
	void SetRetainRendering(bool& bInRetainRendering); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RetainerBox.SetRenderingPhase (Underlying native function: SetRenderingPhase 0x9b10908)
	void SetRenderingPhase(int& RenderPhase, int& TotalPhases); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RetainerBox.SetEffectMaterial (Underlying native function: SetEffectMaterial 0x9b0dc6c)
	void SetEffectMaterial(class UMaterialInterface*& EffectMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RetainerBox.RequestRender (Underlying native function: RequestRender 0x9b0c55c)
	void RequestRender(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.RetainerBox.GetEffectMaterial (Underlying native function: GetEffectMaterial 0x9b0a9a8)
	class UMaterialInstanceDynamic* GetEffectMaterial(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

