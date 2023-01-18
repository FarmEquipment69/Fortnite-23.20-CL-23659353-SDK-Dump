// ScriptStruct /Script/FortniteGame.AttachedParticleComponentDef
// Size: 0xa0
struct FAttachedParticleComponentDef
{
	struct FTransform Transform; // 0x0 (0x60)
	struct FName ParentSocket; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TWeakObjectPtr<class UParticleSystem> Template; // 0x68 (0x28)
	struct TEnumAsByte<EDetailMode> DetailMode; // 0x90 (0x1)
	unsigned char padding_91[0xf]; // 0x91 (0xf)
};

