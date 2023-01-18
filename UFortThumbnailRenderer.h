// Class /Script/FortniteGame.FortThumbnailRenderer
// Size: 0x88
class UFortThumbnailRenderer : public UObject
{
	class UMaterialInterface* AlphaMaskMaterial; // 0x28 (0x8)
	class UMaterialInterface* EffectMaskMaterial; // 0x30 (0x8)
	class UWorld* PrivateWorld; // 0x38 (0x8)
	int RendererIndex; // 0x40 (0x4)
	int SurfaceWidth; // 0x44 (0x4)
	int SurfaceHeight; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UTextureRenderTarget2D* DiffuseRT; // 0x50 (0x8)
	class UTextureRenderTarget2D* AlphaMaskRT; // 0x58 (0x8)
	class UTextureRenderTarget2D* EffectsRT; // 0x60 (0x8)
	class USceneCaptureComponent2D* CaptureComponent; // 0x68 (0x8)
	struct TWeakObjectPtr<class AActor> CaptureTargetPtr; // 0x70 (0x8)
	struct TArray<struct TWeakObjectPtr<class AActor>> AlphaMaskActorPtrs; // 0x78 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortThumbnailRenderer.SetRenderTargetSize (Underlying native function: SetRenderTargetSize 0x8fbd8c0)
	void SetRenderTargetSize(int& Width, int& Height); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.SetCaptureTarget (Underlying native function: SetCaptureTarget 0x8fbd7c0)
	void SetCaptureTarget(class AActor*& InCaptureTarget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.SetAlphaMaskedActors (Underlying native function: SetAlphaMaskedActors 0x8fbd724)
	void SetAlphaMaskedActors(struct TArray<class AActor*>& InCaptureTarget); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.ReleaseResources (Underlying native function: ReleaseResources 0xfb0c9c)
	void ReleaseResources(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.ReclaimResources (Underlying native function: ReclaimResources 0x28b2a48)
	void ReclaimResources(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.GetRendererIndex (Underlying native function: GetRendererIndex 0x7f92868)
	int GetRendererIndex(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortThumbnailRenderer.GetOrCreateEffectsRenderTarget (Underlying native function: GetOrCreateEffectsRenderTarget 0x8fbd18c)
	class UTextureRenderTarget2D* GetOrCreateEffectsRenderTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.GetOrCreateDiffuseRenderTarget (Underlying native function: GetOrCreateDiffuseRenderTarget 0x8fbd168)
	class UTextureRenderTarget2D* GetOrCreateDiffuseRenderTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.GetOrCreateAlphaMaskRenderTarget (Underlying native function: GetOrCreateAlphaMaskRenderTarget 0x8fbd0b4)
	class UTextureRenderTarget2D* GetOrCreateAlphaMaskRenderTarget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.CaptureEffects (Underlying native function: CaptureEffects 0x8fbce5c)
	void CaptureEffects(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.CaptureDiffuse (Underlying native function: CaptureDiffuse 0x8fbce48)
	void CaptureDiffuse(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortThumbnailRenderer.CaptureAlphaMask (Underlying native function: CaptureAlphaMask 0x8fbce34)
	void CaptureAlphaMask(); // (Final | Native | Public | BlueprintCallable)
};

