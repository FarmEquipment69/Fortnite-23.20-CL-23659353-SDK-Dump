// Class /Script/FortniteGame.FortAnimNotify_AudioComponentParameters
// Size: 0x58
class UFortAnimNotify_AudioComponentParameters : public UAnimNotify
{
	enum EFortNotifyAudioParamsStoreSource Source; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FName DataStoreName; // 0x3c (0x4)
	struct FName ParameterGroupName; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FFortBasicAudioParam*> AudioParams; // 0x48 (0x10)
};

