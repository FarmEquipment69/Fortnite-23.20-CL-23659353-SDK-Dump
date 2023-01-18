// Class /Script/Engine.SoundfieldEndpointSubmix
// Size: 0x78
class USoundfieldEndpointSubmix : public USoundSubmixBase
{
	struct FName SoundfieldEndpointType; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UClass* EndpointSettingsClass; // 0x48 (0x8)
	class USoundfieldEndpointSettingsBase* EndpointSettings; // 0x50 (0x8)
	class UClass* EncodingSettingsClass; // 0x58 (0x8)
	class USoundfieldEncodingSettingsBase* EncodingSettings; // 0x60 (0x8)
	struct TArray<class USoundfieldEffectBase*> SoundfieldEffectChain; // 0x68 (0x10)
};

