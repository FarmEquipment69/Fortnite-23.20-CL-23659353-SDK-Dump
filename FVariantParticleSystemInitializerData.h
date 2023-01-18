// ScriptStruct /Script/FortniteGame.VariantParticleSystemInitializerData
// Size: 0x68
struct FVariantParticleSystemInitializerData
{
	struct FName ParticleComponentName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UFXSystemAsset> ParticleSystem; // 0x8 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> MeshToBindTO; // 0x30 (0x28)
	struct FName AttachSocketName; // 0x58 (0x4)
	enum EAttachmentRule LocationRule; // 0x5c (0x1)
	enum EAttachmentRule RotationRule; // 0x5d (0x1)
	enum EAttachmentRule ScaleRule; // 0x5e (0x1)
	bool bWeldSimulatedBodies; // 0x5f (0x1)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

