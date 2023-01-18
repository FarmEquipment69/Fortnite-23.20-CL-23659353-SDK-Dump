// Class /Script/FortniteUI.KairosViewport
// Size: 0x248
class UKairosViewport : public UContentWidget
{
	struct FLinearColor BackgroundColor; // 0x160 (0x10)
	class UMaterialInterface* EffectMaterial; // 0x170 (0x8)
	struct TEnumAsByte<ESceneCaptureSource> CaptureSource; // 0x178 (0x1)
	unsigned char unreflected_179[0x7]; // 0x179 (0x7) 
	struct FVector ViewLocation; // 0x180 (0x18)
	struct FRotator ViewRotation; // 0x198 (0x18)
	class UClass* DefaultGameMode; // 0x1b0 (0x8)
	class UMaterialInstanceDynamic* DynamicMaterial; // 0x1b8 (0x8)
	class UTextureRenderTarget2D* RenderTarget; // 0x1c0 (0x8)
	class USceneCaptureComponent2D* CaptureComponent; // 0x1c8 (0x8)
	unsigned char unreflected_1d0[0x8]; // 0x1d0 (0x8) 
	class UClass* ViewportActorClass; // 0x1d8 (0x8)
	struct TArray<class AActor*> SpawnedActors; // 0x1e0 (0x10)
	unsigned char padding_1f0[0x58]; // 0x1f0 (0x58)
};

