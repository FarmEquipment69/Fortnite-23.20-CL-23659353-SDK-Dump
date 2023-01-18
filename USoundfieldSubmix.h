// Class /Script/Engine.SoundfieldSubmix
// Size: 0x70
class USoundfieldSubmix : public USoundSubmixWithParentBase
{
	struct FName SoundfieldEncodingFormat; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class USoundfieldEncodingSettingsBase* EncodingSettings; // 0x50 (0x8)
	struct TArray<class USoundfieldEffectBase*> SoundfieldEffectChain; // 0x58 (0x10)
	class UClass* EncodingSettingsClass; // 0x68 (0x8)
};

