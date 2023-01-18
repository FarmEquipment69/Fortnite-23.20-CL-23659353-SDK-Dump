// ScriptStruct /Script/FortniteGame.ItemWrapPreviewEntry
// Size: 0x140
struct FItemWrapPreviewEntry
{
	struct TWeakObjectPtr<class UObject> PreviewObject; // 0x0 (0x28)
	struct TWeakObjectPtr<class UObject> PreviewObjectAnimation; // 0x28 (0x28)
	struct TWeakObjectPtr<class UClass> PreviewObjectAnimInstance; // 0x50 (0x28)
	unsigned char unreflected_78[0x8]; // 0x78 (0x8) 
	struct FTransform PreviewTransform; // 0x80 (0x60)
	int WrapSectionMask; // 0xe0 (0x4)
	unsigned char bPreviewUsingVehicleShader; // 0xe4 (0x1)
	unsigned char unreflected_e5[0x3]; // 0xe5 (0x3) 
	struct TWeakObjectPtr<class UObject> PreviewObjectFiringAnimation; // 0xe8 (0x28)
	struct TWeakObjectPtr<class UObject> PreviewObjectMuzzleFlashParticleSystem; // 0x110 (0x28)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

